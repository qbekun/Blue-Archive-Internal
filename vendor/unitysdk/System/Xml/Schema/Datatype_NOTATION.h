#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A29520)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A29530)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A29580)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A29590)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A295A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A295B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A29600)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A29650)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A29660)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_VERIFYSCHEMAVALID_OFFSET UNITYSDK_OFFSET(0x9A298E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F830)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A29BB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_NOTATION_TypeDefinitionIndex = 28038;

	class Datatype_NOTATION : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void VerifySchemaValid(::System::Xml::Schema::XmlSchemaObjectTable* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_VERIFYSCHEMAVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

