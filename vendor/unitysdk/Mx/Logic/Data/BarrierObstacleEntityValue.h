#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::Logic::Data { class BarrierShape; }
namespace FlatData { class EntityMaterialType; }
namespace FlatData { class ArmorType; }
namespace MX::GameData::DAO::Battle { class BarrierObstacleEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_GET_APPLYLOGICEFFECTTOTARGET_OFFSET UNITYSDK_OFFSET(0x1242C80)
#define MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x1242C90)
#define MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1242D90)
#define MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1243920)
#define MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_GET_INITIALABILITIES_OFFSET UNITYSDK_OFFSET(0x1243930)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BarrierObstacleEntityValue_TypeDefinitionIndex = 13944;

	class BarrierObstacleEntityValue : public Il2CppObject
	{
	public:
		::System::Int32 _SkillLevel_k__BackingField; // 0x190
		Il2CppObject* _InitialAbilities_k__BackingField; // 0x198
		::MX::Logic::Data::SkillEntitySpawnerValue* InitialSkillEntitySpawnerValue; // 0x1A0
		::MX::Logic::Data::BarrierShape* BarrierShape; // 0x1A8
		::Il2CppArray<::System::Object*>* ShapeParameters; // 0x1B0
		::FlatData::EntityMaterialType* MaterialType; // 0x1B8
		::FlatData::ArmorType* ArmorType; // 0x1BC
		::System::Boolean FixDirection; // 0x1C0
		Il2CppObject* _ApplyLogicEffectToTarget_k__BackingField; // 0x1C8

		Il2CppObject* get_ApplyLogicEffectToTarget()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_GET_APPLYLOGICEFFECTTOTARGET_OFFSET))(nullptr);
		}

		::System::Void SetDamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_InitialAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BARRIEROBSTACLEENTITYVALUE_GET_INITIALABILITIES_OFFSET))(nullptr);
		}

	};
}

