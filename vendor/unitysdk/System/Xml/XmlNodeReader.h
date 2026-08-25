#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNODEREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A9160)
#define SYSTEM_XML_XMLNODEREADER_ISINREADINGSTATES_OFFSET UNITYSDK_OFFSET(0x99A9260)
#define SYSTEM_XML_XMLNODEREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99A9270)
#define SYSTEM_XML_XMLNODEREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99A9280)
#define SYSTEM_XML_XMLNODEREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99A92E0)
#define SYSTEM_XML_XMLNODEREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x99A93C0)
#define SYSTEM_XML_XMLNODEREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x99A9440)
#define SYSTEM_XML_XMLNODEREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x99A94C0)
#define SYSTEM_XML_XMLNODEREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x99A9520)
#define SYSTEM_XML_XMLNODEREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x99A9530)
#define SYSTEM_XML_XMLNODEREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x99A9570)
#define SYSTEM_XML_XMLNODEREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x99A9580)
#define SYSTEM_XML_XMLNODEREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x99A95B0)
#define SYSTEM_XML_XMLNODEREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x99A95E0)
#define SYSTEM_XML_XMLNODEREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x99A9630)
#define SYSTEM_XML_XMLNODEREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x99A96B0)
#define SYSTEM_XML_XMLNODEREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x99A9700)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A9730)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A9760)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A97E0)
#define SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A9860)
#define SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A99D0)
#define SYSTEM_XML_XMLNODEREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A9C30)
#define SYSTEM_XML_XMLNODEREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A9D30)
#define SYSTEM_XML_XMLNODEREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x99A9E70)
#define SYSTEM_XML_XMLNODEREADER_READ_OFFSET UNITYSDK_OFFSET(0x99AA000)
#define SYSTEM_XML_XMLNODEREADER_READ_OFFSET UNITYSDK_OFFSET(0x99AA010)
#define SYSTEM_XML_XMLNODEREADER_READNEXTNODE_OFFSET UNITYSDK_OFFSET(0x99AA1C0)
#define SYSTEM_XML_XMLNODEREADER_SETENDOFFILE_OFFSET UNITYSDK_OFFSET(0x99AA740)
#define SYSTEM_XML_XMLNODEREADER_READATZEROLEVEL_OFFSET UNITYSDK_OFFSET(0x99AA760)
#define SYSTEM_XML_XMLNODEREADER_READFORWARD_OFFSET UNITYSDK_OFFSET(0x99AA540)
#define SYSTEM_XML_XMLNODEREADER_RESETREADINGMARKS_OFFSET UNITYSDK_OFFSET(0x99AA510)
#define SYSTEM_XML_XMLNODEREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x99AA7F0)
#define SYSTEM_XML_XMLNODEREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x99AA800)
#define SYSTEM_XML_XMLNODEREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x99AA810)
#define SYSTEM_XML_XMLNODEREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x99AA820)
#define SYSTEM_XML_XMLNODEREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x99AA830)
#define SYSTEM_XML_XMLNODEREADER_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x99AA8E0)
#define SYSTEM_XML_XMLNODEREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x99AA900)
#define SYSTEM_XML_XMLNODEREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x99AA920)
#define SYSTEM_XML_XMLNODEREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x99AA960)
#define SYSTEM_XML_XMLNODEREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x99AA9E0)
#define SYSTEM_XML_XMLNODEREADER_FINISHREADBINARY_OFFSET UNITYSDK_OFFSET(0x99A99A0)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM.XML.IXMLNAMESPACERESOLVER.GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x99AAA30)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x99AAA50)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x99AAA70)
#define SYSTEM_XML_XMLNODEREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x99AAAE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeReader_TypeDefinitionIndex = 27780;

	class XmlNodeReader : public Il2CppObject
	{
	public:
		::System::Xml::XmlNodeReaderNavigator* readerNav; // 0x10
		::System::Xml::XmlNodeType* nodeType; // 0x18
		::System::Int32 curDepth; // 0x1C
		::System::Xml::ReadState* readState; // 0x20
		::System::Boolean fEOF; // 0x24
		::System::Boolean bResolveEntity; // 0x25
		::System::Boolean bStartFromDocument; // 0x26
		::System::Boolean bInReadBinary; // 0x27
		::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper; // 0x28

		::System::Void .ctor(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInReadingStates()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_ISINREADINGSTATES_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::String* get_BaseURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Boolean get_CanResolveEntity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_CANRESOLVEENTITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_ISEMPTYELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::Xml::XmlSpace* get_XmlSpace()
		{
			return (return (::System::Xml::XmlSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_XMLSPACE_OFFSET))(nullptr);
		}

		::System::String* get_XmlLang()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_XMLLANG_OFFSET))(nullptr);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return (return (::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_SCHEMAINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_AttributeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_ATTRIBUTECOUNT_OFFSET))(nullptr);
		}

		::System::String* GetAttribute(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::String* GetAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::System::String* GetAttribute(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveToAttribute(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void MoveToAttribute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETONEXTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETOELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READ_OFFSET))(nullptr);
		}

		::System::Boolean Read(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READ_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReadNextNode(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READNEXTNODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEndOfFile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SETENDOFFILE_OFFSET))(nullptr);
		}

		::System::Boolean ReadAtZeroLevel(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READATZEROLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReadForward(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Void ReSetReadingMarks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_RESETREADINGMARKS_OFFSET))(nullptr);
		}

		::System::Boolean get_EOF()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_EOF_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Xml::ReadState* get_ReadState()
		{
			return (return (::System::Xml::ReadState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_READSTATE_OFFSET))(nullptr);
		}

		::System::Void Skip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SKIP_OFFSET))(nullptr);
		}

		::System::String* ReadString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_HASATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void ResolveEntity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_RESOLVEENTITY_OFFSET))(nullptr);
		}

		::System::Boolean ReadAttributeValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READATTRIBUTEVALUE_OFFSET))(nullptr);
		}

		::System::Void FinishReadBinary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_FINISHREADBINARY_OFFSET))(nullptr);
		}

		Il2CppObject* System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(::System::Xml::XmlNamespaceScope* arg)
		{
			return (return (Il2CppObject*(*)(::System::Xml::XmlNamespaceScope*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SYSTEM.XML.IXMLNAMESPACERESOLVER.GETNAMESPACESINSCOPE_OFFSET))(arg, nullptr);
		}

		::System::String* System.Xml.IXmlNamespaceResolver.LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

		::System::String* System.Xml.IXmlNamespaceResolver.LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Xml::IDtdInfo* get_DtdInfo()
		{
			return (return (::System::Xml::IDtdInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_DTDINFO_OFFSET))(nullptr);
		}

	};
}

