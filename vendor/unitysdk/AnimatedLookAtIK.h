#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }

#define ANIMATEDLOOKATIK_SET_ANGLETOTARGET_OFFSET UNITYSDK_OFFSET(0x20A45C0)
#define ANIMATEDLOOKATIK_AWAKE_OFFSET UNITYSDK_OFFSET(0x20A45D0)
#define ANIMATEDLOOKATIK_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x20A4630)
#define ANIMATEDLOOKATIK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A4890)
#define ANIMATEDLOOKATIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20A48B0)
#define ANIMATEDLOOKATIK_GET_ANGLETOTARGET_OFFSET UNITYSDK_OFFSET(0x20A48F0)
#define ANIMATEDLOOKATIK_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x20A4900)

	inline static constexpr unsigned int AnimatedLookAtIK_TypeDefinitionIndex = 3539;

	class AnimatedLookAtIK : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Target; // 0x18
		::System::Boolean followYMovement; // 0x20
		::System::Single maxAnglePerFrame; // 0x24
		::System::Int32 accelDurationFrames; // 0x28
		::System::Single accelPerFrame; // 0x2C
		::System::Single startBreakAngle; // 0x30
		::System::Single moveAngle; // 0x34
		::UnityEngine::Quaternion* appliedRotation; // 0x38
		::System::Single _AngleToTarget_k__BackingField; // 0x48

		::System::Void set_AngleToTarget(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDLOOKATIK_SET_ANGLETOTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDLOOKATIK_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetTargetPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDLOOKATIK_GETTARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDLOOKATIK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDLOOKATIK_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Single get_AngleToTarget()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDLOOKATIK_GET_ANGLETOTARGET_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDLOOKATIK_FIXEDUPDATE_OFFSET))(nullptr);
		}

	};

