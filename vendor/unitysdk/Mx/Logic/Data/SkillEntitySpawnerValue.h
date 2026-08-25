#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnRule; }
namespace MX::Logic::Skills { class SkillToTargetDistributeType; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x124AE00)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124AE10)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_OVERRIDESKILLSTARTTIMINGWITHSPAWNERSPAWN_OFFSET UNITYSDK_OFFSET(0x124B6B0)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_ISREMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x124B6C0)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_DISTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x124B6D0)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_ENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x124B6E0)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_SPAWNRULE_OFFSET UNITYSDK_OFFSET(0x124B6F0)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x124B700)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_REMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x124B710)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_FIRETONEXTTARGETWHENEACHTOEACH_OFFSET UNITYSDK_OFFSET(0x124B720)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillEntitySpawnerValue_TypeDefinitionIndex = 13977;

	class SkillEntitySpawnerValue : public Il2CppObject
	{
	public:
		::System::Int32 _SkillLevel_k__BackingField; // 0x160
		::System::Int32 _Duration_k__BackingField; // 0x164
		::MX::Logic::Skills::EntitySpawnRule* _SpawnRule_k__BackingField; // 0x168
		::System::Boolean _RemoveEntityIfSkillCancel_k__BackingField; // 0x16C
		::System::Boolean _OverrideSkillStartTimingWithSpawnerSpawn_k__BackingField; // 0x16D
		::System::Boolean _FireToNextTargetWhenEachToEach_k__BackingField; // 0x16E
		::MX::Logic::Skills::SkillToTargetDistributeType* _DistributeType_k__BackingField; // 0x170
		Il2CppObject* _EntityTimeline_k__BackingField; // 0x178

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean get_OverrideSkillStartTimingWithSpawnerSpawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_OVERRIDESKILLSTARTTIMINGWITHSPAWNERSPAWN_OFFSET))(nullptr);
		}

		::System::Boolean IsRemoveEntityIfSkillCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_ISREMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillToTargetDistributeType* get_DistributeType()
		{
			return ((::MX::Logic::Skills::SkillToTargetDistributeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_DISTRIBUTETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_EntityTimeline()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_ENTITYTIMELINE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::EntitySpawnRule* get_SpawnRule()
		{
			return ((::MX::Logic::Skills::EntitySpawnRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_SPAWNRULE_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_RemoveEntityIfSkillCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_REMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_FireToNextTargetWhenEachToEach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERVALUE_GET_FIRETONEXTTARGETWHENEACHTOEACH_OFFSET))(nullptr);
		}

	};
}

