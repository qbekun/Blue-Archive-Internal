#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillAbilityDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AbilityDAOWithOrder&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_ABILITYDAOWITHORDER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1790730)
#define MX_GAMEDATA_DAO_BATTLE_ABILITYDAOWITHORDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1790930)
#define MX_GAMEDATA_DAO_BATTLE_ABILITYDAOWITHORDER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1790940)
#define MX_GAMEDATA_DAO_BATTLE_ABILITYDAOWITHORDER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17909B0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AbilityDAOWithOrder_TypeDefinitionIndex = 15549;

	class AbilityDAOWithOrder : public Il2CppObject
	{
	public:
		::System::Int32 OrderNumber; // 0x10
		::MX::GameData::DAO::Battle::SkillAbilityDAO* Ability; // 0x18

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ABILITYDAOWITHORDER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ABILITYDAOWITHORDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AbilityDAOWithOrder&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AbilityDAOWithOrder&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ABILITYDAOWITHORDER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AbilityDAOWithOrder&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AbilityDAOWithOrder&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ABILITYDAOWITHORDER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

