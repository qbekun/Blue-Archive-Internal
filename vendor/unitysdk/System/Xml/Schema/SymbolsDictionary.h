#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0C9E0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9A0CA90)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_ISUPAENFORCED_OFFSET UNITYSDK_OFFSET(0x9A0CAA0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_SET_ISUPAENFORCED_OFFSET UNITYSDK_OFFSET(0x9A0CAB0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAME_OFFSET UNITYSDK_OFFSET(0x9A0CAC0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x9A0CBF0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDWILDCARD_OFFSET UNITYSDK_OFFSET(0x9A0CFF0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETNAMESPACELISTSYMBOLS_OFFSET UNITYSDK_OFFSET(0x9A0D160)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9A0D9B0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_EXISTS_OFFSET UNITYSDK_OFFSET(0x9A0DA60)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETPARTICLE_OFFSET UNITYSDK_OFFSET(0x9A0DA90)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_NAMEOF_OFFSET UNITYSDK_OFFSET(0x9A0DAD0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SymbolsDictionary_TypeDefinitionIndex = 27969;

	class SymbolsDictionary : public Il2CppObject
	{
	public:
		::System::Int32 last; // 0x10
		::System::Collections::Hashtable* names; // 0x18
		::System::Collections::Hashtable* wildcards; // 0x20
		::System::Collections::ArrayList* particles; // 0x28
		::System::Object* particleLast; // 0x30
		::System::Boolean isUpaEnforced; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUpaEnforced()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_ISUPAENFORCED_OFFSET))(nullptr);
		}

		::System::Void set_IsUpaEnforced(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_SET_ISUPAENFORCED_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddName(::System::Xml::XmlQualifiedName* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::XmlQualifiedName*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNamespaceList(::System::Xml::Schema::NamespaceList* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::NamespaceList*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAMESPACELIST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddWildcard(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDWILDCARD_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::ICollection* GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::System::Xml::Schema::NamespaceList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETNAMESPACELISTSYMBOLS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Item(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean Exists(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_EXISTS_OFFSET))(arg, nullptr);
		}

		::System::Object* GetParticle(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::String* NameOf(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_NAMEOF_OFFSET))(arg, nullptr);
		}

	};
}

