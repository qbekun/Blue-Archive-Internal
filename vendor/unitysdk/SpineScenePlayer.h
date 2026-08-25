#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class SkeletonAnimation; }
class SpineSceneActor;
namespace UnityEngine { class Coroutine; }
class MXButton;
namespace UnityEngine { class Vector3; }

#define SPINESCENEPLAYER_GET_CURRENTACTOR_OFFSET UNITYSDK_OFFSET(0x20EB4D0)
#define SPINESCENEPLAYER_SET_CURRENTACTOR_OFFSET UNITYSDK_OFFSET(0x20EB4E0)
#define SPINESCENEPLAYER_GET_SCENESCALE_OFFSET UNITYSDK_OFFSET(0x20EA430)
#define SPINESCENEPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20EB4F0)
#define SPINESCENEPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20EB7C0)
#define SPINESCENEPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20EBE90)
#define SPINESCENEPLAYER_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x20EBED0)
#define SPINESCENEPLAYER_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x20EB910)
#define SPINESCENEPLAYER_INTERACT_OFFSET UNITYSDK_OFFSET(0x20EA5C0)
#define SPINESCENEPLAYER_COINTERACT_OFFSET UNITYSDK_OFFSET(0x20EBFC0)
#define SPINESCENEPLAYER_ONANIMATIONSET_OFFSET UNITYSDK_OFFSET(0x20EC080)
#define SPINESCENEPLAYER_ONINTERACTIONFINISHED_OFFSET UNITYSDK_OFFSET(0x20EC090)
#define SPINESCENEPLAYER_ONCLICKCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x20EC0A0)
#define SPINESCENEPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20EC190)

	inline static constexpr unsigned int SpineScenePlayer_TypeDefinitionIndex = 3806;

	class SpineScenePlayer : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonAnimation* SceneAnimation; // 0x18
		SpineSceneActor* _CurrentActor_k__BackingField; // 0x20
		Il2CppObject* idleActors; // 0x28
		::Il2CppArray<::System::Object*>* spineSceneActors; // 0x30
		::UnityEngine::Coroutine* interactionCoroutine; // 0x38
		MXButton* ChangeStateButton; // 0x40

		SpineSceneActor* get_CurrentActor()
		{
			return ((SpineSceneActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_GET_CURRENTACTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentActor(SpineSceneActor* arg)
		{
			((::System::Void(*)(SpineSceneActor*, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_SET_CURRENTACTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_SceneScale()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_GET_SCENESCALE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_SETANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void SetAnimation(SpineSceneActor* arg)
		{
			((::System::Void(*)(SpineSceneActor*, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_SETANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void Interact(SpineSceneActor* arg)
		{
			((::System::Void(*)(SpineSceneActor*, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_INTERACT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoInteract(SpineSceneActor* arg, ::System::Single arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(SpineSceneActor*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_COINTERACT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAnimationSet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_ONANIMATIONSET_OFFSET))(nullptr);
		}

		::System::Void OnInteractionFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_ONINTERACTIONFINISHED_OFFSET))(nullptr);
		}

		::System::Void OnClickChangeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_ONCLICKCHANGESTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEPLAYER_.CTOR_OFFSET))(nullptr);
		}

	};

