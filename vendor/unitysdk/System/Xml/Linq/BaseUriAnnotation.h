#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_BASEURIANNOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9851F80)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int BaseUriAnnotation_TypeDefinitionIndex = 37284;

	class BaseUriAnnotation : public Il2CppObject
	{
	public:
		::System::String* baseUri; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_BASEURIANNOTATION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

