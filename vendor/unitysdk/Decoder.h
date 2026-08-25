#pragma once
#include "unitysdk.h"

#define DECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9172480)
#define DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x9172D30)
#define DECODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x9172D60)

	inline static constexpr unsigned int Decoder_TypeDefinitionIndex = 24260;

	class Decoder : public Il2CppObject
	{
	public:
		::System::Int32 lastByte; // 0x30
		::System::Char lastChar; // 0x34

		::System::Void .ctor(::System::Text::UnicodeEncoding* arg)
		{
			((::System::Void(*)(::System::Text::UnicodeEncoding*, ::PVOID))((::PBYTE)hIl2Cpp + DECODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODER_GET_HASSTATE_OFFSET))(nullptr);
		}

	};

