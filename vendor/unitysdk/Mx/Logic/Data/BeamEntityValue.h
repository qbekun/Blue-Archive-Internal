#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::GameData::DAO::Battle { class BeamEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x12439F0)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1243A00)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_EXTINCTIONHEADRATE_OFFSET UNITYSDK_OFFSET(0x1243F50)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_EXTINCTIONTAILRATE_OFFSET UNITYSDK_OFFSET(0x1243F60)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_EXTINCTIONDURATION_OFFSET UNITYSDK_OFFSET(0x1243F70)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1243F80)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_FOLLOWTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1243F90)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1243FA0)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_APPLYABILITYTOHITTARGETMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1243FB0)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_KEEPINGDURATION_OFFSET UNITYSDK_OFFSET(0x1243FC0)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_SPLASHES_OFFSET UNITYSDK_OFFSET(0x1243FD0)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_TIMELINEABILITIES_OFFSET UNITYSDK_OFFSET(0x1243FE0)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_CHAINBEAMS_OFFSET UNITYSDK_OFFSET(0x1243FF0)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_PIERCING_OFFSET UNITYSDK_OFFSET(0x1244000)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_EXPANSIONDURATION_OFFSET UNITYSDK_OFFSET(0x1244010)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONPOSITIONRANDOMOFFSETRANGE_OFFSET UNITYSDK_OFFSET(0x1244020)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_FOLLOWSPAWNENTITY_OFFSET UNITYSDK_OFFSET(0x1244030)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_INTERVALABILITIES_OFFSET UNITYSDK_OFFSET(0x1244040)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_OBBWIDTH_OFFSET UNITYSDK_OFFSET(0x1244050)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x1244060)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_APPLYABILITYONLYTARGET_OFFSET UNITYSDK_OFFSET(0x12441C0)
#define MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONOFFSETDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x12441D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BeamEntityValue_TypeDefinitionIndex = 13952;

	class BeamEntityValue : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SpawnPositionTypes* _DestinationType_k__BackingField; // 0x160
		::UnityEngine::Vector2* _DestinationWorldPosition_k__BackingField; // 0x164
		::UnityEngine::Vector2* _DestinationPositionOffset_k__BackingField; // 0x16C
		::System::Int32 _DestinationPositionRandomOffsetRange_k__BackingField; // 0x174
		::MX::Logic::Skills::SpawnDirectionTypes* _DestinationOffsetDirectionType_k__BackingField; // 0x178
		::System::Single _ObbWidth_k__BackingField; // 0x17C
		::System::Int64 _ExpansionDuration_k__BackingField; // 0x180
		::System::Int64 _KeepingDuration_k__BackingField; // 0x188
		::System::Int64 _ExtinctionDuration_k__BackingField; // 0x190
		::System::Int64 _ExtinctionHeadRate_k__BackingField; // 0x198
		::System::Int64 _ExtinctionTailRate_k__BackingField; // 0x1A0
		::System::Boolean _Piercing_k__BackingField; // 0x1A8
		::System::Boolean _FollowSpawnEntity_k__BackingField; // 0x1A9
		::System::Boolean _FollowTargetEntity_k__BackingField; // 0x1AA
		::System::Boolean _ApplyAbilityOnlyTarget_k__BackingField; // 0x1AB
		::System::Int32 _ApplyAbilityToHitTargetMaxCount_k__BackingField; // 0x1AC
		Il2CppObject* _IntervalAbilities_k__BackingField; // 0x1B0
		Il2CppObject* _TimelineAbilities_k__BackingField; // 0x1B8
		Il2CppObject* _Splashes_k__BackingField; // 0x1C0
		Il2CppObject* _ChainBeams_k__BackingField; // 0x1C8
		::System::Boolean RemoveEntityIfSkillCancel; // 0x1D0

		::UnityEngine::Vector2* get_DestinationPositionOffset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONPOSITIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BeamEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BeamEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 get_ExtinctionHeadRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_EXTINCTIONHEADRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_ExtinctionTailRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_EXTINCTIONTAILRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_ExtinctionDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_EXTINCTIONDURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_DestinationWorldPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONWORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_FollowTargetEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_FOLLOWTARGETENTITY_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnPositionTypes* get_DestinationType()
		{
			return ((::MX::Logic::Skills::SpawnPositionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_ApplyAbilityToHitTargetMaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_APPLYABILITYTOHITTARGETMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_KeepingDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_KEEPINGDURATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_Splashes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_SPLASHES_OFFSET))(nullptr);
		}

		Il2CppObject* get_TimelineAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_TIMELINEABILITIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_ChainBeams()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_CHAINBEAMS_OFFSET))(nullptr);
		}

		::System::Boolean get_Piercing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_PIERCING_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpansionDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_EXPANSIONDURATION_OFFSET))(nullptr);
		}

		::System::Int32 get_DestinationPositionRandomOffsetRange()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONPOSITIONRANDOMOFFSETRANGE_OFFSET))(nullptr);
		}

		::System::Boolean get_FollowSpawnEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_FOLLOWSPAWNENTITY_OFFSET))(nullptr);
		}

		Il2CppObject* get_IntervalAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_INTERVALABILITIES_OFFSET))(nullptr);
		}

		::System::Single get_ObbWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_OBBWIDTH_OFFSET))(nullptr);
		}

		::System::Void SetDamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyAbilityOnlyTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_APPLYABILITYONLYTARGET_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_DestinationOffsetDirectionType()
		{
			return ((::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMENTITYVALUE_GET_DESTINATIONOFFSETDIRECTIONTYPE_OFFSET))(nullptr);
		}

	};
}

