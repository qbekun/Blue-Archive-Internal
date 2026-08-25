#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Playables { class Playable&; }
namespace UnityEngine { class Object; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_CLIPSTATE_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x4A9870)
#define ANIMANCER_CLIPSTATE_GET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x4A98A0)
#define ANIMANCER_CLIPSTATE_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x4A9930)
#define ANIMANCER_CLIPSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x4A9980)
#define ANIMANCER_CLIPSTATE_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x4A99B0)
#define ANIMANCER_CLIPSTATE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x4A9A00)
#define ANIMANCER_CLIPSTATE_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4A9A70)
#define ANIMANCER_CLIPSTATE_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x4A9A80)
#define ANIMANCER_CLIPSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A9AB0)
#define ANIMANCER_CLIPSTATE_SET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4A9B20)
#define ANIMANCER_CLIPSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x4A9B90)
#define ANIMANCER_CLIPSTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x4A9CC0)
#define ANIMANCER_CLIPSTATE_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x4A9CD0)
#define ANIMANCER_CLIPSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x4A9D60)
#define ANIMANCER_CLIPSTATE_SET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x4A9D90)

namespace Animancer
{
	inline static constexpr unsigned int ClipState_TypeDefinitionIndex = 35123;

	class ClipState : public ::UnityEngine::AvatarIKHint
	{
	public:
		::UnityEngine::AnimationClip* _Clip; // 0x80

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_GET_APPLYANIMATORIK_OFFSET))(nullptr);
		}

		::System::Void set_Clip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_DESTROY_OFFSET))(nullptr);
		}

		::System::Void set_ApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Void CreatePlayable(::UnityEngine::Playables::Playable&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_CREATEPLAYABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_GET_MAINOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_MainObject(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_SET_MAINOBJECT_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_CLONE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_Clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void set_ApplyAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPSTATE_SET_APPLYANIMATORIK_OFFSET))(arg, nullptr);
		}

	};
}

