#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x98F3EC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x98F3F90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x98F3FE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98F4330)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98F4340)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_FINAL_OFFSET UNITYSDK_OFFSET(0x98F4350)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_FINAL_OFFSET UNITYSDK_OFFSET(0x98F4360)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98F2E50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_FINALRESOLVED_OFFSET UNITYSDK_OFFSET(0x98F4370)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_BASEXMLSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98F4380)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_DERIVEDBY_OFFSET UNITYSDK_OFFSET(0x98F4390)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x98F43A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x98F43B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x98F43C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x98F43D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x98F44D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_SCHEMACONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x98F4550)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98F4560)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETFINALRESOLVED_OFFSET UNITYSDK_OFFSET(0x98F4590)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETBASESCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98F45A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETDERIVEDBY_OFFSET UNITYSDK_OFFSET(0x98F45B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETDATATYPE_OFFSET UNITYSDK_OFFSET(0x98F45C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x98F45D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x98F45F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_REDEFINED_OFFSET UNITYSDK_OFFSET(0x98F4620)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_REDEFINED_OFFSET UNITYSDK_OFFSET(0x98F4630)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x98F4650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_ISDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x98F4660)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_ISDERIVEDFROMDATATYPE_OFFSET UNITYSDK_OFFSET(0x98F4950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98F4A50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98F4A60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F34F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaType_TypeDefinitionIndex = 28204;

	class XmlSchemaType : public Il2CppObject
	{
	public:
		::System::String* name; // 0x50
		::System::Xml::Schema::XmlSchemaDerivationMethod* final; // 0x58
		::System::Xml::Schema::XmlSchemaDerivationMethod* derivedBy; // 0x5C
		::System::Xml::Schema::XmlSchemaType* baseSchemaType; // 0x60
		::System::Xml::Schema::XmlSchemaDatatype* datatype; // 0x68
		::System::Xml::Schema::XmlSchemaDerivationMethod* finalResolved; // 0x70
		::System::Xml::Schema::SchemaElementDecl* elementDecl; // 0x78
		::System::Xml::XmlQualifiedName* qname; // 0x80
		::System::Xml::Schema::XmlSchemaType* redefined; // 0x88
		::System::Xml::Schema::XmlSchemaContentType* contentType; // 0x90

		::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::Schema::XmlTypeCode* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::Schema::XmlTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaComplexType* GetBuiltInComplexType(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaComplexType*(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINCOMPLEXTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_Final()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_FINAL_OFFSET))(nullptr);
		}

		::System::Void set_Final(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_FINAL_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_QUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_FinalResolved()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_FINALRESOLVED_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_BaseXmlSchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_BASEXMLSCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_DerivedBy()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_DERIVEDBY_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* get_Datatype()
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMixed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ISMIXED_OFFSET))(nullptr);
		}

		::System::Void set_IsMixed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ISMIXED_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* get_ValueConverter()
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_VALUECONVERTER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaContentType* get_SchemaContentType()
		{
			return (return (::System::Xml::Schema::XmlSchemaContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_SCHEMACONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETQUALIFIEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetFinalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETFINALRESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void SetBaseSchemaType(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETBASESCHEMATYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDerivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETDERIVEDBY_OFFSET))(arg, nullptr);
		}

		::System::Void SetDatatype(::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETDATATYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* get_ElementDecl()
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ELEMENTDECL_OFFSET))(nullptr);
		}

		::System::Void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaElementDecl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ELEMENTDECL_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_Redefined()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_REDEFINED_OFFSET))(nullptr);
		}

		::System::Void set_Redefined(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_REDEFINED_OFFSET))(arg, nullptr);
		}

		::System::Void SetContentType(::System::Xml::Schema::XmlSchemaContentType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDerivedFrom(::System::Xml::Schema::XmlSchemaType* arg, ::System::Xml::Schema::XmlSchemaType* arg, ::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaType*, ::System::Xml::Schema::XmlSchemaType*, ::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_ISDERIVEDFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsDerivedFromDatatype(::System::Xml::Schema::XmlSchemaDatatype* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg, ::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_ISDERIVEDFROMDATATYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_NameAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_NAMEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_NameAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_NAMEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

