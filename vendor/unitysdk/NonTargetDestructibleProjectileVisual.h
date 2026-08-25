#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class ProjectileBoundCharacter; }
class CharacterBoundProjectileMovementComponent;
namespace UnityEngine { class GameObject; }
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }

#define NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_CREATEENTITIES_OFFSET UNITYSDK_OFFSET(0x13BF8B0)
#define NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13BFD90)
#define NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_EXPIREVISUAL_OFFSET UNITYSDK_OFFSET(0x13C0A70)
#define NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_APPLYACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13C0BC0)
#define NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BF8A0)
#define NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_PROCESSARRIVED_OFFSET UNITYSDK_OFFSET(0x13C0C90)

	inline static constexpr unsigned int NonTargetDestructibleProjectileVisual_TypeDefinitionIndex = 1031;

	class NonTargetDestructibleProjectileVisual : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* UpCurveList; // 0x2A8
		::MX::Logic::BattleEntities::ProjectileBoundCharacter* projectileBoundCharacter; // 0x2B0
		CharacterBoundProjectileMovementComponent* movementData; // 0x2B8
		::UnityEngine::GameObject* tempTarget; // 0x2C0
		::System::Boolean isExpired; // 0x2C8

		::System::Void CreateEntities(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_CREATEENTITIES_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Visual::Battles::BattleActorComponent*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ExpireVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_EXPIREVISUAL_OFFSET))(nullptr);
		}

		::System::Void ApplyActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_APPLYACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessArrived()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEVISUAL_PROCESSARRIVED_OFFSET))(nullptr);
		}

	};

