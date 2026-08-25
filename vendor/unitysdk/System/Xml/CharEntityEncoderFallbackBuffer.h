#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x984E650)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x984E760)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x984E9D0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x984ECE0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x984ED30)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x984ED50)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x984ED80)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_SURROGATECHARTOUTF32_OFFSET UNITYSDK_OFFSET(0x984ECD0)

namespace System::Xml
{
	inline static constexpr unsigned int CharEntityEncoderFallbackBuffer_TypeDefinitionIndex = 27628;

	class CharEntityEncoderFallbackBuffer : public Il2CppObject
	{
	public:
		::System::Xml::CharEntityEncoderFallback* parent; // 0x30
		::System::String* charEntity; // 0x38
		::System::Int32 charEntityIndex; // 0x40

		::System::Void .ctor(::System::Xml::CharEntityEncoderFallback* arg)
		{
			((::System::Void(*)(::System::Xml::CharEntityEncoderFallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Boolean MovePrevious()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 SurrogateCharToUtf32(::System::Char arg, ::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_SURROGATECHARTOUTF32_OFFSET))(arg, arg, nullptr);
		}

	};
}

