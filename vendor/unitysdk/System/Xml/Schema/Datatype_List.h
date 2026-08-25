#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A238D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A22740)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A23C90)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A23FB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A23FD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A24000)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A24030)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A24080)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A240B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A240C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A247E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_List_TypeDefinitionIndex = 27997;

	class Datatype_List : public Il2CppObject
	{
	public:
		::System::Xml::Schema::DatatypeImplementation* itemType; // 0x38
		::System::Int32 minListSize; // 0x40

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::DatatypeImplementation* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::DatatypeImplementation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Exception* TryParseValue(::System::Object* arg, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

