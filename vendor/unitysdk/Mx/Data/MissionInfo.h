#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MissionCategory; }
namespace FlatData { class MissionResetType; }
namespace FlatData { class MissionToastDisplayConditionType; }
namespace FlatData { class TargetGroup; }
namespace FlatData { class MissionCompleteConditionType; }
namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class MissionExcel; }
namespace MX::Data { class MissionInfo; }
namespace MX::Data { class MissionInfo&; }

#define MX_DATA_MISSIONINFO_CANCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18543B0)
#define MX_DATA_MISSIONINFO_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x1854440)
#define MX_DATA_MISSIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1854460)
#define MX_DATA_MISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x184D350)
#define MX_DATA_MISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18546C0)
#define MX_DATA_MISSIONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1855390)
#define MX_DATA_MISSIONINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x18553A0)
#define MX_DATA_MISSIONINFO_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x18553B0)
#define MX_DATA_MISSIONINFO_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x18553C0)
#define MX_DATA_MISSIONINFO_GET_RESETTYPE_OFFSET UNITYSDK_OFFSET(0x18553D0)
#define MX_DATA_MISSIONINFO_SET_RESETTYPE_OFFSET UNITYSDK_OFFSET(0x18553E0)
#define MX_DATA_MISSIONINFO_GET_TOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x18553F0)
#define MX_DATA_MISSIONINFO_SET_TOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1855400)
#define MX_DATA_MISSIONINFO_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1855410)
#define MX_DATA_MISSIONINFO_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1855420)
#define MX_DATA_MISSIONINFO_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1855430)
#define MX_DATA_MISSIONINFO_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1855440)
#define MX_DATA_MISSIONINFO_GET_ISLIMITED_OFFSET UNITYSDK_OFFSET(0x1855450)
#define MX_DATA_MISSIONINFO_SET_ISLIMITED_OFFSET UNITYSDK_OFFSET(0x1855460)
#define MX_DATA_MISSIONINFO_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1855470)
#define MX_DATA_MISSIONINFO_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1855480)
#define MX_DATA_MISSIONINFO_GET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1855490)
#define MX_DATA_MISSIONINFO_SET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x18554A0)
#define MX_DATA_MISSIONINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x18554B0)
#define MX_DATA_MISSIONINFO_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x18554C0)
#define MX_DATA_MISSIONINFO_GET_ENDDDAY_OFFSET UNITYSDK_OFFSET(0x18554D0)
#define MX_DATA_MISSIONINFO_SET_ENDDDAY_OFFSET UNITYSDK_OFFSET(0x18554E0)
#define MX_DATA_MISSIONINFO_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x18554F0)
#define MX_DATA_MISSIONINFO_SET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1855500)
#define MX_DATA_MISSIONINFO_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1855510)
#define MX_DATA_MISSIONINFO_SET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1855520)
#define MX_DATA_MISSIONINFO_GET_PREMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1855530)
#define MX_DATA_MISSIONINFO_SET_PREMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1855540)
#define MX_DATA_MISSIONINFO_GET_NEXTMISSIONID_OFFSET UNITYSDK_OFFSET(0x1855550)
#define MX_DATA_MISSIONINFO_SET_NEXTMISSIONID_OFFSET UNITYSDK_OFFSET(0x1855560)
#define MX_DATA_MISSIONINFO_GET_SUDDENMISSIONCONTENTTYPES_OFFSET UNITYSDK_OFFSET(0x1855570)
#define MX_DATA_MISSIONINFO_SET_SUDDENMISSIONCONTENTTYPES_OFFSET UNITYSDK_OFFSET(0x1855580)
#define MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1855590)
#define MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x18555A0)
#define MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x18555B0)
#define MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x18555C0)
#define MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18555D0)
#define MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18555E0)
#define MX_DATA_MISSIONINFO_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1855600)
#define MX_DATA_MISSIONINFO_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x1855610)
#define MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1855630)
#define MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1855640)
#define MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1855660)
#define MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1855670)
#define MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONREWARDS_OFFSET UNITYSDK_OFFSET(0x1855680)
#define MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONREWARDS_OFFSET UNITYSDK_OFFSET(0x1855690)
#define MX_DATA_MISSIONINFO_GET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x18556B0)
#define MX_DATA_MISSIONINFO_SET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x18556C0)
#define MX_DATA_MISSIONINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x18556E0)
#define MX_DATA_MISSIONINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x18556F0)
#define MX_DATA_MISSIONINFO_GET_DATEAUTOREFER_OFFSET UNITYSDK_OFFSET(0x1855710)
#define MX_DATA_MISSIONINFO_SET_DATEAUTOREFER_OFFSET UNITYSDK_OFFSET(0x1855720)
#define MX_DATA_MISSIONINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1855730)
#define MX_DATA_MISSIONINFO_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1855CB0)
#define MX_DATA_MISSIONINFO_TRYRESOLVE_OFFSET UNITYSDK_OFFSET(0x1855CE0)
#define MX_DATA_MISSIONINFO_TRYRESOLVERAIDMISSION_OFFSET UNITYSDK_OFFSET(0x1855E00)
#define MX_DATA_MISSIONINFO_TRYRESOLVETIMEATTACKDUNGEONMISSION_OFFSET UNITYSDK_OFFSET(0x1855FD0)
#define MX_DATA_MISSIONINFO_TRYRESOLVEMULTIFLOORRAIDMISSION_OFFSET UNITYSDK_OFFSET(0x1856180)
#define MX_DATA_MISSIONINFO_GET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1856510)
#define MX_DATA_MISSIONINFO_SET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1856520)
#define MX_DATA_MISSIONINFO_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1856540)
#define MX_DATA_MISSIONINFO_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1856550)
#define MX_DATA_MISSIONINFO_GET_HASFOLLOWINGMISSION_OFFSET UNITYSDK_OFFSET(0x1856560)
#define MX_DATA_MISSIONINFO_SET_HASFOLLOWINGMISSION_OFFSET UNITYSDK_OFFSET(0x1856570)
#define MX_DATA_MISSIONINFO_GET_SHORTCUTS_OFFSET UNITYSDK_OFFSET(0x1856580)
#define MX_DATA_MISSIONINFO_SET_SHORTCUTS_OFFSET UNITYSDK_OFFSET(0x1856590)
#define MX_DATA_MISSIONINFO_GET_CHALLENGESTAGEID_OFFSET UNITYSDK_OFFSET(0x18565B0)
#define MX_DATA_MISSIONINFO_SET_CHALLENGESTAGEID_OFFSET UNITYSDK_OFFSET(0x18565C0)
#define MX_DATA_MISSIONINFO_GET_ISCOMPLETEEXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x18565D0)
#define MX_DATA_MISSIONINFO_SET_ISCOMPLETEEXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x18565E0)

