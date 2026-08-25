#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x98E3C60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x98E3C70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_ISDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x98E3C80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_HASLEXICALFACETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_HASVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_RESTRICTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_DERIVEBYRESTRICTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_DERIVEBYLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_VERIFYSCHEMAVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_ISCOMPARABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODESTRING_OFFSET UNITYSDK_OFFSET(0x98E3C90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TYPECODETOSTRING_OFFSET UNITYSDK_OFFSET(0x98E3D90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_CONCATENATEDTOSTRING_OFFSET UNITYSDK_OFFSET(0x98E4250)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x98D2F30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPEXSD_OFFSET UNITYSDK_OFFSET(0x98E4950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXDRNAME_OFFSET UNITYSDK_OFFSET(0x98D1370)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_DERIVEBYUNION_OFFSET UNITYSDK_OFFSET(0x98E49A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_XDRCANONIZEURI_OFFSET UNITYSDK_OFFSET(0x98CE7F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E4A00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaDatatype_TypeDefinitionIndex = 28145;

	class XmlSchemaDatatype : public Il2CppObject
	{
	public:
		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_PARSEVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatypeVariety* get_Variety()
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatypeVariety*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VARIETY_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDerivedFrom(::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_ISDERIVEDFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasLexicalFacets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_HASLEXICALFACETS_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValueFacets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_HASVALUEFACETS_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* get_ValueConverter()
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VALUECONVERTER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFacets* get_Restriction()
		{
			return (return (::System::Xml::Schema::RestrictionFacets*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_RESTRICTION_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_PARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::Object* arg, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TRYPARSEVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByRestriction(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::XmlNameTable* arg, ::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_DERIVEBYRESTRICTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_DERIVEBYLIST_OFFSET))(arg, nullptr);
		}

		::System::Void VerifySchemaValid(::System::Xml::Schema::XmlSchemaObjectTable* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_VERIFYSCHEMAVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_ISEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsComparable(::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_ISCOMPARABLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_TypeCodeString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODESTRING_OFFSET))(nullptr);
		}

		::System::String* TypeCodeToString(::System::Xml::Schema::XmlTypeCode* arg)
		{
			return (return (::System::String*(*)(::System::Xml::Schema::XmlTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TYPECODETOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ConcatenatedToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_CONCATENATEDTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedType(::System::Xml::XmlTokenizedType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::XmlTokenizedType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedTypeXsd(::System::Xml::XmlTokenizedType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::XmlTokenizedType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPEXSD_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* FromXdrName(::System::String* str)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXDRNAME_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByUnion(::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_DERIVEBYUNION_OFFSET))(arg, arg, nullptr);
		}

		::System::String* XdrCanonizeUri(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::Schema::SchemaNames* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_XDRCANONIZEURI_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

