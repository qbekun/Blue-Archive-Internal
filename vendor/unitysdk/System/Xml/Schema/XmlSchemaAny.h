#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x98DF6D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x98DF6E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_SET_PROCESSCONTENTS_OFFSET UNITYSDK_OFFSET(0x98DF6F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x98DF700)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_RESOLVEDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x98DF710)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_PROCESSCONTENTSCORRECT_OFFSET UNITYSDK_OFFSET(0x98DF760)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESTRING_OFFSET UNITYSDK_OFFSET(0x98DF780)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x98DFCC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELISTV1COMPAT_OFFSET UNITYSDK_OFFSET(0x98DFD60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_ALLOWS_OFFSET UNITYSDK_OFFSET(0x98DFE10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DFE50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAny_TypeDefinitionIndex = 28126;

	class XmlSchemaAny : public Il2CppObject
	{
	public:
		::System::String* ns; // 0x78
		::System::Xml::Schema::XmlSchemaContentProcessing* processContents; // 0x80
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x88

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentProcessing*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_SET_PROCESSCONTENTS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::NamespaceList* get_NamespaceList()
		{
			return (return (::System::Xml::Schema::NamespaceList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESPACELIST_OFFSET))(nullptr);
		}

		::System::String* get_ResolvedNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_RESOLVEDNAMESPACE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaContentProcessing* get_ProcessContentsCorrect()
		{
			return (return (::System::Xml::Schema::XmlSchemaContentProcessing*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_PROCESSCONTENTSCORRECT_OFFSET))(nullptr);
		}

		::System::String* get_NameString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESTRING_OFFSET))(nullptr);
		}

		::System::Void BuildNamespaceList(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELIST_OFFSET))(str, nullptr);
		}

		::System::Void BuildNamespaceListV1Compat(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELISTV1COMPAT_OFFSET))(str, nullptr);
		}

		::System::Boolean Allows(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_ALLOWS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_.CTOR_OFFSET))(nullptr);
		}

	};
}

