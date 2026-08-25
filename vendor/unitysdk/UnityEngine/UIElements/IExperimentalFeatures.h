#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements::Experimental { class ITransitionAnimations; }

#define UNITYENGINE_UIELEMENTS_IEXPERIMENTALFEATURES_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IExperimentalFeatures_TypeDefinitionIndex = 30250;

	class IExperimentalFeatures : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Experimental::ITransitionAnimations* get_animation()
		{
			return (return (::UnityEngine::UIElements::Experimental::ITransitionAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IEXPERIMENTALFEATURES_GET_ANIMATION_OFFSET))(nullptr);
		}

	};
}

