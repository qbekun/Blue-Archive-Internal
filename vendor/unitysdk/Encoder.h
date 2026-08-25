#pragma once
#include "unitysdk.h"

#define ENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x916A110)
#define ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x916A390)
#define ENCODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x916A3C0)

	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 24252;

	class Encoder : public Il2CppObject
	{
	public:
		::System::Int32 bits; // 0x38
		::System::Int32 bitCount; // 0x3C

		::System::Void .ctor(::System::Text::UTF7Encoding* arg)
		{
			((::System::Void(*)(::System::Text::UTF7Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + ENCODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODER_GET_HASSTATE_OFFSET))(nullptr);
		}

	};

