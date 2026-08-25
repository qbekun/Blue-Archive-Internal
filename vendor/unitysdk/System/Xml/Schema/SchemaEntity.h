#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x98AE760)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_NAME_OFFSET UNITYSDK_OFFSET(0x98AE7F0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x98AE810)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x98AE820)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_ISUNPARSEDENTITY_OFFSET UNITYSDK_OFFSET(0x98AE830)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_ISPARAMETERENTITY_OFFSET UNITYSDK_OFFSET(0x98AE860)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_BASEURISTRING_OFFSET UNITYSDK_OFFSET(0x98AE870)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_DECLAREDURISTRING_OFFSET UNITYSDK_OFFSET(0x98AE930)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x98AE9F0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x98AEA00)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_TEXT_OFFSET UNITYSDK_OFFSET(0x98AEA10)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x98AEA20)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x98AEA30)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_ISPREDEFINEDENTITY_OFFSET UNITYSDK_OFFSET(0x98AEA40)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98AEB10)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_URL_OFFSET UNITYSDK_OFFSET(0x98AEB20)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET UNITYSDK_OFFSET(0x98AEB30)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PUBID_OFFSET UNITYSDK_OFFSET(0x98AEB50)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PUBID_OFFSET UNITYSDK_OFFSET(0x98AEB60)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x98AEB70)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x98AEB80)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x98AEB90)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x98AEBA0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NDATA_OFFSET UNITYSDK_OFFSET(0x98AEBB0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_NDATA_OFFSET UNITYSDK_OFFSET(0x98AEBC0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x98AEBD0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x98AEBE0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_LINE_OFFSET UNITYSDK_OFFSET(0x98AEC00)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_LINE_OFFSET UNITYSDK_OFFSET(0x98AEC10)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_POS_OFFSET UNITYSDK_OFFSET(0x98AEC20)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_POS_OFFSET UNITYSDK_OFFSET(0x98AEC30)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x98AE8D0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_BASEURI_OFFSET UNITYSDK_OFFSET(0x98AEC40)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PARSINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x98AEC50)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PARSINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x98AEC60)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x98AE990)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x98AEC70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaEntity_TypeDefinitionIndex = 28094;

	class SchemaEntity : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* qname; // 0x10
		::System::String* url; // 0x18
		::System::String* pubid; // 0x20
		::System::String* text; // 0x28
		::System::Xml::XmlQualifiedName* ndata; // 0x30
		::System::Int32 lineNumber; // 0x38
		::System::Int32 linePosition; // 0x3C
		::System::Boolean isParameter; // 0x40
		::System::Boolean isExternal; // 0x41
		::System::Boolean parsingInProgress; // 0x42
		::System::Boolean isDeclaredInExternal; // 0x43
		::System::String* baseURI; // 0x48
		::System::String* declaredURI; // 0x50

		::System::Void .ctor(::System::Xml::XmlQualifiedName* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* System.Xml.IDtdEntityInfo.get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdEntityInfo.get_IsExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_ISEXTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdEntityInfo.get_IsDeclaredInExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_ISDECLAREDINEXTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdEntityInfo.get_IsUnparsedEntity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_ISUNPARSEDENTITY_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdEntityInfo.get_IsParameterEntity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_ISPARAMETERENTITY_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdEntityInfo.get_BaseUriString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_BASEURISTRING_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdEntityInfo.get_DeclaredUriString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_DECLAREDURISTRING_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdEntityInfo.get_SystemId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_SYSTEMID_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdEntityInfo.get_PublicId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_PUBLICID_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdEntityInfo.get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_TEXT_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdEntityInfo.get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdEntityInfo.get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM.XML.IDTDENTITYINFO.GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean IsPredefinedEntity(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_ISPREDEFINEDENTITY_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET))(str, nullptr);
		}

		::System::String* get_Pubid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PUBID_OFFSET))(nullptr);
		}

		::System::Void set_Pubid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PUBID_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_ISEXTERNAL_OFFSET))(nullptr);
		}

		::System::Void set_IsExternal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_ISEXTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DeclaredInExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDINEXTERNAL_OFFSET))(nullptr);
		}

		::System::Void set_DeclaredInExternal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDINEXTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_NData()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NDATA_OFFSET))(nullptr);
		}

		::System::Void set_NData(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_NDATA_OFFSET))(arg, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_LINE_OFFSET))(nullptr);
		}

		::System::Void set_Line(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_LINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Pos()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_POS_OFFSET))(nullptr);
		}

		::System::Void set_Pos(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_POS_OFFSET))(arg, nullptr);
		}

		::System::String* get_BaseURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Void set_BaseURI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_BASEURI_OFFSET))(str, nullptr);
		}

		::System::Boolean get_ParsingInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PARSINGINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void set_ParsingInProgress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PARSINGINPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::String* get_DeclaredURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET))(nullptr);
		}

		::System::Void set_DeclaredURI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET))(str, nullptr);
		}

	};
}