namespace MX::Data
{
	inline static constexpr unsigned int MissionInfo_TypeDefinitionIndex = 15867;

	class MissionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::FlatData::MissionCategory* _Category_k__BackingField; // 0x18
		::FlatData::MissionResetType* _ResetType_k__BackingField; // 0x1C
		::FlatData::MissionToastDisplayConditionType* _ToastDisplayType_k__BackingField; // 0x20
		::System::UInt32 _Description_k__BackingField; // 0x24
		::System::Boolean _IsVisible_k__BackingField; // 0x28
		::System::Boolean _IsLimited_k__BackingField; // 0x29
		::System::DateTime* _StartDate_k__BackingField; // 0x30
		::System::DateTime* _StartableEndDate_k__BackingField; // 0x38
		::System::DateTime* _EndDate_k__BackingField; // 0x40
		::System::Int64 _EndDday_k__BackingField; // 0x48
		::FlatData::TargetGroup* _TargetGroup_k__BackingField; // 0x50
		::System::Int64 _AccountLevel_k__BackingField; // 0x58
		Il2CppObject* _PreMissionIds_k__BackingField; // 0x60
		::System::Int64 _NextMissionId_k__BackingField; // 0x68
		::Il2CppArray<::System::Object*>* _SuddenMissionContentTypes_k__BackingField; // 0x70
		::FlatData::MissionCompleteConditionType* _CompleteConditionType_k__BackingField; // 0x78
		::System::Int64 _CompleteConditionCount_k__BackingField; // 0x80
		Il2CppObject* _CompleteConditionParameters_k__BackingField; // 0x88
		Il2CppObject* _Tags_k__BackingField; // 0x90
		Il2CppObject* _CompleteConditionMissionIds_k__BackingField; // 0x98
		::System::Int64 _CompleteConditionMissionCount_k__BackingField; // 0xA0
		Il2CppObject* _CompleteConditionRewards_k__BackingField; // 0xA8
		::System::String* _RewardIcon_k__BackingField; // 0xB0
		Il2CppObject* _Rewards_k__BackingField; // 0xB8
		::FlatData::ContentType* _DateAutoRefer_k__BackingField; // 0xC0
		::System::String* _ToastImagePath_k__BackingField; // 0xC8
		::System::Int64 _DisplayOrder_k__BackingField; // 0xD0
		::System::Boolean _HasFollowingMission_k__BackingField; // 0xD8
		::Il2CppArray<::System::Object*>* _Shortcuts_k__BackingField; // 0xE0
		::System::Int64 _ChallengeStageId_k__BackingField; // 0xE8
		::System::Boolean _IsCompleteExtensionTime_k__BackingField; // 0xF0

