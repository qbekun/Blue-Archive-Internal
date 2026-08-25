#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class SkillCardHand; }
namespace UnityEngine { class Vector3; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Data::Excel { class CampaignUnitExcel; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexaTileMap; }

#define MX_CAMPAIGN_HEXAUNIT_GET_BUFFGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1438A10)
#define MX_CAMPAIGN_HEXAUNIT_GET_SKILLCARDHAND_OFFSET UNITYSDK_OFFSET(0x1438D50)
#define MX_CAMPAIGN_HEXAUNIT_SET_SKILLCARDHAND_OFFSET UNITYSDK_OFFSET(0x1438D60)
#define MX_CAMPAIGN_HEXAUNIT_GET_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1438D70)
#define MX_CAMPAIGN_HEXAUNIT_SET_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1438D80)
#define MX_CAMPAIGN_HEXAUNIT_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1438D90)
#define MX_CAMPAIGN_HEXAUNIT_GETREWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1438FA0)
#define MX_CAMPAIGN_HEXAUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1439190)
#define MX_CAMPAIGN_HEXAUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14391A0)
#define MX_CAMPAIGN_HEXAUNIT_INITEXCEL_OFFSET UNITYSDK_OFFSET(0x1439210)
#define MX_CAMPAIGN_HEXAUNIT_BUILDMOVEMENTMAP_OFFSET UNITYSDK_OFFSET(0x14392F0)
#define MX_CAMPAIGN_HEXAUNIT_BUILDMOVEMENTMAPWITHOUTRANGE_OFFSET UNITYSDK_OFFSET(0x1439360)
#define MX_CAMPAIGN_HEXAUNIT_MOVE_OFFSET UNITYSDK_OFFSET(0x14393D0)
#define MX_CAMPAIGN_HEXAUNIT_REFRESHHEXAUNITPROPERTY_OFFSET UNITYSDK_OFFSET(0x14394B0)
#define MX_CAMPAIGN_HEXAUNIT_CLEARMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1439D30)
#define MX_CAMPAIGN_HEXAUNIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1439DE0)

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaUnit_TypeDefinitionIndex = 14898;

	class HexaUnit : public Il2CppObject
	{
	public:
		::System::Int64 EntityId; // 0x10
		Il2CppObject* HpInfos; // 0x18
		Il2CppObject* DyingInfos; // 0x20
		Il2CppObject* BuffInfos; // 0x28
		::MX::Campaign::SkillCardHand* _SkillCardHand_k__BackingField; // 0x30
		::System::Int32 ActionCountMax; // 0x38
		::System::Int32 ActionCount; // 0x3C
		::System::Int32 Mobility; // 0x40
		::System::Int32 StrategySightRange; // 0x44
		::System::Int64 Id; // 0x48
		::UnityEngine::Vector3* Rotate; // 0x50
		::MX::Campaign::HexLocation* Location; // 0x5C
		::MX::Campaign::HexLocation* AIDestination; // 0x68
		::System::Boolean IsActionComplete; // 0x74
		::System::Boolean IsPlayer; // 0x75
		::System::Boolean IsFixedEchelon; // 0x76
		::System::Int32 MovementOrder; // 0x78
		::System::Boolean _PlayAnimation_k__BackingField; // 0x7C
		Il2CppObject* RewardParcelInfosWithDropTacticEntityType; // 0x80
		::MX::Data::Excel::CampaignUnitExcel* CampaignUnitExcel; // 0x88
		Il2CppObject* MovableTiles; // 0x98
		Il2CppObject* MovementMap; // 0xA0

		Il2CppObject* get_BuffGroupIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_GET_BUFFGROUPIDS_OFFSET))(nullptr);
		}

		::MX::Campaign::SkillCardHand* get_SkillCardHand()
		{
			return ((::MX::Campaign::SkillCardHand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_GET_SKILLCARDHAND_OFFSET))(nullptr);
		}

		::System::Void set_SkillCardHand(::MX::Campaign::SkillCardHand* arg)
		{
			((::System::Void(*)(::MX::Campaign::SkillCardHand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_SET_SKILLCARDHAND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PlayAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_GET_PLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void set_PlayAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_SET_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_GET_REWARDITEMS_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_GETREWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitExcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_INITEXCEL_OFFSET))(nullptr);
		}

		::System::Void BuildMovementMap(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_BUILDMOVEMENTMAP_OFFSET))(arg, nullptr);
		}

		::System::Void BuildMovementMapWithoutRange(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_BUILDMOVEMENTMAPWITHOUTRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void Move(::MX::Campaign::HexaTileMap* arg, ::MX::Campaign::HexLocation* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_MOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshHexaUnitProperty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_REFRESHHEXAUNITPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Void ClearMovement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_CLEARMOVEMENT_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaUnit* Clone()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXAUNIT_CLONE_OFFSET))(nullptr);
		}

	};
}

