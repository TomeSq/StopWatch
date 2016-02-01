#pragma once

#include <windows.h>

class CStopWatch 
{
public:
	CStopWatch()
	{
		if (!::QueryPerformanceFrequency(&m_frequency)) {
			throw "Error QueryPerformanceFrequency";
		}
	}

	void Start() 
	{
		::QueryPerformanceCounter(&m_startTime);
	}

	void Stop() 
	{
		::QueryPerformanceCounter(&m_stopTime);
	}

	__int64 MilliSeconds() const 
	{
		return (__int64)((m_stopTime.QuadPart - m_startTime.QuadPart) * 1000 / m_frequency.QuadPart);
	}

	__int64 MicroSeconds() const 
	{
		return (__int64)((m_stopTime.QuadPart - m_startTime.QuadPart) * 1000 * 1000 / m_frequency.QuadPart);
	}

	__int64 NanoSeconds() const 
	{
		return (__int64)((m_stopTime.QuadPart - m_startTime.QuadPart) * 1000 * 1000 * 1000 / m_frequency.QuadPart);
	}

protected:
	LARGE_INTEGER m_frequency;
	LARGE_INTEGER m_startTime;
	LARGE_INTEGER m_stopTime;
};
