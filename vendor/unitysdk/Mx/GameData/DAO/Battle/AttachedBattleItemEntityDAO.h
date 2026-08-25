#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AttachedBattleItemEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1790D40)
#define MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1792760)
#define MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1792FC0)
#define MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1796800)
#define MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1796910)
#define MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1792770)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AttachedBattleItemEntityDAO_TypeDefinitionIndex = 15551;

	class AttachedBattleItemEntityDAO : public ::UnityEngine::Rendering::Universal::DebugValidationMode
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ATTACHEDBATTLEITEMENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

