#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNAMESPACEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8D70)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8D80)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x99C9020)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x99C9030)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_PUSHSCOPE_OFFSET UNITYSDK_OFFSET(0x99C90B0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_POPSCOPE_OFFSET UNITYSDK_OFFSET(0x99C90C0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x99C9180)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_REMOVENAMESPACE_OFFSET UNITYSDK_OFFSET(0x99C9770)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x99C98B0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x99C9A10)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x99C9C10)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACEDECL_OFFSET UNITYSDK_OFFSET(0x99C95B0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x99C9C60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamespaceManager_TypeDefinitionIndex = 27833;

	class XmlNamespaceManager : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* nsdecls; // 0x10
		::System::Int32 lastDecl; // 0x18
		::System::Xml::XmlNameTable* nameTable; // 0x20
		::System::Int32 scopeId; // 0x28
		Il2CppObject* hashTable; // 0x30
		::System::Boolean useHashtable; // 0x38
		::System::String* xml; // 0x40
		::System::String* xmlNs; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::String* get_DefaultNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET))(nullptr);
		}

		::System::Void PushScope()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_PUSHSCOPE_OFFSET))(nullptr);
		}

		::System::Boolean PopScope()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_POPSCOPE_OFFSET))(nullptr);
		}

		::System::Void AddNamespace(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_ADDNAMESPACE_OFFSET))(str, str, nullptr);
		}

		::System::Void RemoveNamespace(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_REMOVENAMESPACE_OFFSET))(str, str, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNamespacesInScope(::System::Xml::XmlNamespaceScope* arg)
		{
			return (return (Il2CppObject*(*)(::System::Xml::XmlNamespaceScope*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GETNAMESPACESINSCOPE_OFFSET))(arg, nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Int32 LookupNamespaceDecl(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACEDECL_OFFSET))(str, nullptr);
		}

		::System::String* LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

	};
}

