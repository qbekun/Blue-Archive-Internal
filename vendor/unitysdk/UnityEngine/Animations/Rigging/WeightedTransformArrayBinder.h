#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }
namespace UnityEngine::Animations::Rigging { class WeightedTransformArray; }

#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAYBINDER_BINDREADONLYTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x9E23160)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAYBINDER_BINDWEIGHTS_OFFSET UNITYSDK_OFFSET(0x9E23380)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int WeightedTransformArrayBinder_TypeDefinitionIndex = 37164;

	class WeightedTransformArrayBinder : public Il2CppObject
	{
	public:
		::System::Void BindReadOnlyTransforms(::UnityEngine::Animator* arg, ::UnityEngine::Component* arg, ::UnityEngine::Animations::Rigging::WeightedTransformArray* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Component*, ::UnityEngine::Animations::Rigging::WeightedTransformArray*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAYBINDER_BINDREADONLYTRANSFORMS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BindWeights(::UnityEngine::Animator* arg, ::UnityEngine::Component* arg, ::UnityEngine::Animations::Rigging::WeightedTransformArray* arg, ::System::String* str, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Component*, ::UnityEngine::Animations::Rigging::WeightedTransformArray*, ::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAYBINDER_BINDWEIGHTS_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

	};
}

