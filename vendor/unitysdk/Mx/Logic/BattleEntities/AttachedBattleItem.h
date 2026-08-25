#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class BattleItemEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Battles { class GroupTag; }

#define MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_SETFORCEMOVECOMMANDINFO_OFFSET UNITYSDK_OFFSET(0x112F6A0)
#define MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x112F960)
#define MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_PROCESSEXPIRED_OFFSET UNITYSDK_OFFSET(0x112FA50)
#define MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x112FD90)
#define MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_BATTLE_CHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x112FEA0)
#define MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x112FF40)
#define MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1130600)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int AttachedBattleItem_TypeDefinitionIndex = 13063;

	class AttachedBattleItem : public ::Unity::ThrowStub
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* attachTarget; // 0x198

		::System::Void SetForceMoveCommandInfo(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_SETFORCEMOVECOMMANDINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdatePosition(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_UPDATEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessExpired(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_PROCESSEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_CharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_BATTLE_CHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::EntityId* arg4, ::MX::Logic::Data::BattleItemEntityValue* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::MX::Logic::Battles::GroupTag* arg7, ::System::Int32 arg8, ::System::Int32 arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BattleItemEntityValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Battles::GroupTag*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ATTACHEDBATTLEITEM_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

	};
}

