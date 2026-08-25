#pragma once
#include "unitysdk.h"

class CharacterBoundProjectileMovementSystem;
namespace MX::Logic::BattleEntities { class NonTargetBounceDestructibleProjectile; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Vector3; }
namespace MX::Visual::Data { class FacingTargetType; }

#define CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_GET_ENDACTION_OFFSET UNITYSDK_OFFSET(0x15A67E0)
#define CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x15A67F0)
#define CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_SET_ENDACTION_OFFSET UNITYSDK_OFFSET(0x15A68D0)
#define CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_GET_ONARRIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A68E0)
#define CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_SET_ONARRIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A68F0)
#define CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A67D0)
#define CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A6900)

	inline static constexpr unsigned int CharacterBoundProjectileMovementComponent_TypeDefinitionIndex = 1093;

	class CharacterBoundProjectileMovementComponent : public Il2CppObject
	{
	public:
		CharacterBoundProjectileMovementSystem* movementSystem; // 0x18
		::MX::Logic::BattleEntities::NonTargetBounceDestructibleProjectile* Projectile; // 0x20
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CharacterBound; // 0x28
		::UnityEngine::Transform* Transform; // 0x30
		::UnityEngine::Transform* TargetTransform; // 0x38
		::UnityEngine::AnimationCurve* UpCurve; // 0x40
		::UnityEngine::Vector3* StartPosition; // 0x48
		::MX::Visual::Data::FacingTargetType* FacingTargetType; // 0x54
		::System::Boolean IsMoveEnd; // 0x58
		::System::Single Timer; // 0x5C
		::System::Single FireDelay; // 0x60
		::System::Action* _OnArrivedCallback_k__BackingField; // 0x68
		::System::Action* _EndAction_k__BackingField; // 0x70

		::System::Action* get_EndAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_GET_ENDACTION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_EndAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_SET_ENDACTION_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OnArrivedCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_GET_ONARRIVEDCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_OnArrivedCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_SET_ONARRIVEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTCOMPONENT_UPDATE_OFFSET))(nullptr);
		}

	};

