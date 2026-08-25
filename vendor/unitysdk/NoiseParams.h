#pragma once
#include "unitysdk.h"

#define NOISEPARAMS_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x2862220)

	inline static constexpr unsigned int NoiseParams_TypeDefinitionIndex = 34328;

	class NoiseParams : public Il2CppObject
	{
	public:
		::System::Single Frequency; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Boolean Constant; // 0x18

		::System::Single GetValueAt(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NOISEPARAMS_GETVALUEAT_OFFSET))(arg, arg, nullptr);
		}

	};

