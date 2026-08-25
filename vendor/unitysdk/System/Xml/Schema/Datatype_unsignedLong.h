#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A2B440)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A2B490)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A2B4A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A2B520)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A2B570)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A2B5C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A20100)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A2B780)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_unsignedLong_TypeDefinitionIndex = 28047;

	class Datatype_unsignedLong : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8
		::System::Xml::Schema::FacetsChecker* numeric10FacetsChecker; // 0x10

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDLONG_.CCTOR_OFFSET))(nullptr);
		}

	};
}

