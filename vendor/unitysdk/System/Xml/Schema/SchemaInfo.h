#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x98AEC80)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_DOCTYPENAME_OFFSET UNITYSDK_OFFSET(0x98AEE80)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_DOCTYPENAME_OFFSET UNITYSDK_OFFSET(0x98AEE90)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_INTERNALDTDSUBSET_OFFSET UNITYSDK_OFFSET(0x98AEEA0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ELEMENTDECLS_OFFSET UNITYSDK_OFFSET(0x98AEEB0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_UNDECLAREDELEMENTDECLS_OFFSET UNITYSDK_OFFSET(0x98AEEC0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_GENERALENTITIES_OFFSET UNITYSDK_OFFSET(0x98AEED0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_PARAMETERENTITIES_OFFSET UNITYSDK_OFFSET(0x98AEF50)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98AEFD0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98AEFE0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_TARGETNAMESPACES_OFFSET UNITYSDK_OFFSET(0x98AEFF0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ELEMENTDECLSBYTYPE_OFFSET UNITYSDK_OFFSET(0x98AF000)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ATTRIBUTEDECLS_OFFSET UNITYSDK_OFFSET(0x98AF010)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_NOTATIONS_OFFSET UNITYSDK_OFFSET(0x98AF020)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ERRORCOUNT_OFFSET UNITYSDK_OFFSET(0x98AF0A0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_ERRORCOUNT_OFFSET UNITYSDK_OFFSET(0x98AF0B0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x98AF0C0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETTYPEDECL_OFFSET UNITYSDK_OFFSET(0x98AF130)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x98AF1A0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_HASSCHEMA_OFFSET UNITYSDK_OFFSET(0x98AF220)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_CONTAINS_OFFSET UNITYSDK_OFFSET(0x98AF270)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXDR_OFFSET UNITYSDK_OFFSET(0x98AF2C0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXSD_OFFSET UNITYSDK_OFFSET(0x98AF460)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXSD_OFFSET UNITYSDK_OFFSET(0x98AF6F0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_ADD_OFFSET UNITYSDK_OFFSET(0x98AF7F0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_FINISH_OFFSET UNITYSDK_OFFSET(0x98B03A0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.GET_HASDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98B05E0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.GET_HASNONCDATAATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98B05F0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.LOOKUPATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x98B0600)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.LOOKUPENTITY_OFFSET UNITYSDK_OFFSET(0x98B06C0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.GET_NAME_OFFSET UNITYSDK_OFFSET(0x98B0760)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.GET_INTERNALDTDSUBSET_OFFSET UNITYSDK_OFFSET(0x98B0770)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaInfo_TypeDefinitionIndex = 28096;

	class SchemaInfo : public Il2CppObject
	{
	public:
		Il2CppObject* elementDecls; // 0x10
		Il2CppObject* undeclaredElementDecls; // 0x18
		Il2CppObject* generalEntities; // 0x20
		Il2CppObject* parameterEntities; // 0x28
		::System::Xml::XmlQualifiedName* docTypeName; // 0x30
		::System::String* internalDtdSubset; // 0x38
		::System::Boolean hasNonCDataAttributes; // 0x40
		::System::Boolean hasDefaultAttributes; // 0x41
		Il2CppObject* targetNamespaces; // 0x48
		Il2CppObject* attributeDecls; // 0x50
		::System::Int32 errorCount; // 0x58
		::System::Xml::Schema::SchemaType* schemaType; // 0x5C
		Il2CppObject* elementDeclsByType; // 0x60
		Il2CppObject* notations; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* get_DocTypeName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_DOCTYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_DocTypeName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_DOCTYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_InternalDtdSubset(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_INTERNALDTDSUBSET_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_ElementDecls()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ELEMENTDECLS_OFFSET))(nullptr);
		}

		Il2CppObject* get_UndeclaredElementDecls()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_UNDECLAREDELEMENTDECLS_OFFSET))(nullptr);
		}

		Il2CppObject* get_GeneralEntities()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_GENERALENTITIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParameterEntities()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_PARAMETERENTITIES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::SchemaType* get_SchemaType()
		{
			return (return (::System::Xml::Schema::SchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_SCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Void set_SchemaType(::System::Xml::Schema::SchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_SCHEMATYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TargetNamespaces()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_TARGETNAMESPACES_OFFSET))(nullptr);
		}

		Il2CppObject* get_ElementDeclsByType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ELEMENTDECLSBYTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_AttributeDecls()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ATTRIBUTEDECLS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Notations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_NOTATIONS_OFFSET))(nullptr);
		}

		::System::Int32 get_ErrorCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ERRORCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ErrorCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_ERRORCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* GetElementDecl(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETELEMENTDECL_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* GetTypeDecl(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETTYPEDECL_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* GetElement(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasSchema(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_HASSCHEMA_OFFSET))(str, nullptr);
		}

		::System::Boolean Contains(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_CONTAINS_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::SchemaAttDef* GetAttributeXdr(::System::Xml::Schema::SchemaElementDecl* arg, ::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::SchemaAttDef*(*)(::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXDR_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::SchemaAttDef* GetAttributeXsd(::System::Xml::Schema::SchemaElementDecl* arg, ::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::AttributeMatchState&* arg)
		{
			return (return (::System::Xml::Schema::SchemaAttDef*(*)(::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::AttributeMatchState&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXSD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::SchemaAttDef* GetAttributeXsd(::System::Xml::Schema::SchemaElementDecl* arg, ::System::Xml::XmlQualifiedName* arg, bool&* arg)
		{
			return (return (::System::Xml::Schema::SchemaAttDef*(*)(::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXSD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(::System::Xml::Schema::SchemaInfo* arg, ::System::Xml::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_FINISH_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdInfo.get_HasDefaultAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.GET_HASDEFAULTATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdInfo.get_HasNonCDataAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.GET_HASNONCDATAATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::IDtdAttributeListInfo* System.Xml.IDtdInfo.LookupAttributeList(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::IDtdAttributeListInfo*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.LOOKUPATTRIBUTELIST_OFFSET))(str, str, nullptr);
		}

		::System::Xml::IDtdEntityInfo* System.Xml.IDtdInfo.LookupEntity(::System::String* str)
		{
			return (return (::System::Xml::IDtdEntityInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.LOOKUPENTITY_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlQualifiedName* System.Xml.IDtdInfo.get_Name()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.GET_NAME_OFFSET))(nullptr);
		}

		::System::String* System.Xml.IDtdInfo.get_InternalDtdSubset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM.XML.IDTDINFO.GET_INTERNALDTDSUBSET_OFFSET))(nullptr);
		}

	};
}

