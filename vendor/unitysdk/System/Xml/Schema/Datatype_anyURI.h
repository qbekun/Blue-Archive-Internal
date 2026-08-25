#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A28780)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A28790)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A287E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A287F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_HASVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A28840)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A28850)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A288A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A288B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A288C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A28980)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1DBD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A28D70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_anyURI_TypeDefinitionIndex = 28025;

	class Datatype_anyURI : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValueFacets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_HASVALUEFACETS_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYURI_.CCTOR_OFFSET))(nullptr);
		}

	};
}

