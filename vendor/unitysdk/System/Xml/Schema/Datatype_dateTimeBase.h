#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A275C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A275D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A27620)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A27630)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A276E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A27730)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A27780)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A27790)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A277A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A27900)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A27CA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_dateTimeBase_TypeDefinitionIndex = 28010;

	class Datatype_dateTimeBase : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8
		::System::Xml::Schema::XsdDateTimeFlags* dateTimeFlags; // 0x38

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XsdDateTimeFlags* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XsdDateTimeFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMEBASE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

