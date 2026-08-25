#pragma once
#include "unitysdk.h"

#define NAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x9A30C00)
#define NAMESPACEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A30BF0)

	inline static constexpr unsigned int NamespaceManager_TypeDefinitionIndex = 28059;

	class NamespaceManager : public Il2CppObject
	{
	public:
		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMESPACEMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};

