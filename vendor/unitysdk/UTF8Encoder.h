#pragma once
#include "unitysdk.h"

#define UTF8ENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x916E710)
#define UTF8ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x916E720)
#define UTF8ENCODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x916E750)

	inline static constexpr unsigned int UTF8Encoder_TypeDefinitionIndex = 24257;

	class UTF8Encoder : public Il2CppObject
	{
	public:
		::System::Int32 surrogateChar; // 0x38

		::System::Void .ctor(::System::Text::UTF8Encoding* arg)
		{
			((::System::Void(*)(::System::Text::UTF8Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UTF8ENCODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8ENCODER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8ENCODER_GET_HASSTATE_OFFSET))(nullptr);
		}

	};

