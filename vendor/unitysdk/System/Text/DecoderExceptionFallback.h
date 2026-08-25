#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91593C0)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x91593D0)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9159430)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9159440)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9159490)

namespace System::Text
{
	inline static constexpr unsigned int DecoderExceptionFallback_TypeDefinitionIndex = 24224;

	class DecoderExceptionFallback : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

