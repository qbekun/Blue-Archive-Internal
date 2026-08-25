#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace UnityEngine { class Transform; }
class CharacterMovementComponent;

#define TSSMOVEMENTSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D1E40)
#define TSSMOVEMENTSYSTEM_ROTATECHARACTER_OFFSET UNITYSDK_OFFSET(0x13D1E50)
#define TSSMOVEMENTSYSTEM_CHECKANDROTATE_OFFSET UNITYSDK_OFFSET(0x13D1FF0)

	inline static constexpr unsigned int TSSMovementSystem_TypeDefinitionIndex = 1074;

	class TSSMovementSystem : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSMOVEMENTSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RotateCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::Boolean arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Transform* arg4, ::UnityEngine::Transform* arg5, ::System::Single arg6, ::UnityEngine::Transform* arg7)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TSSMOVEMENTSYSTEM_ROTATECHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void CheckAndRotate(CharacterMovementComponent* arg)
		{
			((::System::Void(*)(CharacterMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + TSSMOVEMENTSYSTEM_CHECKANDROTATE_OFFSET))(arg, nullptr);
		}

	};

