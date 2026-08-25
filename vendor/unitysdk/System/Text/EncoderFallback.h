#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET UNITYSDK_OFFSET(0x915B4E0)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET UNITYSDK_OFFSET(0x915CEB0)
#define SYSTEM_TEXT_ENCODERFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODERFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x915C080)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallback_TypeDefinitionIndex = 24238;

	class EncoderFallback : public Il2CppObject
	{
	public:
		::System::Text::EncoderFallback* s_replacementFallback; // 0x0
		::System::Text::EncoderFallback* s_exceptionFallback; // 0x8

		::System::Text::EncoderFallback* get_ReplacementFallback()
		{
			return (return (::System::Text::EncoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET))(nullptr);
		}

		::System::Text::EncoderFallback* get_ExceptionFallback()
		{
			return (return (::System::Text::EncoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET))(nullptr);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

