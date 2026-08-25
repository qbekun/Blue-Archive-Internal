#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AreaSpawnerDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BattleItemEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x178A910)
#define MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x178B170)
#define MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x178B220)
#define MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x178B230)
#define MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x178EB20)
#define MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1790540)
#define MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x178A920)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BattleItemEntityDAO_TypeDefinitionIndex = 15547;

	class BattleItemEntityDAO : public Il2CppObject
	{
	public:
		::System::Int64 RecognitionRadius; // 0x188
		::System::Int64 EffectRadius; // 0x190
		::System::Int32 TargetCount; // 0x198
		::System::Int32 ActiveDelayInFrame; // 0x19C
		Il2CppObject* LogicEffectGroupIds; // 0x1A0
		Il2CppObject* Abilities; // 0x1A8
		Il2CppObject* AbilitiesInOrderOfInteraction; // 0x1B0
		::MX::GameData::DAO::Battle::AreaSpawnerDAO* InEffectRadiusAreaSpawnerEntity; // 0x1B8
		::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO* InEffectRadiusSkillEntitySpawnerEntity; // 0x1C0
		::System::Boolean ApplyMovingAreaBeforeActivation; // 0x1C8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BATTLEITEMENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

