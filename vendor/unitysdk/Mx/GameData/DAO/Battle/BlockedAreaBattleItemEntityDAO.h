#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BlockedAreaBattleItemEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1796B00)
#define MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1796C10)
#define MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1797470)
#define MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1797580)
#define MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1796C20)
#define MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1798FE0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BlockedAreaBattleItemEntityDAO_TypeDefinitionIndex = 15553;

	class BlockedAreaBattleItemEntityDAO : public ::UnityEngine::Rendering::Universal::DebugValidationMode
	{
	public:
		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLOCKEDAREABATTLEITEMENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

