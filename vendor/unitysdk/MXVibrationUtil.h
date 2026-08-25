#pragma once
#include "unitysdk.h"

#define MXVIBRATIONUTIL_PLAY_OFFSET UNITYSDK_OFFSET(0xA13070)

	inline static constexpr unsigned int MXVibrationUtil_TypeDefinitionIndex = 36570;

	class MXVibrationUtil : public Il2CppObject
	{
	public:
		::System::Void Play(MXVibrationType* arg)
		{
			((::System::Void(*)(MXVibrationType*, ::PVOID))((::PBYTE)hIl2Cpp + MXVIBRATIONUTIL_PLAY_OFFSET))(arg, nullptr);
		}

	};

