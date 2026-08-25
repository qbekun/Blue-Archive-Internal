#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }

#define ANIMANCER_NAMEDANIMANCERCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B3F40)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x4B3F50)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_SET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x4B3FA0)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x4B3FF0)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_SET_DEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x4B40C0)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_GET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x4B41D0)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_GET_DEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x4B41E0)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4B4250)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_GET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0x4B4280)
#define ANIMANCER_NAMEDANIMANCERCOMPONENT_GETKEY_OFFSET UNITYSDK_OFFSET(0x4B4290)

namespace Animancer
{
	inline static constexpr unsigned int NamedAnimancerComponent_TypeDefinitionIndex = 35166;

	class NamedAnimancerComponent : public GroupOperationSettings
	{
	public:
		::System::Boolean _PlayAutomatically; // 0x30
		::Il2CppArray<::System::Object*>* _Animations; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_Animations(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_SET_ANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultAnimation(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_SET_DEFAULTANIMATION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Animations()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_GET_ANIMATIONS_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* get_DefaultAnimation()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_GET_DEFAULTANIMATION_OFFSET))(nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		bool&* get_PlayAutomatically()
		{
			return (return (bool&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_GET_PLAYAUTOMATICALLY_OFFSET))(nullptr);
		}

		::System::Object* GetKey(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_NAMEDANIMANCERCOMPONENT_GETKEY_OFFSET))(arg, nullptr);
		}

	};
}

