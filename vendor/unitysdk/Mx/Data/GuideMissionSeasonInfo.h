#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TargetGroup; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class GuideMissionTabType; }
namespace MX::Data::Excel { class GuideMissionSeasonExcel; }

#define MX_DATA_GUIDEMISSIONSEASONINFO_ISARCHIVEOPEN_OFFSET UNITYSDK_OFFSET(0x184E1E0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x184E280)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_REQUIREMENTPARCELINFO_OFFSET UNITYSDK_OFFSET(0x184E290)
#define MX_DATA_GUIDEMISSIONSEASONINFO_CANCOMPLETE_OFFSET UNITYSDK_OFFSET(0x184E2B0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x184E370)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x184E380)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_CLOSEBANNERAFTERCOMPLETION_OFFSET UNITYSDK_OFFSET(0x184E390)
#define MX_DATA_GUIDEMISSIONSEASONINFO_ISOPENED_OFFSET UNITYSDK_OFFSET(0x184E3A0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_REQUIREMENTPARCELIMAGE_OFFSET UNITYSDK_OFFSET(0x184E440)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_SPINECHARACTERID_OFFSET UNITYSDK_OFFSET(0x184E450)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_PERMANENTINFORMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x184E460)
#define MX_DATA_GUIDEMISSIONSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x184E470)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x184E830)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_BANNEROPENDATE_OFFSET UNITYSDK_OFFSET(0x184E840)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x184E850)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x184E860)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x184E870)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_BANNEROPENDATE_OFFSET UNITYSDK_OFFSET(0x184E880)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x184E890)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x184E8A0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_MAXIMUMLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x184E8B0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_TABTYPE_OFFSET UNITYSDK_OFFSET(0x184E8C0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x184E8D0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_PRESEASONID_OFFSET UNITYSDK_OFFSET(0x184E8E0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_REWARDIMAGE_OFFSET UNITYSDK_OFFSET(0x184E8F0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_MAXIMUMLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x184E900)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x184E910)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_REWARDIMAGE_OFFSET UNITYSDK_OFFSET(0x184E920)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_SPINECHARACTERID_OFFSET UNITYSDK_OFFSET(0x184E930)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x184E940)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x184E950)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_REQUIREMENTPARCELIMAGE_OFFSET UNITYSDK_OFFSET(0x184E960)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x184E970)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_CLOSEBANNERAFTERCOMPLETION_OFFSET UNITYSDK_OFFSET(0x184E980)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x184E990)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_REQUIREMENTPARCELINFO_OFFSET UNITYSDK_OFFSET(0x184E9A0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_PRESEASONID_OFFSET UNITYSDK_OFFSET(0x184E9B0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x184E9C0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_INFOMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x184E9D0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x184E9E0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_CLOSEBANNERDATE_OFFSET UNITYSDK_OFFSET(0x184E9F0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_LOBBYBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x184EAB0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x184EAC0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_LOBBYBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x184EAD0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x184EAE0)
#define MX_DATA_GUIDEMISSIONSEASONINFO_SET_INFOMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x184EAF0)

namespace MX::Data
{
	inline static constexpr unsigned int GuideMissionSeasonInfo_TypeDefinitionIndex = 15840;

	class GuideMissionSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::String* _PermanentInformationLocalizeCode_k__BackingField; // 0x18
		::System::String* _InfomationLocalizeCode_k__BackingField; // 0x20
		::FlatData::TargetGroup* _TargetGroup_k__BackingField; // 0x28
		::System::Boolean _Enabled_k__BackingField; // 0x2C
		::System::DateTime* _BannerOpenDate_k__BackingField; // 0x30
		::System::DateTime* _StartDate_k__BackingField; // 0x38
		::System::DateTime* _StartableEndDate_k__BackingField; // 0x40
		::System::DateTime* _EndDate_k__BackingField; // 0x48
		::System::Boolean _CloseBannerAfterCompletion_k__BackingField; // 0x50
		::System::Int64 _MaximumLoginCount_k__BackingField; // 0x58
		::System::Int64 _ExpiryDate_k__BackingField; // 0x60
		::System::Int64 _SpineCharacterId_k__BackingField; // 0x68
		::System::String* _RewardImage_k__BackingField; // 0x70
		::System::String* _RequirementParcelImage_k__BackingField; // 0x78
		::System::String* _LobbyBannerImage_k__BackingField; // 0x80
		::MX::GameLogic::Parcel::ParcelInfo* _RequirementParcelInfo_k__BackingField; // 0x88
		::FlatData::GuideMissionTabType* _TabType_k__BackingField; // 0x90
		::System::Boolean _IsPermanent_k__BackingField; // 0x94
		::System::Int64 _PreSeasonId_k__BackingField; // 0x98
		::System::Int64 _IconOrder_k__BackingField; // 0xA0

		::System::Boolean IsArchiveOpen(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_ISARCHIVEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_RequirementParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_REQUIREMENTPARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanComplete(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_CANCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ExpiryDate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_EXPIRYDATE_OFFSET))(nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_CloseBannerAfterCompletion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_CLOSEBANNERAFTERCOMPLETION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpened(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_ISOPENED_OFFSET))(arg, nullptr);
		}

		::System::String* get_RequirementParcelImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_REQUIREMENTPARCELIMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_SpineCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_SPINECHARACTERID_OFFSET))(nullptr);
		}

		::System::String* get_PermanentInformationLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_PERMANENTINFORMATIONLOCALIZECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::GuideMissionSeasonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GuideMissionSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_IconOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_ICONORDER_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BannerOpenDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_BANNEROPENDATE_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StartableEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_STARTABLEENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BannerOpenDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_BANNEROPENDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_IconOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_ICONORDER_OFFSET))(nullptr);
		}

		::System::Void set_MaximumLoginCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_MAXIMUMLOGINCOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::GuideMissionTabType* get_TabType()
		{
			return (return (::FlatData::GuideMissionTabType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_TABTYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsPermanent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_ISPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PreSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_PRESEASONID_OFFSET))(nullptr);
		}

		::System::String* get_RewardImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_REWARDIMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumLoginCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_MAXIMUMLOGINCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_REWARDIMAGE_OFFSET))(str, nullptr);
		}

		::System::Void set_SpineCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_SPINECHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_RequirementParcelImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_REQUIREMENTPARCELIMAGE_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_StartableEndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_STARTABLEENDDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CloseBannerAfterCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_CLOSEBANNERAFTERCOMPLETION_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RequirementParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_REQUIREMENTPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void set_PreSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_PRESEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveReward(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::System::String* get_InfomationLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_INFOMATIONLOCALIZECODE_OFFSET))(nullptr);
		}

		::System::Void set_TargetGroup(::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_TARGETGROUP_OFFSET))(arg, nullptr);
		}

		::System::DateTime* CloseBannerDate(::System::DateTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_CLOSEBANNERDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_LobbyBannerImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_LOBBYBANNERIMAGE_OFFSET))(str, nullptr);
		}

		::System::Void set_ExpiryDate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_EXPIRYDATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_LobbyBannerImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_LOBBYBANNERIMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPermanent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_GET_ISPERMANENT_OFFSET))(nullptr);
		}

		::System::Void set_InfomationLocalizeCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONSEASONINFO_SET_INFOMATIONLOCALIZECODE_OFFSET))(str, nullptr);
		}

	};
}

