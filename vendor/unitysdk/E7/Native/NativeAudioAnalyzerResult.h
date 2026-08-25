#pragma once
#include "../../unitysdk.h"

#define E7_NATIVE_NATIVEAUDIOANALYZERRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x289F720)

namespace E7::Native
{
	inline static constexpr unsigned int NativeAudioAnalyzerResult_TypeDefinitionIndex = 37979;

	class NativeAudioAnalyzerResult : public Il2CppObject
	{
	public:
		::System::Single averageFps; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZERRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