		::System::Boolean CanComplete(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_CANCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveReward(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MissionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MissionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::FlatData::MissionCategory* get_Category()
		{
			return (return (::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_Category(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::FlatData::MissionResetType* get_ResetType()
		{
			return (return (::FlatData::MissionResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_RESETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ResetType(::FlatData::MissionResetType* arg)
		{
			((::System::Void(*)(::FlatData::MissionResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_RESETTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::MissionToastDisplayConditionType* get_ToastDisplayType()
		{
			return (return (::FlatData::MissionToastDisplayConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_TOASTDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ToastDisplayType(::FlatData::MissionToastDisplayConditionType* arg)
		{
			((::System::Void(*)(::FlatData::MissionToastDisplayConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_TOASTDISPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Description()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_Description(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_DESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_IsVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLimited()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_ISLIMITED_OFFSET))(nullptr);
		}

		::System::Void set_IsLimited(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_ISLIMITED_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartableEndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_STARTABLEENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_StartableEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_STARTABLEENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EndDday()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_ENDDDAY_OFFSET))(nullptr);
		}

		::System::Void set_EndDday(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_ENDDDAY_OFFSET))(arg, nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Void set_TargetGroup(::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_TARGETGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_AccountLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_ACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PreMissionIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_PREMISSIONIDS_OFFSET))(nullptr);
		}

		::System::Void set_PreMissionIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_PREMISSIONIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NextMissionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_NEXTMISSIONID_OFFSET))(nullptr);
		}

		::System::Void set_NextMissionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_NEXTMISSIONID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SuddenMissionContentTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_SUDDENMISSIONCONTENTTYPES_OFFSET))(nullptr);
		}

		::System::Void set_SuddenMissionContentTypes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_SUDDENMISSIONCONTENTTYPES_OFFSET))(arg, nullptr);
		}

		::FlatData::MissionCompleteConditionType* get_CompleteConditionType()
		{
			return (return (::FlatData::MissionCompleteConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CompleteConditionType(::FlatData::MissionCompleteConditionType* arg)
		{
			((::System::Void(*)(::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CompleteConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CompleteConditionCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CompleteConditionParameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_CompleteConditionParameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONPARAMETERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_TAGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CompleteConditionMissionIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONMISSIONIDS_OFFSET))(nullptr);
		}

		::System::Void set_CompleteConditionMissionIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONMISSIONIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CompleteConditionMissionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONMISSIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CompleteConditionMissionCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONMISSIONCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CompleteConditionRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_COMPLETECONDITIONREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_CompleteConditionRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_COMPLETECONDITIONREWARDS_OFFSET))(arg, nullptr);
		}

		::System::String* get_RewardIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_REWARDICON_OFFSET))(nullptr);
		}

		::System::Void set_RewardIcon(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_REWARDICON_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_DateAutoRefer()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_DATEAUTOREFER_OFFSET))(nullptr);
		}

		::System::Void set_DateAutoRefer(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_DATEAUTOREFER_OFFSET))(arg, nullptr);
		}

		::MX::Data::MissionInfo* Clone()
		{
			return (return (::MX::Data::MissionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_CLONE_OFFSET))(nullptr);
		}

		::MX::Data::MissionInfo* Resolve(::System::DateTime* arg)
		{
			return (return (::MX::Data::MissionInfo*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_RESOLVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryResolve(::System::DateTime* arg, ::MX::Data::MissionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::MX::Data::MissionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_TRYRESOLVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryResolveRaidMission(::FlatData::ContentType* arg, ::System::DateTime* arg, ::MX::Data::MissionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::DateTime*, ::MX::Data::MissionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_TRYRESOLVERAIDMISSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryResolveTimeAttackDungeonMission(::System::DateTime* arg, ::MX::Data::MissionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::MX::Data::MissionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_TRYRESOLVETIMEATTACKDUNGEONMISSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryResolveMultiFloorRaidMission(::System::DateTime* arg, ::MX::Data::MissionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::MX::Data::MissionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_TRYRESOLVEMULTIFLOORRAIDMISSION_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_ToastImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_TOASTIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_ToastImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_TOASTIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasFollowingMission()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_HASFOLLOWINGMISSION_OFFSET))(nullptr);
		}

		::System::Void set_HasFollowingMission(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_HASFOLLOWINGMISSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Shortcuts()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_SHORTCUTS_OFFSET))(nullptr);
		}

		::System::Void set_Shortcuts(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_SHORTCUTS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ChallengeStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_CHALLENGESTAGEID_OFFSET))(nullptr);
		}

		::System::Void set_ChallengeStageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_CHALLENGESTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleteExtensionTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_GET_ISCOMPLETEEXTENSIONTIME_OFFSET))(nullptr);
		}

		::System::Void set_IsCompleteExtensionTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONINFO_SET_ISCOMPLETEEXTENSIONTIME_OFFSET))(arg, nullptr);
		}

	};
}

