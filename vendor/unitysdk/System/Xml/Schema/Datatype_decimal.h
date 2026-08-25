#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A267E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A267F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A26840)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A26850)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A268A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A268F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A26900)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A26910)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A269A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1E540)
#define SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A26B20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_decimal_TypeDefinitionIndex = 28006;

	class Datatype_decimal : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8
		::System::Xml::Schema::FacetsChecker* numeric10FacetsChecker; // 0x10

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DECIMAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

