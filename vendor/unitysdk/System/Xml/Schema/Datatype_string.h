#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A25AC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A25AD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A25AE0)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A25B30)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A25B40)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A25B50)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A25B60)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1FB40)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_string_TypeDefinitionIndex = 28002;

	class Datatype_string : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_.CTOR_OFFSET))(nullptr);
		}

	};
}

