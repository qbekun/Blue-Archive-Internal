#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class AnimatorUpdateMode; }
namespace Animancer { class AnimancerPlayable; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimationClip; }

#define ANIMANCER_IANIMANCERCOMPONENT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_GET_ISPLAYABLEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_GETKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_GET_RESETONDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IANIMANCERCOMPONENT_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IAnimancerComponent_TypeDefinitionIndex = 35144;

	class IAnimancerComponent : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorUpdateMode* get_UpdateMode()
		{
			return (return (::UnityEngine::AnimatorUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_GET_UPDATEMODE_OFFSET))(nullptr);
		}

		::Animancer::AnimancerPlayable* get_Playable()
		{
			return (return (::Animancer::AnimancerPlayable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_GET_PLAYABLE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateMode(::UnityEngine::AnimatorUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimatorUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_SET_UPDATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_Animator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlayableInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_GET_ISPLAYABLEINITIALIZED_OFFSET))(nullptr);
		}

		::System::Object* GetKey(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ResetOnDisable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_GET_RESETONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return (return (::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMANCERCOMPONENT_GET_ANIMATOR_OFFSET))(nullptr);
		}

	};
}

