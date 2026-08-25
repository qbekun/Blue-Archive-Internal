#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonRenderer; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace UnityEngine { class GameObject; }
namespace Spine::Unity { class ISkeletonComponent; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9613830)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_RESETJOINTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x96139D0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9613AE0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_COMPENSATEMOVEMENTAFTERFLIPX_OFFSET UNITYSDK_OFFSET(0x9613AF0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_START_OFFSET UNITYSDK_OFFSET(0x9613C00)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_HANDLEFLIP_OFFSET UNITYSDK_OFFSET(0x9613910)

namespace Spine::Unity
{
	inline static constexpr unsigned int ActivateBasedOnFlipDirection_TypeDefinitionIndex = 35330;

	class ActivateBasedOnFlipDirection : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x20
		::UnityEngine::GameObject* activeOnNormalX; // 0x28
		::UnityEngine::GameObject* activeOnFlippedX; // 0x30
		::Il2CppArray<::System::Object*>* jointsNormalX; // 0x38
		::Il2CppArray<::System::Object*>* jointsFlippedX; // 0x40
		::Spine::Unity::ISkeletonComponent* skeletonComponent; // 0x48
		::System::Boolean wasFlippedXBefore; // 0x50

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void ResetJointPositions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_RESETJOINTPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CompensateMovementAfterFlipX(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_COMPENSATEMOVEMENTAFTERFLIPX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_START_OFFSET))(nullptr);
		}

		::System::Void HandleFlip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_HANDLEFLIP_OFFSET))(arg, nullptr);
		}

	};
}

