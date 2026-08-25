#pragma once
#include "../unitysdk.h"

namespace Animancer { class HybridAnimancerComponent; }

#define ANIMANCER_HYBRIDANIMANCERCOMPONENTEXTENSIONS_UPDATE_OFFSET UNITYSDK_OFFSET(0x48E030)

namespace Animancer
{
	inline static constexpr unsigned int HybridAnimancerComponentExtensions_TypeDefinitionIndex = 35083;

	class HybridAnimancerComponentExtensions : public Il2CppObject
	{
	public:
		::System::Void Update(::Animancer::HybridAnimancerComponent* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Animancer::HybridAnimancerComponent*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENTEXTENSIONS_UPDATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

