#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::GameData::DAO::Battle { class LevelOneTimeAbilityDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BreathAreaEntityDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17179C0)
#define MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1719A40)
#define MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x171A2A0)
#define MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x171A3E0)
#define MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1719A50)
#define MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x171A470)
#define MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x171A580)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BreathAreaEntityDAO_TypeDefinitionIndex = 15491;

	class BreathAreaEntityDAO : public Il2CppObject
	{
	public:
		Il2CppObject* BarrierTransferAbilities; // 0x1A0
		::System::Int64 ExcludeRadius; // 0x1A8
		::System::Boolean RemoveWhenHit; // 0x1B0
		::MX::Logic::Skills::TargetEntityType* EntityType; // 0x1B4
		::System::Int32 NumberOfTargetsRequired; // 0x1B8
		::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO* ApplyAbilitiesToTargets; // 0x1C0
		::System::String* ParticleEffectName; // 0x1C8

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BREATHAREAENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

