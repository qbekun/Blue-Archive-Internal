#pragma once
#include "../unitysdk.h"

namespace Animancer { class ITransition; }

#define ANIMANCER_ANIMANCERTRANSITIONASSET`1_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITIONASSET`1_SET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITIONASSET`1_GET_HASTRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITIONASSET`1_ASSERTTRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITIONASSET`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITIONASSET`1_GETTRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerTransitionAsset`1_TypeDefinitionIndex = 35217;

	class AnimancerTransitionAsset`1 : public ::UnityEngine::AnimatorUpdateMode
	{
	public:
		Il2CppObject* _Transition; // 0x0

		Il2CppObject* get_Transition()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSET`1_GET_TRANSITION_OFFSET))(nullptr);
		}

		::System::Void set_Transition(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSET`1_SET_TRANSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasTransition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSET`1_GET_HASTRANSITION_OFFSET))(nullptr);
		}

		::System::Void AssertTransition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSET`1_ASSERTTRANSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSET`1_.CTOR_OFFSET))(nullptr);
		}

		::Animancer::ITransition* GetTransition()
		{
			return (return (::Animancer::ITransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSET`1_GETTRANSITION_OFFSET))(nullptr);
		}

	};
}

