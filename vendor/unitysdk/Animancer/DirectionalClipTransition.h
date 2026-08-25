#pragma once
#include "../unitysdk.h"

namespace Animancer { class DirectionalAnimationSet; }
namespace Animancer { class DirectionalAnimationSet&; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Vector2; }
namespace Animancer { class DirectionalClipTransition; }

#define ANIMANCER_DIRECTIONALCLIPTRANSITION_GET_ANIMATIONSET_OFFSET UNITYSDK_OFFSET(0x4BC390)
#define ANIMANCER_DIRECTIONALCLIPTRANSITION_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4BC3A0)
#define ANIMANCER_DIRECTIONALCLIPTRANSITION_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x4BC3B0)
#define ANIMANCER_DIRECTIONALCLIPTRANSITION_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x4BC3F0)
#define ANIMANCER_DIRECTIONALCLIPTRANSITION_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x4BC430)
#define ANIMANCER_DIRECTIONALCLIPTRANSITION_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x4BC4C0)
#define ANIMANCER_DIRECTIONALCLIPTRANSITION_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4BC500)
#define ANIMANCER_DIRECTIONALCLIPTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4BC550)
#define ANIMANCER_DIRECTIONALCLIPTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BC660)

namespace Animancer
{
	inline static constexpr unsigned int DirectionalClipTransition_TypeDefinitionIndex = 35201;

	class DirectionalClipTransition : public Il2CppObject
	{
	public:
		::Animancer::DirectionalAnimationSet* _AnimationSet; // 0x48

		::Animancer::DirectionalAnimationSet&* get_AnimationSet()
		{
			return (return (::Animancer::DirectionalAnimationSet&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_GET_ANIMATIONSET_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_GET_MAINOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetDirection(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_SETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_SETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirection(Direction* arg)
		{
			((::System::Void(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_SETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirection(Direction* arg)
		{
			((::System::Void(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_SETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::Animancer::DirectionalClipTransition* arg)
		{
			((::System::Void(*)(::Animancer::DirectionalClipTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALCLIPTRANSITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

