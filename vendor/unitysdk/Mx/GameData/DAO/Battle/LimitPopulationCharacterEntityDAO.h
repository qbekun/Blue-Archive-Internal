#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class OverLimitBehavior; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class LimitPopulationCharacterEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }

#define MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_SHOULDSERIALIZEOVERLIMITABILITY_OFFSET UNITYSDK_OFFSET(0x17A2770)
#define MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17A27B0)
#define MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17A28C0)
#define MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17A3150)
#define MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17A3160)
#define MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17A7780)
#define MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17A9900)
#define MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x17A9A10)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int LimitPopulationCharacterEntityDAO_TypeDefinitionIndex = 15557;

	class LimitPopulationCharacterEntityDAO : public Il2CppObject
	{
	public:
		::System::Int32 LimitPopulation; // 0x1B8
		::System::String* PopulationGroupId; // 0x1C0
		::MX::Logic::Data::OverLimitBehavior* OverLimitRule; // 0x1C8
		Il2CppObject* OverLimitAbility; // 0x1D0
		::MX::Logic::Skills::TargetSortRule* OverLimitTarget; // 0x1D8

		::System::Boolean ShouldSerializeOverLimitAbility()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_SHOULDSERIALIZEOVERLIMITABILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LIMITPOPULATIONCHARACTERENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

	};
}

