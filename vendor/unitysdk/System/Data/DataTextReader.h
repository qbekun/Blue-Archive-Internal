#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATEXTREADER_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x97AC480)
#define SYSTEM_DATA_DATATEXTREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97AC520)
#define SYSTEM_DATA_DATATEXTREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x97AC580)
#define SYSTEM_DATA_DATATEXTREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x97AC5B0)
#define SYSTEM_DATA_DATATEXTREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x97AC5E0)
#define SYSTEM_DATA_DATATEXTREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x97AC610)
#define SYSTEM_DATA_DATATEXTREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x97AC640)
#define SYSTEM_DATA_DATATEXTREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x97AC670)
#define SYSTEM_DATA_DATATEXTREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97AC6A0)
#define SYSTEM_DATA_DATATEXTREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x97AC6D0)
#define SYSTEM_DATA_DATATEXTREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x97AC700)
#define SYSTEM_DATA_DATATEXTREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x97AC730)
#define SYSTEM_DATA_DATATEXTREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x97AC760)
#define SYSTEM_DATA_DATATEXTREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x97AC790)
#define SYSTEM_DATA_DATATEXTREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x97AC7C0)
#define SYSTEM_DATA_DATATEXTREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x97AC7F0)
#define SYSTEM_DATA_DATATEXTREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x97AC820)
#define SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC850)
#define SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC880)
#define SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC8B0)
#define SYSTEM_DATA_DATATEXTREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC8E0)
#define SYSTEM_DATA_DATATEXTREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC910)
#define SYSTEM_DATA_DATATEXTREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC940)
#define SYSTEM_DATA_DATATEXTREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC970)
#define SYSTEM_DATA_DATATEXTREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x97AC9A0)
#define SYSTEM_DATA_DATATEXTREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x97AC9D0)
#define SYSTEM_DATA_DATATEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x97ACA00)
#define SYSTEM_DATA_DATATEXTREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x97ACA30)
#define SYSTEM_DATA_DATATEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x97ACA60)
#define SYSTEM_DATA_DATATEXTREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x97ACA90)
#define SYSTEM_DATA_DATATEXTREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x97ACAC0)
#define SYSTEM_DATA_DATATEXTREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x97ACAF0)
#define SYSTEM_DATA_DATATEXTREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x97ACB20)
#define SYSTEM_DATA_DATATEXTREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x97ACB50)
#define SYSTEM_DATA_DATATEXTREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x97ACB80)
#define SYSTEM_DATA_DATATEXTREADER_GET_CANREADVALUECHUNK_OFFSET UNITYSDK_OFFSET(0x97ACBB0)
#define SYSTEM_DATA_DATATEXTREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x97ACBE0)

namespace System::Data
{
	inline static constexpr unsigned int DataTextReader_TypeDefinitionIndex = 32322;

	class DataTextReader : public Il2CppObject
	{
	public:
		::System::Xml::XmlReader* _xmlreader; // 0x10

		::System::Xml::XmlReader* CreateReader(::System::Xml::XmlReader* arg)
		{
			return (return (::System::Xml::XmlReader*(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_CREATEREADER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlReaderSettings* get_Settings()
		{
			return (return (::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_SETTINGS_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::String* get_BaseURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_ISEMPTYELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::Char get_QuoteChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_QUOTECHAR_OFFSET))(nullptr);
		}

		::System::Xml::XmlSpace* get_XmlSpace()
		{
			return (return (::System::Xml::XmlSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_XMLSPACE_OFFSET))(nullptr);
		}

		::System::String* get_XmlLang()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_XMLLANG_OFFSET))(nullptr);
		}

		::System::Int32 get_AttributeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_ATTRIBUTECOUNT_OFFSET))(nullptr);
		}

		::System::String* GetAttribute(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::String* GetAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::System::String* GetAttribute(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveToAttribute(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETOATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void MoveToAttribute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETOATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETONEXTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETOELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean ReadAttributeValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_READATTRIBUTEVALUE_OFFSET))(nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_READ_OFFSET))(nullptr);
		}

		::System::Boolean get_EOF()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_EOF_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Xml::ReadState* get_ReadState()
		{
			return (return (::System::Xml::ReadState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_READSTATE_OFFSET))(nullptr);
		}

		::System::Void Skip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_SKIP_OFFSET))(nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_CanResolveEntity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_CANRESOLVEENTITY_OFFSET))(nullptr);
		}

		::System::Void ResolveEntity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_RESOLVEENTITY_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReadValueChunk()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_CANREADVALUECHUNK_OFFSET))(nullptr);
		}

		::System::String* ReadString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_READSTRING_OFFSET))(nullptr);
		}

	};
}

