#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_.CTOR_OFFSET UNITYSDK_OFFSET(0x922E510)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET UNITYSDK_OFFSET(0x922E540)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_FINDRESOURCEFILE_OFFSET UNITYSDK_OFFSET(0x922E8C0)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET UNITYSDK_OFFSET(0x922E9B0)

namespace System::Resources
{
	inline static constexpr unsigned int FileBasedResourceGroveler_TypeDefinitionIndex = 24817;

	class FileBasedResourceGroveler : public Il2CppObject
	{
	public:
		ResourceManagerMediator* _mediator; // 0x10

		::System::Void .ctor(ResourceManagerMediator* arg)
		{
			((::System::Void(*)(ResourceManagerMediator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Resources::ResourceSet*(*)(::System::Globalization::CultureInfo*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* FindResourceFile(::System::Globalization::CultureInfo* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Globalization::CultureInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_FINDRESOURCEFILE_OFFSET))(arg, str, nullptr);
		}

		::System::Resources::ResourceSet* CreateResourceSet(::System::String* str)
		{
			return (return (::System::Resources::ResourceSet*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET))(str, nullptr);
		}

	};
}

