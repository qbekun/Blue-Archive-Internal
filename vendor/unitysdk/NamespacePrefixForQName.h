#pragma once
#include "unitysdk.h"

#define NAMESPACEPREFIXFORQNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DC150)
#define NAMESPACEPREFIXFORQNAME_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x98DD020)
#define NAMESPACEPREFIXFORQNAME_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x98DD050)
#define NAMESPACEPREFIXFORQNAME_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x98DD080)

	inline static constexpr unsigned int NamespacePrefixForQName_TypeDefinitionIndex = 28120;

	class NamespacePrefixForQName : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x10
		::System::String* ns; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACEPREFIXFORQNAME_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACEPREFIXFORQNAME_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACEPREFIXFORQNAME_LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetNamespacesInScope(::System::Xml::XmlNamespaceScope* arg)
		{
			return (return (Il2CppObject*(*)(::System::Xml::XmlNamespaceScope*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACEPREFIXFORQNAME_GETNAMESPACESINSCOPE_OFFSET))(arg, nullptr);
		}

	};

