#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A28E40)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A28E50)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A28EA0)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A28EB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A28EC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A28ED0)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A28F20)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A28F70)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A28F80)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F930)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A29200)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_QName_TypeDefinitionIndex = 28026;

	class Datatype_QName : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

