#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET UNITYSDK_OFFSET(0x9158140)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET UNITYSDK_OFFSET(0x9159A70)
#define SYSTEM_TEXT_DECODERFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_DECODERFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9158E40)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallback_TypeDefinitionIndex = 24227;

	class DecoderFallback : public Il2CppObject
	{
	public:
		::System::Text::DecoderFallback* s_replacementFallback; // 0x0
		::System::Text::DecoderFallback* s_exceptionFallback; // 0x8

		::System::Text::DecoderFallback* get_ReplacementFallback()
		{
			return (return (::System::Text::DecoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET))(nullptr);
		}

		::System::Text::DecoderFallback* get_ExceptionFallback()
		{
			return (return (::System::Text::DecoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET))(nullptr);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

