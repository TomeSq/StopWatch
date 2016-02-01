// StopWatch.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
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
	::printf("%lld μs\n", stopWatch.MicroSeconds());
	::printf("%lld ns\n", stopWatch.NanoSeconds());

    return 0;
}

