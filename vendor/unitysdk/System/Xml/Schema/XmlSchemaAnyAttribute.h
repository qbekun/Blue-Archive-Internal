#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x98DFEA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_GET_PROCESSCONTENTS_OFFSET UNITYSDK_OFFSET(0x98DFEB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_SET_PROCESSCONTENTS_OFFSET UNITYSDK_OFFSET(0x98DFEC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_GET_NAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x98DFED0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_GET_PROCESSCONTENTSCORRECT_OFFSET UNITYSDK_OFFSET(0x98DFEE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x98DFEF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELISTV1COMPAT_OFFSET UNITYSDK_OFFSET(0x98DFF80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_ALLOWS_OFFSET UNITYSDK_OFFSET(0x98E0030)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_ISSUBSET_OFFSET UNITYSDK_OFFSET(0x98E0070)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_INTERSECTION_OFFSET UNITYSDK_OFFSET(0x98E00A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_UNION_OFFSET UNITYSDK_OFFSET(0x98E0160)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E0150)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAnyAttribute_TypeDefinitionIndex = 28127;

	class XmlSchemaAnyAttribute : public Il2CppObject
	{
	public:
		::System::String* ns; // 0x50
		::System::Xml::Schema::XmlSchemaContentProcessing* processContents; // 0x58
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x60

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaContentProcessing* get_ProcessContents()
		{
			return (return (::System::Xml::Schema::XmlSchemaContentProcessing*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_GET_PROCESSCONTENTS_OFFSET))(nullptr);
		}

		::System::Void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentProcessing*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_SET_PROCESSCONTENTS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::NamespaceList* get_NamespaceList()
		{
			return (return (::System::Xml::Schema::NamespaceList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_GET_NAMESPACELIST_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaContentProcessing* get_ProcessContentsCorrect()
		{
			return (return (::System::Xml::Schema::XmlSchemaContentProcessing*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_GET_PROCESSCONTENTSCORRECT_OFFSET))(nullptr);
		}

		::System::Void BuildNamespaceList(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELIST_OFFSET))(str, nullptr);
		}

		::System::Void BuildNamespaceListV1Compat(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELISTV1COMPAT_OFFSET))(str, nullptr);
		}

		::System::Boolean Allows(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_ALLOWS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSubset(::System::Xml::Schema::XmlSchemaAnyAttribute* arg, ::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_ISSUBSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* Intersection(::System::Xml::Schema::XmlSchemaAnyAttribute* arg, ::System::Xml::Schema::XmlSchemaAnyAttribute* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_INTERSECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* Union(::System::Xml::Schema::XmlSchemaAnyAttribute* arg, ::System::Xml::Schema::XmlSchemaAnyAttribute* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_UNION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

