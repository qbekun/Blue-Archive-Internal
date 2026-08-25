#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x984E570)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x984E580)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x984E6C0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_SET_STARTOFFSET_OFFSET UNITYSDK_OFFSET(0x984E6D0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_RESET_OFFSET UNITYSDK_OFFSET(0x984E6E0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_CANREPLACEAT_OFFSET UNITYSDK_OFFSET(0x984E710)

namespace System::Xml
{
	inline static constexpr unsigned int CharEntityEncoderFallback_TypeDefinitionIndex = 27627;

	class CharEntityEncoderFallback : public Il2CppObject
	{
	public:
		::System::Xml::CharEntityEncoderFallbackBuffer* fallbackBuffer; // 0x10
		::Il2CppArray<::System::Object*>* textContentMarks; // 0x18
		::System::Int32 endMarkPos; // 0x20
		::System::Int32 curMarkPos; // 0x24
		::System::Int32 startOffset; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_StartOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_SET_STARTOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_RESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanReplaceAt(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_CANREPLACEAT_OFFSET))(arg, nullptr);
		}

	};
}

