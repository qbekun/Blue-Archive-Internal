#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_NESTEDSTRINGBUILDERCREATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4CD110)
#define CYSHARP_TEXT_NESTEDSTRINGBUILDERCREATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4CD180)

namespace Cysharp::Text
{
	inline static constexpr unsigned int NestedStringBuilderCreationException_TypeDefinitionIndex = 34678;

	class NestedStringBuilderCreationException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_NESTEDSTRINGBUILDERCREATIONEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_NESTEDSTRINGBUILDERCREATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

