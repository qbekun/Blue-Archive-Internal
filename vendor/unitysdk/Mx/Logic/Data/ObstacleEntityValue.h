#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::GameData::DAO::Battle { class ObstacleEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_OBSTACLEENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x12499E0)
#define MX_LOGIC_DATA_OBSTACLEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1249A70)
#define MX_LOGIC_DATA_OBSTACLEENTITYVALUE_GET_INITIALABILITIES_OFFSET UNITYSDK_OFFSET(0x1249F70)
#define MX_LOGIC_DATA_OBSTACLEENTITYVALUE_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1249F80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ObstacleEntityValue_TypeDefinitionIndex = 13973;

	class ObstacleEntityValue : public Il2CppObject
	{
	public:
		::System::Int32 _SkillLevel_k__BackingField; // 0x190
		Il2CppObject* _InitialAbilities_k__BackingField; // 0x198
		::MX::Logic::Data::SkillEntitySpawnerValue* InitialSkillEntitySpawnerValue; // 0x1A0

		::System::Void SetDamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBSTACLEENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ObstacleEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ObstacleEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBSTACLEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* get_InitialAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBSTACLEENTITYVALUE_GET_INITIALABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBSTACLEENTITYVALUE_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

	};
}

