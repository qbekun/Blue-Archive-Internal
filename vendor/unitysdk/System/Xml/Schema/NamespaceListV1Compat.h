#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_NAMESPACELISTV1COMPAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9882910)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTV1COMPAT_ALLOWS_OFFSET UNITYSDK_OFFSET(0x9882920)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceListV1Compat_TypeDefinitionIndex = 28080;

	class NamespaceListV1Compat : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTV1COMPAT_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Allows(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTV1COMPAT_ALLOWS_OFFSET))(str, nullptr);
		}

	};
}

