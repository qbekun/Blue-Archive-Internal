#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A24C60)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A228D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A24C70)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A24D60)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A24DB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A24DC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A24E10)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A24E60)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_BASEMEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x9A24E70)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_HASATOMICMEMBERS_OFFSET UNITYSDK_OFFSET(0x9A226C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_ISUNIONBASEOF_OFFSET UNITYSDK_OFFSET(0x9A22BD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A24E80)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A250C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A25630)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_union_TypeDefinitionIndex = 27998;

	class Datatype_union : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8
		::Il2CppArray<::System::Object*>* types; // 0x38

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BaseMemberTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_BASEMEMBERTYPES_OFFSET))(nullptr);
		}

		::System::Boolean HasAtomicMembers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_HASATOMICMEMBERS_OFFSET))(nullptr);
		}

		::System::Boolean IsUnionBaseOf(::System::Xml::Schema::DatatypeImplementation* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::DatatypeImplementation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_ISUNIONBASEOF_OFFSET))(arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::Object* arg, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_TRYPARSEVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

