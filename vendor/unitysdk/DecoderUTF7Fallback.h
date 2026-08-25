#pragma once
#include "unitysdk.h"

#define DECODERUTF7FALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9168580)
#define DECODERUTF7FALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x916A3E0)
#define DECODERUTF7FALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x916A450)
#define DECODERUTF7FALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x916A460)
#define DECODERUTF7FALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x916A4B0)

	inline static constexpr unsigned int DecoderUTF7Fallback_TypeDefinitionIndex = 24253;

	class DecoderUTF7Fallback : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACK_GETHASHCODE_OFFSET))(nullptr);
		}

	};

