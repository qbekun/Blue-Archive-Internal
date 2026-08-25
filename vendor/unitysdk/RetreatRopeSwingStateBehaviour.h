#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorStateInfo; }

#define RETREATROPESWINGSTATEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x10A7F30)
#define RETREATROPESWINGSTATEBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x10A7F90)
#define RETREATROPESWINGSTATEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x10A7FA0)

	inline static constexpr unsigned int RetreatRopeSwingStateBehaviour_TypeDefinitionIndex = 869;

	class RetreatRopeSwingStateBehaviour : public Il2CppObject
	{
	public:
		::System::Void OnStateEnter(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RETREATROPESWINGSTATEBEHAVIOUR_ONSTATEENTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETREATROPESWINGSTATEBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RETREATROPESWINGSTATEBEHAVIOUR_ONSTATEEXIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

