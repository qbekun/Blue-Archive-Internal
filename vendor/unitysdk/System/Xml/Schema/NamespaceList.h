#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_NAMESPACELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9880CA0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9880CB0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_CLONE_OFFSET UNITYSDK_OFFSET(0x9880F20)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9881060)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_EXCLUDED_OFFSET UNITYSDK_OFFSET(0x9881070)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_ENUMERATE_OFFSET UNITYSDK_OFFSET(0x9881080)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET UNITYSDK_OFFSET(0x9881100)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET UNITYSDK_OFFSET(0x9881180)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98811B0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ISSUBSET_OFFSET UNITYSDK_OFFSET(0x98816B0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_UNION_OFFSET UNITYSDK_OFFSET(0x9881AD0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_COMPARESETTOOTHER_OFFSET UNITYSDK_OFFSET(0x98820D0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_INTERSECTION_OFFSET UNITYSDK_OFFSET(0x9882210)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_REMOVENAMESPACE_OFFSET UNITYSDK_OFFSET(0x98828B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceList_TypeDefinitionIndex = 28079;

	class NamespaceList : public Il2CppObject
	{
	public:
		ListType* type; // 0x10
		::System::Collections::Hashtable* set; // 0x18
		::System::String* targetNamespace; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Xml::Schema::NamespaceList* Clone()
		{
			return (return (::System::Xml::Schema::NamespaceList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_CLONE_OFFSET))(nullptr);
		}

		ListType* get_Type()
		{
			return (return (ListType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_Excluded()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_EXCLUDED_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Enumerate()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_ENUMERATE_OFFSET))(nullptr);
		}

		::System::Boolean Allows(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET))(str, nullptr);
		}

		::System::Boolean Allows(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsSubset(::System::Xml::Schema::NamespaceList* arg, ::System::Xml::Schema::NamespaceList* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ISSUBSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::NamespaceList* Union(::System::Xml::Schema::NamespaceList* arg, ::System::Xml::Schema::NamespaceList* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::NamespaceList*(*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_UNION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::NamespaceList* CompareSetToOther(::System::Xml::Schema::NamespaceList* arg)
		{
			return (return (::System::Xml::Schema::NamespaceList*(*)(::System::Xml::Schema::NamespaceList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_COMPARESETTOOTHER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::NamespaceList* Intersection(::System::Xml::Schema::NamespaceList* arg, ::System::Xml::Schema::NamespaceList* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::NamespaceList*(*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_INTERSECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveNamespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_REMOVENAMESPACE_OFFSET))(str, nullptr);
		}

	};
}

