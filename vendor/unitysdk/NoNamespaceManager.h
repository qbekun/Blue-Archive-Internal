#pragma once
#include "unitysdk.h"

#define NONAMESPACEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x996AA90)
#define NONAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x996AAA0)
#define NONAMESPACEMANAGER_PUSHSCOPE_OFFSET UNITYSDK_OFFSET(0x996AAE0)
#define NONAMESPACEMANAGER_POPSCOPE_OFFSET UNITYSDK_OFFSET(0x996AAF0)
#define NONAMESPACEMANAGER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x996AB00)
#define NONAMESPACEMANAGER_REMOVENAMESPACE_OFFSET UNITYSDK_OFFSET(0x996AB10)
#define NONAMESPACEMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x996AB20)
#define NONAMESPACEMANAGER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x996AB30)
#define NONAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x996AB40)
#define NONAMESPACEMANAGER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x996AB80)

	inline static constexpr unsigned int NoNamespaceManager_TypeDefinitionIndex = 27694;

	class NoNamespaceManager : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_DefaultNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET))(nullptr);
		}

		::System::Void PushScope()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_PUSHSCOPE_OFFSET))(nullptr);
		}

		::System::Boolean PopScope()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_POPSCOPE_OFFSET))(nullptr);
		}

		::System::Void AddNamespace(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_ADDNAMESPACE_OFFSET))(str, str, nullptr);
		}

		::System::Void RemoveNamespace(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_REMOVENAMESPACE_OFFSET))(str, str, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNamespacesInScope(::System::Xml::XmlNamespaceScope* arg)
		{
			return (return (Il2CppObject*(*)(::System::Xml::XmlNamespaceScope*, ::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_GETNAMESPACESINSCOPE_OFFSET))(arg, nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NONAMESPACEMANAGER_LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

	};

