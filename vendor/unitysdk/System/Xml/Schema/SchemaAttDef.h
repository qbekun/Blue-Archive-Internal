#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_.CTOR_OFFSET UNITYSDK_OFFSET(0x988F960)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_.CTOR_OFFSET UNITYSDK_OFFSET(0x988F970)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_.CTOR_OFFSET UNITYSDK_OFFSET(0x988F980)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x988F990)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x988F9A0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x988F9C0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x988F9D0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_ISNONCDATATYPE_OFFSET UNITYSDK_OFFSET(0x988F9E0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x988FA40)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_ISXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x988FA50)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDDEFAULTATTRIBUTEINFO.GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x988FA60)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDDEFAULTATTRIBUTEINFO.GET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x988FB20)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDDEFAULTATTRIBUTEINFO.GET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x988FB30)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDDEFAULTATTRIBUTEINFO.GET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x988FB40)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x988FB50)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x988FB60)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x988FB70)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x988FB80)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x988FB90)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x988FBA0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x988FBB0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x988FBC0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x988FAC0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x988FBD0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x988FA10)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x988FBE0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_RESERVED_OFFSET UNITYSDK_OFFSET(0x988FC10)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x988FC20)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUECHECKED_OFFSET UNITYSDK_OFFSET(0x988FC30)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x988FC40)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x988FC50)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CHECKXMLSPACE_OFFSET UNITYSDK_OFFSET(0x988FC60)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CLONE_OFFSET UNITYSDK_OFFSET(0x988FEF0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_.CCTOR_OFFSET UNITYSDK_OFFSET(0x988FF50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaAttDef_TypeDefinitionIndex = 28086;

	class SchemaAttDef : public Il2CppObject
	{
	public:
		::System::String* defExpanded; // 0x60
		::System::Int32 lineNum; // 0x68
		::System::Int32 linePos; // 0x6C
		::System::Int32 valueLineNum; // 0x70
		::System::Int32 valueLinePos; // 0x74
		Reserve* reserved; // 0x78
		::System::Boolean defaultValueChecked; // 0x7C
		::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute; // 0x80
		::System::Xml::Schema::SchemaAttDef* Empty; // 0x0

		::System::Void .ctor(::System::Xml::XmlQualifiedName* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_.CTOR_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdAttributeInfo.get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdAttributeInfo.get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdAttributeInfo.get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdAttributeInfo.get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdAttributeInfo.get_IsNonCDataType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_ISNONCDATATYPE_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_ISDECLAREDINEXTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdAttributeInfo.get_IsXmlAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDATTRIBUTEINFO.GET_ISXMLATTRIBUTE_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDDEFAULTATTRIBUTEINFO.GET_DEFAULTVALUEEXPANDED_OFFSET))(nullptr);
		}

		::System::Object* System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDDEFAULTATTRIBUTEINFO.GET_DEFAULTVALUETYPED_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDDEFAULTATTRIBUTEINFO.GET_VALUELINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM.XML.IDTDDEFAULTATTRIBUTEINFO.GET_VALUELINEPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_LinePosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_LineNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINENUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ValueLinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_ValueLinePosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ValueLineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_ValueLineNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINENUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* get_DefaultValueExpanded()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUEEXPANDED_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValueExpanded(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_DEFAULTVALUEEXPANDED_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_TokenizedType(::System::Xml::XmlTokenizedType* arg)
		{
			((::System::Void(*)(::System::Xml::XmlTokenizedType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_TOKENIZEDTYPE_OFFSET))(arg, nullptr);
		}

		Reserve* get_Reserved()
		{
			return (return (Reserve*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_RESERVED_OFFSET))(nullptr);
		}

		::System::Void set_Reserved(Reserve* arg)
		{
			((::System::Void(*)(Reserve*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_RESERVED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DefaultValueChecked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUECHECKED_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_SCHEMAATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_SchemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_SCHEMAATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckXmlSpace(::System::Xml::IValidationEventHandling* arg)
		{
			((::System::Void(*)(::System::Xml::IValidationEventHandling*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CHECKXMLSPACE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaAttDef* Clone()
		{
			return (return (::System::Xml::Schema::SchemaAttDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CLONE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_.CCTOR_OFFSET))(nullptr);
		}

	};
}

