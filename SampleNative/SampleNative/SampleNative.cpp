// SampleNative.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//

#include "stdafx.h"
#include "SampleNative.h"

SAMPLENATIVE_API int AddInt(int& i) {
	return i + 1;
}
