#pragma once
#include "unitysdk.h"

class SpineCharacter;
class SpineClip;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Coroutine; }
class PortraitSpineCharacter;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector2; }

#define SPINEDRAGIK_COMOVEBONE_OFFSET UNITYSDK_OFFSET(0x20E8810)
#define SPINEDRAGIK_GET_CACHEDCAMERA_OFFSET UNITYSDK_OFFSET(0x20E88A0)
#define SPINEDRAGIK_ONDRAG_OFFSET UNITYSDK_OFFSET(0x20E8950)
#define SPINEDRAGIK_UPDATEDESTLOCALPOS_OFFSET UNITYSDK_OFFSET(0x20E8A20)
#define SPINEDRAGIK_START_OFFSET UNITYSDK_OFFSET(0x20E8BB0)
#define SPINEDRAGIK_COTRIGGER_OFFSET UNITYSDK_OFFSET(0x20E8C90)
#define SPINEDRAGIK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E8D20)
#define SPINEDRAGIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20E8D80)
#define SPINEDRAGIK_ONPRESS_OFFSET UNITYSDK_OFFSET(0x20E8E00)

	inline static constexpr unsigned int SpineDragIK_TypeDefinitionIndex = 3792;

	class SpineDragIK : public Il2CppObject
	{
	public:
		SpineCharacter* SpineController; // 0x18
		SpineClip* IngClip; // 0x20
		SpineClip* EndClip; // 0x28
		::UnityEngine::Transform* Bone; // 0x30
		::UnityEngine::Vector3* OrigLocalPos; // 0x38
		::UnityEngine::Vector3* BoneCenterOffset; // 0x44
		::UnityEngine::Vector3* MinLocalPos; // 0x50
		::UnityEngine::Vector3* MaxLocalPos; // 0x5C
		::System::Single FollowDragSpeed01; // 0x68
		::System::Single FollowReleaseSpeed01; // 0x6C
		::System::Single TriggerDelay; // 0x70
		::UnityEngine::Vector3* screenPos; // 0x74
		::UnityEngine::Vector3* destLocalPos; // 0x80
		::System::Boolean isPressing; // 0x8C
		::System::Boolean isUpdating; // 0x8D
		::UnityEngine::Coroutine* coroutine; // 0x90
		::UnityEngine::Coroutine* triggerCoroutine; // 0x98
		PortraitSpineCharacter* portraitSpineCharacter; // 0xA0
		::UnityEngine::Camera* mCachedCamera; // 0xA8

		::System::Collections::IEnumerator* CoMoveBone()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_COMOVEBONE_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_CachedCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_GET_CACHEDCAMERA_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDestLocalPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_UPDATEDESTLOCALPOS_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_START_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoTrigger()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_COTRIGGER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEDRAGIK_ONPRESS_OFFSET))(arg, nullptr);
		}

	};

