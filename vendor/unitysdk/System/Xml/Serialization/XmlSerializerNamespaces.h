#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D0900)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADD_OFFSET UNITYSDK_OFFSET(0x99D0910)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x99D0A00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_TOARRAY_OFFSET UNITYSDK_OFFSET(0x99D0B10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x99D1140)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x99D0C00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x99D0AA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_SET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x99D11D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializerNamespaces_TypeDefinitionIndex = 27856;

	class XmlSerializerNamespaces : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* namespaces; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADD_OFFSET))(str, str, nullptr);
		}

		::System::Void AddInternal(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADDINTERNAL_OFFSET))(str, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_TOARRAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_NamespaceList()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACELIST_OFFSET))(nullptr);
		}

		::System::Collections::Hashtable* get_Namespaces()
		{
			return (return (::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACES_OFFSET))(nullptr);
		}

		::System::Void set_Namespaces(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_SET_NAMESPACES_OFFSET))(arg, nullptr);
		}

	};
}

