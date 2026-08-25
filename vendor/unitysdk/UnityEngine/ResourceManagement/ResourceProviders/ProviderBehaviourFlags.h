#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class ProviderBehaviourFlags; }

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int ProviderBehaviourFlags_TypeDefinitionIndex = 36399;

	class ProviderBehaviourFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags* None; // 0x0
		::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags* CanProvideWithFailedDependencies; // 0x0

	};
}

