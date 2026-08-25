#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class WelcomeCampaignSeasonInfo; }
namespace FlatData { class MissionCompleteUIPrefabType; }
namespace MX::Data { class WelcomeCampaignAttendanceRewardInfo; }
namespace MX::Data { class WelcomeCampaignEnterRewardInfo; }
namespace MX::Data { class WelcomeCampaignMissionInfo; }
namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::Data { class WelcomeCampaignRewardIncreaseInfo; }
namespace FlatData { class TargetGroup; }

#define MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNSEASONINFO_OFFSET UNITYSDK_OFFSET(0x196BB60)
#define MX_DATA_WELCOMECAMPAIGNDATA_GET_MISSIONINFOBYWELCOMECAMPAIGNSEASONID_OFFSET UNITYSDK_OFFSET(0x196BBB0)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETMISSIONINFOBYMISSIONCOMPLETEUIPREFABTYPE_OFFSET UNITYSDK_OFFSET(0x196BBC0)
#define MX_DATA_WELCOMECAMPAIGNDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x196BE00)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNATTENDANCEREWARD_OFFSET UNITYSDK_OFFSET(0x196D640)
#define MX_DATA_WELCOMECAMPAIGNDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x196D6C0)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETMISSIONINFOBYWELCOMECAMPAIGNSEASONID_OFFSET UNITYSDK_OFFSET(0x196D950)
#define MX_DATA_WELCOMECAMPAIGNDATA_GET_WELCOMECAMPAIGNMISSION_OFFSET UNITYSDK_OFFSET(0x196DA80)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNENTERREWARD_OFFSET UNITYSDK_OFFSET(0x196DAD0)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETCOMPLETEMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x196DB90)
#define MX_DATA_WELCOMECAMPAIGNDATA_TRYGETMISSIONINFOBYSEASONID_OFFSET UNITYSDK_OFFSET(0x196DDA0)
#define MX_DATA_WELCOMECAMPAIGNDATA_INITIALIZEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x196DE50)
#define MX_DATA_WELCOMECAMPAIGNDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x196DF10)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETACTIVATEDWELCOMECAMPAIGNS_OFFSET UNITYSDK_OFFSET(0x196F080)
#define MX_DATA_WELCOMECAMPAIGNDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x196F110)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETMISSIONINFOBYWELCOMECAMPAIGNSEASONIDANDDAYS_OFFSET UNITYSDK_OFFSET(0x196F1D0)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETALLMISSIONIDSFORCHEAT_OFFSET UNITYSDK_OFFSET(0x196F410)
#define MX_DATA_WELCOMECAMPAIGNDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x196F460)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x196F670)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNEVENTINCREASE_OFFSET UNITYSDK_OFFSET(0x196F6F0)
#define MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNINFOFORUNITTEST_OFFSET UNITYSDK_OFFSET(0x196F7B0)
#define MX_DATA_WELCOMECAMPAIGNDATA_GET_MISSIONIDS_OFFSET UNITYSDK_OFFSET(0x196F880)

namespace MX::Data
{
	inline static constexpr unsigned int WelcomeCampaignData_TypeDefinitionIndex = 16463;

	class WelcomeCampaignData : public Il2CppObject
	{
	public:
		Il2CppObject* welcomeCampaignSeasonInfoBySeasonId; // 0x28
		Il2CppObject* welcomeCampaignRewardIncreaseDict; // 0x30
		Il2CppObject* welcomeCampaignEnterRewardInfo; // 0x38
		Il2CppObject* welcomeCampaignAttendanceRewardInfo; // 0x40
		Il2CppObject* welcomeCampaignMissionInfoBySeasonId; // 0x48
		Il2CppObject* welcomeCampaignMissionDict; // 0x50

		::MX::Data::WelcomeCampaignSeasonInfo* GetWelcomeCampaignSeasonInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::WelcomeCampaignSeasonInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNSEASONINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MissionInfoByWelcomeCampaignSeasonId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GET_MISSIONINFOBYWELCOMECAMPAIGNSEASONID_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionInfoByMissionCompleteUIPrefabType(::System::Int64 arg, ::FlatData::MissionCompleteUIPrefabType* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::MissionCompleteUIPrefabType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETMISSIONINFOBYMISSIONCOMPLETEUIPREFABTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::MX::Data::WelcomeCampaignAttendanceRewardInfo* GetWelcomeCampaignAttendanceReward(::System::Int64 arg)
		{
			return (return (::MX::Data::WelcomeCampaignAttendanceRewardInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNATTENDANCEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionInfoByWelcomeCampaignSeasonId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETMISSIONINFOBYWELCOMECAMPAIGNSEASONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WelcomeCampaignMission()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GET_WELCOMECAMPAIGNMISSION_OFFSET))(nullptr);
		}

		::MX::Data::WelcomeCampaignEnterRewardInfo* GetWelcomeCampaignEnterReward(::System::Int64 arg)
		{
			return (return (::MX::Data::WelcomeCampaignEnterRewardInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNENTERREWARD_OFFSET))(arg, nullptr);
		}

		::MX::Data::WelcomeCampaignMissionInfo* GetCompleteMissionInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::WelcomeCampaignMissionInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETCOMPLETEMISSIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMissionInfoBySeasonId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_TRYGETMISSIONINFOBYSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeValidator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_INITIALIZEVALIDATOR_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_VALIDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetActivatedWelcomeCampaigns(::MX::GameLogic::DBModel::AccountDB* arg, ::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::MX::GameLogic::DBModel::AccountDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETACTIVATEDWELCOMECAMPAIGNS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionInfoByWelcomeCampaignSeasonIdAndDays(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETMISSIONINFOBYWELCOMECAMPAIGNSEASONIDANDDAYS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllMissionIdsForCheat()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETALLMISSIONIDSFORCHEAT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::WelcomeCampaignMissionInfo* GetMissionInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::WelcomeCampaignMissionInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETMISSIONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::WelcomeCampaignRewardIncreaseInfo* GetWelcomeCampaignEventIncrease(::System::Int64 arg)
		{
			return (return (::MX::Data::WelcomeCampaignRewardIncreaseInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNEVENTINCREASE_OFFSET))(arg, nullptr);
		}

		::MX::Data::WelcomeCampaignSeasonInfo* GetWelcomeCampaignInfoForUnitTest(::FlatData::TargetGroup* arg)
		{
			return (return (::MX::Data::WelcomeCampaignSeasonInfo*(*)(::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GETWELCOMECAMPAIGNINFOFORUNITTEST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MissionIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNDATA_GET_MISSIONIDS_OFFSET))(nullptr);
		}

	};
}

