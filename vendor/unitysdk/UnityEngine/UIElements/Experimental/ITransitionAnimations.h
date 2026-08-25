#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::Experimental { class StyleValues; }

#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_ITRANSITIONANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements::Experimental
{
	inline static constexpr unsigned int ITransitionAnimations_TypeDefinitionIndex = 30833;

	class ITransitionAnimations : public Il2CppObject
	{
	public:
		Il2CppObject* Start(::UnityEngine::UIElements::Experimental::StyleValues* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::Experimental::StyleValues*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_ITRANSITIONANIMATIONS_START_OFFSET))(arg, arg, nullptr);
		}

	};
}

