#pragma once
#include "unitysdk.h"

#define UTF8DECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x916E760)
#define UTF8DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x916E770)
#define UTF8DECODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x916E7A0)

	inline static constexpr unsigned int UTF8Decoder_TypeDefinitionIndex = 24258;

	class UTF8Decoder : public Il2CppObject
	{
	public:
		::System::Int32 bits; // 0x30

		::System::Void .ctor(::System::Text::UTF8Encoding* arg)
		{
			((::System::Void(*)(::System::Text::UTF8Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UTF8DECODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8DECODER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8DECODER_GET_HASSTATE_OFFSET))(nullptr);
		}

	};

