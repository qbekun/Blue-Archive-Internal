#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_IRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Resources
{
	inline static constexpr unsigned int IResourceGroveler_TypeDefinitionIndex = 24818;

	class IResourceGroveler : public Il2CppObject
	{
	public:
		::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Resources::ResourceSet*(*)(::System::Globalization::CultureInfo*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_IRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

