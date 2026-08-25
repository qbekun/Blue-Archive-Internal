#pragma once
#include "unitysdk.h"

#define BUILDERNAMESPACEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x992FFA0)
#define BUILDERNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x992FFF0)

	inline static constexpr unsigned int BuilderNamespaceManager_TypeDefinitionIndex = 28234;

	class BuilderNamespaceManager : public Il2CppObject
	{
	public:
		::System::Xml::XmlNamespaceManager* nsMgr; // 0x50
		::System::Xml::XmlReader* reader; // 0x58

		::System::Void .ctor(::System::Xml::XmlNamespaceManager* arg, ::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNamespaceManager*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDERNAMESPACEMANAGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDERNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

	};

