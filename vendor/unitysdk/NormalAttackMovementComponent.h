#pragma once
#include "unitysdk.h"

class NormalAttackMovementSystem;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Vector3; }
namespace MX::Visual::Data { class FacingTargetType; }

#define NORMALATTACKMOVEMENTCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A7580)
#define NORMALATTACKMOVEMENTCOMPONENT_GET_ENDACTION_OFFSET UNITYSDK_OFFSET(0x15A7590)
#define NORMALATTACKMOVEMENTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x15A75A0)
#define NORMALATTACKMOVEMENTCOMPONENT_SET_ONARRIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A7620)
#define NORMALATTACKMOVEMENTCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A7630)
#define NORMALATTACKMOVEMENTCOMPONENT_GET_ONARRIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A7F70)
#define NORMALATTACKMOVEMENTCOMPONENT_SET_ENDACTION_OFFSET UNITYSDK_OFFSET(0x15A7F80)

	inline static constexpr unsigned int NormalAttackMovementComponent_TypeDefinitionIndex = 1095;

	class NormalAttackMovementComponent : public Il2CppObject
	{
	public:
		NormalAttackMovementSystem* movementSystem; // 0x18
		::UnityEngine::Transform* Transform; // 0x20
		::UnityEngine::Transform* TargetTransform; // 0x28
		::UnityEngine::AnimationCurve* UpCurve; // 0x30
		::UnityEngine::AnimationCurve* RightCurve; // 0x38
		::UnityEngine::AnimationCurve* ForwardCurve; // 0x40
		::UnityEngine::Vector3* StartPosition; // 0x48
		::UnityEngine::Vector3* LastMoveDirection; // 0x54
		::System::Single LastMoveSpeed; // 0x60
		::MX::Visual::Data::FacingTargetType* FacingTargetType; // 0x64
		::System::Boolean IsMoveEnd; // 0x68
		::System::Single Duration; // 0x6C
		::System::Single Timer; // 0x70
		::System::Single DestroyDelay; // 0x74
		::System::Single FireDelay; // 0x78
		::System::Action* _OnArrivedCallback_k__BackingField; // 0x80
		::System::Action* _EndAction_k__BackingField; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Action* get_EndAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTCOMPONENT_GET_ENDACTION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTCOMPONENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_OnArrivedCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTCOMPONENT_SET_ONARRIVEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTCOMPONENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Action* get_OnArrivedCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTCOMPONENT_GET_ONARRIVEDCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_EndAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTCOMPONENT_SET_ENDACTION_OFFSET))(arg, nullptr);
		}

	};

