// StopWatch.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

#include "StopWatch.h"

int main()
{
	CStopWatch stopWatch;

	stopWatch.Start();
	::Sleep(1000);
	stopWatch.Stop();

	::printf("%lld ms\n", stopWatch.MilliSeconds());
	::printf("%lld ��s\n", stopWatch.MicroSeconds());
	::printf("%lld ns\n", stopWatch.NanoSeconds());

    return 0;
}

