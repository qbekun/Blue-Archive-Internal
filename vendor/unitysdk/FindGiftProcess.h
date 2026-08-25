#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class KillEventArgs; }

#define FINDGIFTPROCESS_ONCHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x12D9680)
#define FINDGIFTPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D80C0)
#define FINDGIFTPROCESS_GET_ISTIMEOVER_OFFSET UNITYSDK_OFFSET(0x12D9740)
#define FINDGIFTPROCESS_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x12D9750)
#define FINDGIFTPROCESS_UPDATE_OFFSET UNITYSDK_OFFSET(0x12D9760)
#define FINDGIFTPROCESS_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x12D97B0)
#define FINDGIFTPROCESS_ENDPROCESS_OFFSET UNITYSDK_OFFSET(0x12D7EA0)

	inline static constexpr unsigned int FindGiftProcess_TypeDefinitionIndex = 14163;

	class FindGiftProcess : public Il2CppObject
	{
	public:
		::System::Double TimeLimitMilliSeconds; // 0x10
		::System::Action* ClearAction; // 0x18
		::System::Action* TimeOutAction; // 0x20
		Il2CppObject* CharacterDieAction; // 0x28
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _Character_k__BackingField; // 0x30
		::MX::Logic::Battles::Battle* battle; // 0x38

		::System::Void OnCharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + FINDGIFTPROCESS_ONCHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FINDGIFTPROCESS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsTimeOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FINDGIFTPROCESS_GET_ISTIMEOVER_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + FINDGIFTPROCESS_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + FINDGIFTPROCESS_UPDATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_Character()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + FINDGIFTPROCESS_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void EndProcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINDGIFTPROCESS_ENDPROCESS_OFFSET))(nullptr);
		}

	};

