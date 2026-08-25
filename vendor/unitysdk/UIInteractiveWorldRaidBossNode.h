#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define UIINTERACTIVEWORLDRAIDBOSSNODE_SETNODEOFF_OFFSET UNITYSDK_OFFSET(0x260D450)
#define UIINTERACTIVEWORLDRAIDBOSSNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2611830)
#define UIINTERACTIVEWORLDRAIDBOSSNODE_SETNODEON_OFFSET UNITYSDK_OFFSET(0x2611840)
#define UIINTERACTIVEWORLDRAIDBOSSNODE_SETMOSTPARTICIPATEDLIGHTPILLAR_OFFSET UNITYSDK_OFFSET(0x26118E0)
#define UIINTERACTIVEWORLDRAIDBOSSNODE_PLAYSWITCHANIMATION_OFFSET UNITYSDK_OFFSET(0x2605C60)
#define UIINTERACTIVEWORLDRAIDBOSSNODE_SETNODEOBJECTBYCLEAR_OFFSET UNITYSDK_OFFSET(0x2611960)

	inline static constexpr unsigned int UIInteractiveWorldRaidBossNode_TypeDefinitionIndex = 6500;

	class UIInteractiveWorldRaidBossNode : public Il2CppObject
	{
	public:
		::System::Boolean IsCenterNode; // 0x18
		::UnityEngine::Transform* WorldRotation; // 0x20
		::UnityEngine::Camera* CameraViewOfThisNode; // 0x28
		::UnityEngine::Transform* NodeMarker; // 0x30
		::System::Int64 EventContentStageId; // 0x38
		::System::Int64 bossGroupId; // 0x40
		::System::String* bossGroupName; // 0x48
		::System::Boolean isNodeMarkerOn; // 0x50
		::UnityEngine::Animator* nodeObjectUnclearedAnimator; // 0x58
		::UnityEngine::Animator* nodeObjectClearedAnimator; // 0x60
		::UnityEngine::GameObject* nodeObjectUncleared; // 0x68
		::UnityEngine::GameObject* nodeObjectCleared; // 0x70
		::UnityEngine::GameObject* mostParticipatedIndicatorLightPillar; // 0x78

		::System::Void SetNodeOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDBOSSNODE_SETNODEOFF_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDBOSSNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetNodeOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDBOSSNODE_SETNODEON_OFFSET))(nullptr);
		}

		::System::Void SetMostParticipatedLightPillar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDBOSSNODE_SETMOSTPARTICIPATEDLIGHTPILLAR_OFFSET))(arg, nullptr);
		}

		::System::Void PlaySwitchAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDBOSSNODE_PLAYSWITCHANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetNodeObjectByClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDBOSSNODE_SETNODEOBJECTBYCLEAR_OFFSET))(nullptr);
		}

	};

