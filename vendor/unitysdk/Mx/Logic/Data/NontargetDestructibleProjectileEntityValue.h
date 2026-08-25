#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class CharacterEntityValue; }
namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::GameData::DAO::Battle { class NontargetDestructibleProjectileEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class FixedFrameNontargetDestructibleProjectileEntityDAO; }

#define MX_LOGIC_DATA_NONTARGETDESTRUCTIBLEPROJECTILEENTITYVALUE_GET_CHARACTERENTITYFORSTAT_OFFSET UNITYSDK_OFFSET(0x1247590)
#define MX_LOGIC_DATA_NONTARGETDESTRUCTIBLEPROJECTILEENTITYVALUE_GET_DESTROYEDSPAWNENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x12475A0)
#define MX_LOGIC_DATA_NONTARGETDESTRUCTIBLEPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1246CD0)
#define MX_LOGIC_DATA_NONTARGETDESTRUCTIBLEPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12479D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NontargetDestructibleProjectileEntityValue_TypeDefinitionIndex = 13967;

	class NontargetDestructibleProjectileEntityValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::CharacterEntityValue* _CharacterEntityForStat_k__BackingField; // 0x210
		::MX::Logic::Data::SkillEntitySpawnerValue* _DestroyedSpawnEntityValue_k__BackingField; // 0x218

		::MX::Logic::Data::CharacterEntityValue* get_CharacterEntityForStat()
		{
			return ((::MX::Logic::Data::CharacterEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETDESTRUCTIBLEPROJECTILEENTITYVALUE_GET_CHARACTERENTITYFORSTAT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntitySpawnerValue* get_DestroyedSpawnEntityValue()
		{
			return ((::MX::Logic::Data::SkillEntitySpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETDESTRUCTIBLEPROJECTILEENTITYVALUE_GET_DESTROYEDSPAWNENTITYVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::NontargetDestructibleProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::NontargetDestructibleProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETDESTRUCTIBLEPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETDESTRUCTIBLEPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

