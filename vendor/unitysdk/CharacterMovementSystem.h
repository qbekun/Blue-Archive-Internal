#pragma once
#include "unitysdk.h"

class CharacterMovementComponent;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace UnityEngine { class Transform; }

#define CHARACTERMOVEMENTSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B5E50)
#define CHARACTERMOVEMENTSYSTEM_MOVECHARACTER_OFFSET UNITYSDK_OFFSET(0x10B5E60)
#define CHARACTERMOVEMENTSYSTEM_CHECKANDROTATE_OFFSET UNITYSDK_OFFSET(0x10B66F0)
#define CHARACTERMOVEMENTSYSTEM_ROTATECHARACTER_OFFSET UNITYSDK_OFFSET(0x10B6940)
#define CHARACTERMOVEMENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x10B5D70)

	inline static constexpr unsigned int CharacterMovementSystem_TypeDefinitionIndex = 925;

	class CharacterMovementSystem : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MoveCharacter(CharacterMovementComponent* arg)
		{
			((::System::Void(*)(CharacterMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTSYSTEM_MOVECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAndRotate(CharacterMovementComponent* arg)
		{
			((::System::Void(*)(CharacterMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTSYSTEM_CHECKANDROTATE_OFFSET))(arg, nullptr);
		}

		::System::Void RotateCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::Boolean arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Transform* arg4, ::UnityEngine::Transform* arg5, ::System::Single arg6, ::UnityEngine::Transform* arg7)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTSYSTEM_ROTATECHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void Update(CharacterMovementComponent* arg)
		{
			((::System::Void(*)(CharacterMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTSYSTEM_UPDATE_OFFSET))(arg, nullptr);
		}

	};

