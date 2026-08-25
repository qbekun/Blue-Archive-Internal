#pragma once
#include "unitysdk.h"

#define UTF32DECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9167930)
#define UTF32DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x91681A0)
#define UTF32DECODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x91681D0)

	inline static constexpr unsigned int UTF32Decoder_TypeDefinitionIndex = 24249;

	class UTF32Decoder : public Il2CppObject
	{
	public:
		::System::Int32 iChar; // 0x30
		::System::Int32 readByteCount; // 0x34

		::System::Void .ctor(::System::Text::UTF32Encoding* arg)
		{
			((::System::Void(*)(::System::Text::UTF32Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UTF32DECODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF32DECODER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF32DECODER_GET_HASSTATE_OFFSET))(nullptr);
		}

	};

