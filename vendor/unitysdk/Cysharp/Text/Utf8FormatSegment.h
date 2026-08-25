#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_UTF8FORMATSEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4CDF80)
#define CYSHARP_TEXT_UTF8FORMATSEGMENT_GET_ISFORMATARGUMENT_OFFSET UNITYSDK_OFFSET(0xA4CDFA0)

namespace Cysharp::Text
{
	inline static constexpr unsigned int Utf8FormatSegment_TypeDefinitionIndex = 34712;

	class Utf8FormatSegment : public Il2CppObject
	{
	public:
		::System::Int32 NotFormatIndex; // 0x0
		::System::Int32 Offset; // 0x10
		::System::Int32 Count; // 0x14
		::System::Int32 FormatIndex; // 0x18
		::System::Buffers::StandardFormat* StandardFormat; // 0x1C
		::System::Int32 Alignment; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Buffers::StandardFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Buffers::StandardFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF8FORMATSEGMENT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsFormatArgument()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF8FORMATSEGMENT_GET_ISFORMATARGUMENT_OFFSET))(nullptr);
		}

	};
}

