#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_NAMESPACECACHE_GET_OFFSET UNITYSDK_OFFSET(0x9857A80)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int NamespaceCache_TypeDefinitionIndex = 37302;

	class NamespaceCache : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XNamespace* _ns; // 0x10
		::System::String* _namespaceName; // 0x18

		::System::Xml::Linq::XNamespace* Get(::System::String* str)
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACECACHE_GET_OFFSET))(str, nullptr);
		}

	};
}

