#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillApplyType; }
namespace MX::Logic::Data { class TransformDecideTiming; }
namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }

#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_DECIDETIMING_OFFSET UNITYSDK_OFFSET(0x124B870)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_OFFSETDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x124B880)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_DAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x124B890)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_USEPRIMARYTARGETINGRULE_OFFSET UNITYSDK_OFFSET(0x124B8A0)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_APPLYTYPE_OFFSET UNITYSDK_OFFSET(0x124B8B0)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x124B8C0)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_SET_TARGETCONTAINERINDEX_OFFSET UNITYSDK_OFFSET(0x124B8D0)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_CHECKSPAWNPOSITIONMOVABLE_OFFSET UNITYSDK_OFFSET(0x124B8E0)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1241010)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x124B8F0)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x124B900)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x1241A40)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_LOGICNAME_OFFSET UNITYSDK_OFFSET(0x124B910)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_SET_DAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x124B920)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_ENTITYSPAWNINCLUDEOUTOFRANGEINPUTTARGET_OFFSET UNITYSDK_OFFSET(0x124B930)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_POSITIONRANDOMOFFSETRANGE_OFFSET UNITYSDK_OFFSET(0x124B940)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GETBARRIERTRANSFERABILITIES_OFFSET UNITYSDK_OFFSET(0x124B950)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_TARGETCONTAINERINDEX_OFFSET UNITYSDK_OFFSET(0x124B9F0)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x124BA00)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_TARGETCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x124BA10)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x124BA40)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNRATE_OFFSET UNITYSDK_OFFSET(0x124BA50)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNDELAY_OFFSET UNITYSDK_OFFSET(0x124BA60)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_GET_TARGETSORTRULE_OFFSET UNITYSDK_OFFSET(0x124BA70)
#define MX_LOGIC_DATA_SKILLENTITYVALUE_SET_CHECKSPAWNPOSITIONMOVABLE_OFFSET UNITYSDK_OFFSET(0x124BA90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillEntityValue_TypeDefinitionIndex = 13978;

	class SkillEntityValue : public Il2CppObject
	{
	public:
		::System::String* _EntityName_k__BackingField; // 0x10
		::System::Int64 _SpawnRate_k__BackingField; // 0x18
		::System::Int64 _SpawnDelay_k__BackingField; // 0x20
		::System::String* _LogicName_k__BackingField; // 0x28
		::MX::Logic::Skills::SkillApplyType* _ApplyType_k__BackingField; // 0x30
		::MX::Logic::Data::TransformDecideTiming* _DecideTiming_k__BackingField; // 0x34
		::System::Boolean _EntitySpawnIncludeOutOfRangeInputTarget_k__BackingField; // 0x38
		::MX::Logic::Skills::SpawnPositionTypes* _SpawnPositionType_k__BackingField; // 0x3C
		::UnityEngine::Vector2* _SpawnWorldPosition_k__BackingField; // 0x40
		::UnityEngine::Vector2* _PositionOffset_k__BackingField; // 0x48
		::System::Int32 _PositionRandomOffsetRange_k__BackingField; // 0x50
		::MX::Logic::Skills::SpawnDirectionTypes* _OffsetDirectionType_k__BackingField; // 0x54
		::MX::Logic::Skills::SpawnDirectionTypes* _SpawnDirectionType_k__BackingField; // 0x58
		::MX::Logic::Skills::TargetSortRule* _TargetSortRule_k__BackingField; // 0x60
		::MX::Logic::Skills::TargetCandidateRule* _TargetCandidateRule_k__BackingField; // 0x88
		::System::Boolean _UsePrimaryTargetingRule_k__BackingField; // 0x148
		::System::Int64 _DamageDistributeRate_k__BackingField; // 0x150
		::System::Boolean _CheckSpawnPositionMovable_k__BackingField; // 0x158
		::System::Int32 _TargetContainerIndex_k__BackingField; // 0x15C

		::MX::Logic::Data::TransformDecideTiming* get_DecideTiming()
		{
			return ((::MX::Logic::Data::TransformDecideTiming*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_DECIDETIMING_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_OffsetDirectionType()
		{
			return ((::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_OFFSETDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DamageDistributeRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_DAMAGEDISTRIBUTERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_UsePrimaryTargetingRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_USEPRIMARYTARGETINGRULE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillApplyType* get_ApplyType()
		{
			return ((::MX::Logic::Skills::SkillApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_APPLYTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_SpawnWorldPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNWORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_TargetContainerIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_SET_TARGETCONTAINERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckSpawnPositionMovable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_CHECKSPAWNPOSITIONMOVABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillEntityDAO* arg, ::System::Int32 arg2, ::MX::Logic::Skills::TargetCandidateRule* arg3, ::MX::Logic::Skills::TargetSortRule* arg4)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntityDAO*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Skills::SpawnPositionTypes* get_SpawnPositionType()
		{
			return ((::MX::Logic::Skills::SpawnPositionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNPOSITIONTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_PositionOffset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_POSITIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void SetDamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_LogicName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_LOGICNAME_OFFSET))(nullptr);
		}

		::System::Void set_DamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_SET_DAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EntitySpawnIncludeOutOfRangeInputTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_ENTITYSPAWNINCLUDEOUTOFRANGEINPUTTARGET_OFFSET))(nullptr);
		}

		::System::Int32 get_PositionRandomOffsetRange()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_POSITIONRANDOMOFFSETRANGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBarrierTransferAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GETBARRIERTRANSFERABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetContainerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_TARGETCONTAINERINDEX_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_SpawnDirectionType()
		{
			return ((::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_TargetCandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_TARGETCANDIDATERULE_OFFSET))(nullptr);
		}

		::System::String* get_EntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_ENTITYNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_SpawnRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_SpawnDelay()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_SPAWNDELAY_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_TargetSortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_GET_TARGETSORTRULE_OFFSET))(nullptr);
		}

		::System::Void set_CheckSpawnPositionMovable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYVALUE_SET_CHECKSPAWNPOSITIONMOVABLE_OFFSET))(arg, nullptr);
		}

	};
}

