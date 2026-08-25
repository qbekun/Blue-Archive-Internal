#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class ReviveCommand; }

#define MX_LOGIC_BATTLES_REVIVECOMMAND_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1274B60)
#define MX_LOGIC_BATTLES_REVIVECOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1274B70)
#define MX_LOGIC_BATTLES_REVIVECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1274BA0)
#define MX_LOGIC_BATTLES_REVIVECOMMAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1274BF0)
#define MX_LOGIC_BATTLES_REVIVECOMMAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1274CC0)
#define MX_LOGIC_BATTLES_REVIVECOMMAND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1274D50)
#define MX_LOGIC_BATTLES_REVIVECOMMAND_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1274E00)
#define MX_LOGIC_BATTLES_REVIVECOMMAND_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1274E90)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ReviveCommand_TypeDefinitionIndex = 14065;

	class ReviveCommand : public ::UnityEngine::AssetBundleRecompressOperation
	{
	public:
		::MX::Logic::BattleEntities::EntityId* targetId; // 0x20

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_REVIVECOMMAND_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_REVIVECOMMAND_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_REVIVECOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_REVIVECOMMAND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::ReviveCommand* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::ReviveCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_REVIVECOMMAND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_REVIVECOMMAND_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::ReviveCommand* arg, ::MX::Logic::Battles::ReviveCommand* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::ReviveCommand*, ::MX::Logic::Battles::ReviveCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_REVIVECOMMAND_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::ReviveCommand* arg, ::MX::Logic::Battles::ReviveCommand* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::ReviveCommand*, ::MX::Logic::Battles::ReviveCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_REVIVECOMMAND_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

