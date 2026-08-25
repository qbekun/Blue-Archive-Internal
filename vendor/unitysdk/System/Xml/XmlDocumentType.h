#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLDOCUMENTTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9997B30)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9997D10)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9997D20)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9997D30)
#define SYSTEM_XML_XMLDOCUMENTTYPE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x9997D40)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9997DA0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x9997DB0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_NOTATIONS_OFFSET UNITYSDK_OFFSET(0x9997E70)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x9997F00)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x9997F10)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x9997F20)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_PARSEWITHNAMESPACES_OFFSET UNITYSDK_OFFSET(0x9997F30)
#define SYSTEM_XML_XMLDOCUMENTTYPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x9997F40)
#define SYSTEM_XML_XMLDOCUMENTTYPE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x9997F90)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_DTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x9997FA0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_SET_DTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x9997FB0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDocumentType_TypeDefinitionIndex = 27761;

	class XmlDocumentType : public Il2CppObject
	{
	public:
		::System::String* name; // 0x20
		::System::String* publicId; // 0x28
		::System::String* systemId; // 0x30
		::System::String* internalSubset; // 0x38
		::System::Boolean namespaces; // 0x40
		::System::Xml::XmlNamedNodeMap* entities; // 0x48
		::System::Xml::XmlNamedNodeMap* notations; // 0x50
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x58

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_.CTOR_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Xml::XmlNamedNodeMap* get_Entities()
		{
			return (return (::System::Xml::XmlNamedNodeMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_ENTITIES_OFFSET))(nullptr);
		}

		::System::Xml::XmlNamedNodeMap* get_Notations()
		{
			return (return (::System::Xml::XmlNamedNodeMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_NOTATIONS_OFFSET))(nullptr);
		}

		::System::String* get_PublicId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_PUBLICID_OFFSET))(nullptr);
		}

		::System::String* get_SystemId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_SYSTEMID_OFFSET))(nullptr);
		}

		::System::String* get_InternalSubset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET))(nullptr);
		}

		::System::Boolean get_ParseWithNamespaces()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_PARSEWITHNAMESPACES_OFFSET))(nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo()
		{
			return (return (::System::Xml::Schema::SchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_DTDSCHEMAINFO_OFFSET))(nullptr);
		}

		::System::Void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_SET_DTDSCHEMAINFO_OFFSET))(arg, nullptr);
		}

	};
}

