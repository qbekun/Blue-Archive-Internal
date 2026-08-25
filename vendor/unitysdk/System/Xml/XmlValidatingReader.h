#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLVALIDATINGREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99756A0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99756D0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x9975700)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9975730)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9975760)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x9975790)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x99757C0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x99757F0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x9975820)
#define SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9975850)
#define SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9975880)
#define SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99758B0)
#define SYSTEM_XML_XMLVALIDATINGREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99758E0)
#define SYSTEM_XML_XMLVALIDATINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9975910)
#define SYSTEM_XML_XMLVALIDATINGREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9975940)
#define SYSTEM_XML_XMLVALIDATINGREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x9975970)
#define SYSTEM_XML_XMLVALIDATINGREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x99759A0)
#define SYSTEM_XML_XMLVALIDATINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x99759D0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x9975A00)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x9975A30)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x9975A60)
#define SYSTEM_XML_XMLVALIDATINGREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x9975A90)
#define SYSTEM_XML_XMLVALIDATINGREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x9975AE0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x9975B10)

namespace System::Xml
{
	inline static constexpr unsigned int XmlValidatingReader_TypeDefinitionIndex = 27710;

	class XmlValidatingReader : public Il2CppObject
	{
	public:
		::System::Xml::XmlValidatingReaderImpl* impl; // 0x10

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::String* get_BaseURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_ISEMPTYELEMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_AttributeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_ATTRIBUTECOUNT_OFFSET))(nullptr);
		}

		::System::String* GetAttribute(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::String* GetAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::System::String* GetAttribute(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveToAttribute(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_MOVETOATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_MOVETONEXTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_MOVETOELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean ReadAttributeValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_READATTRIBUTEVALUE_OFFSET))(nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_READ_OFFSET))(nullptr);
		}

		::System::Boolean get_EOF()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_EOF_OFFSET))(nullptr);
		}

		::System::Xml::ReadState* get_ReadState()
		{
			return (return (::System::Xml::ReadState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_READSTATE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void ResolveEntity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_RESOLVEENTITY_OFFSET))(nullptr);
		}

		::System::Boolean get_Namespaces()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMESPACES_OFFSET))(nullptr);
		}

	};
}

