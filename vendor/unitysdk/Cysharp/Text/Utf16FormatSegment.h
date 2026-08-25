#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_UTF16FORMATSEGMENT_GET_ISFORMATARGUMENT_OFFSET UNITYSDK_OFFSET(0xA4CDFB0)
#define CYSHARP_TEXT_UTF16FORMATSEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4CD7F0)

namespace Cysharp::Text
{
	inline static constexpr unsigned int Utf16FormatSegment_TypeDefinitionIndex = 34713;

	class Utf16FormatSegment : public Il2CppObject
	{
	public:
		::System::Int32 NotFormatIndex; // 0x0
		::System::Int32 Offset; // 0x10
		::System::Int32 Count; // 0x14
		::System::Int32 FormatIndex; // 0x18
		::System::Int32 Alignment; // 0x1C

		::System::Boolean get_IsFormatArgument()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16FORMATSEGMENT_GET_ISFORMATARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16FORMATSEGMENT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

