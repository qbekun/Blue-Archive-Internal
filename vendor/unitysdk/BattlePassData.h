#pragma once
#include "unitysdk.h"

class IBattlePassDataRepositoryWrapper;
namespace MX::Data { class BattlePassSeasonInfo; }
namespace MX::Data { class BattlePassMissionInfo; }
namespace MX::Data { class MissionInfo; }

#define BATTLEPASSDATA_TRYGETREWARDEXCELBYID_OFFSET UNITYSDK_OFFSET(0x214B290)
#define BATTLEPASSDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x214B340)
#define BATTLEPASSDATA_GET_MISSIONIDS_OFFSET UNITYSDK_OFFSET(0x214B640)
#define BATTLEPASSDATA_GETPLAYANDRECEIVEONLYSEASONINFO_OFFSET UNITYSDK_OFFSET(0x214B6A0)
#define BATTLEPASSDATA_TRYGETMISSIONINFOBYBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x214B8D0)
#define BATTLEPASSDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x214B930)
#define BATTLEPASSDATA_VALIDATEPASSPRODUCT_OFFSET UNITYSDK_OFFSET(0x214D410)
#define BATTLEPASSDATA_TRYGETBATTLEPASSEXPLIMIT_OFFSET UNITYSDK_OFFSET(0x214D420)
#define BATTLEPASSDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x214D4D0)
#define BATTLEPASSDATA_GET_MISSIONINFOBYBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x214DF90)
#define BATTLEPASSDATA_TRYGETALLFLAVORTEXTEXCELBYID_OFFSET UNITYSDK_OFFSET(0x214DFA0)
#define BATTLEPASSDATA_TRYGETALLREWARDEXCELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x214E050)
#define BATTLEPASSDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x214E100)
#define BATTLEPASSDATA_GET_BATTLEPASSMISSION_OFFSET UNITYSDK_OFFSET(0x214E260)
#define BATTLEPASSDATA_GET_BATTLEPASSSEASONBYSEASONID_OFFSET UNITYSDK_OFFSET(0x214E2B0)
#define BATTLEPASSDATA_GET_PICKUPREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0x214E2C0)
#define BATTLEPASSDATA_GETMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x214E2D0)
#define BATTLEPASSDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x214E350)
#define BATTLEPASSDATA_PREPROCESSCLIENT_OFFSET UNITYSDK_OFFSET(0x214FB50)
#define BATTLEPASSDATA_INITIALIZEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x214FD20)
#define BATTLEPASSDATA_TRYGETBATTLEPASSPRODUCTINFO_OFFSET UNITYSDK_OFFSET(0x214FE00)
#define BATTLEPASSDATA_GETBATTLEPASSSEASONINFOFORUNITTEST_OFFSET UNITYSDK_OFFSET(0x214FE60)
#define BATTLEPASSDATA_TRYGETALLREWARDEXCELBYGROUPIDLEVEL_OFFSET UNITYSDK_OFFSET(0x214FEB0)
#define BATTLEPASSDATA_ISLIMITEDREWARDMISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0x214FF70)
#define BATTLEPASSDATA_GET_BATTLEPASSLEVELDIC_OFFSET UNITYSDK_OFFSET(0x214FFA0)
#define BATTLEPASSDATA_GETBATTLEPASSSEASONINFO_OFFSET UNITYSDK_OFFSET(0x214FFB0)
#define BATTLEPASSDATA_GETRECEIVEONLYREWARDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x2150030)
#define BATTLEPASSDATA_GETMISSIONINFOBYBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x2150260)

	inline static constexpr unsigned int BattlePassData_TypeDefinitionIndex = 3960;

	class BattlePassData : public Il2CppObject
	{
	public:
		IBattlePassDataRepositoryWrapper* dataRepositoryWrapper; // 0x28
		Il2CppObject* battlePassSeasonBySeasonId; // 0x30
		Il2CppObject* battlePassMissionInfoByBattlePassId; // 0x38
		Il2CppObject* battlePassMissionInfoDic; // 0x40
		Il2CppObject* battlePassMissionExcelDic; // 0x48
		Il2CppObject* battlePassExpLimitDic; // 0x50
		Il2CppObject* battlePassLevelDic; // 0x58
		Il2CppObject* pickUpRewardLevels; // 0x60
		Il2CppObject* battlePassRewardDic; // 0x68
		Il2CppObject* battlePassProductInfoByOrderId; // 0x70

		::System::Boolean TryGetRewardExcelById(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_TRYGETREWARDEXCELBYID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_MissionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GET_MISSIONIDS_OFFSET))(nullptr);
		}

		::MX::Data::BattlePassSeasonInfo* GetPlayAndReceiveOnlySeasonInfo(::System::DateTime* arg)
		{
			return ((::MX::Data::BattlePassSeasonInfo*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GETPLAYANDRECEIVEONLYSEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMissionInfoByBattlePassId(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_TRYGETMISSIONINFOBYBATTLEPASSID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Boolean ValidatePassProduct(::MX::Data::BattlePassSeasonInfo* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::BattlePassSeasonInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_VALIDATEPASSPRODUCT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetBattlePassExpLimit(::System::Int64 arg, ::System::DateTime* arg2, int64_t&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::DateTime*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_TRYGETBATTLEPASSEXPLIMIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_MissionInfoByBattlePassId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GET_MISSIONINFOBYBATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAllFlavorTextExcelById(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_TRYGETALLFLAVORTEXTEXCELBYID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetAllRewardExcelByGroupId(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_TRYGETALLREWARDEXCELBYGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_BattlePassMission()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GET_BATTLEPASSMISSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_BattlePassSeasonBySeasonId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GET_BATTLEPASSSEASONBYSEASONID_OFFSET))(nullptr);
		}

		Il2CppObject* get_PickUpRewardLevels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GET_PICKUPREWARDLEVELS_OFFSET))(nullptr);
		}

		::MX::Data::BattlePassMissionInfo* GetMissionInfo(::System::Int64 arg)
		{
			return ((::MX::Data::BattlePassMissionInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GETMISSIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void PreprocessClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_PREPROCESSCLIENT_OFFSET))(nullptr);
		}

		::System::Void InitializeValidator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_INITIALIZEVALIDATOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetBattlePassProductInfo(::System::Int64 arg, ::MX::Data::BattlePassProductInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::BattlePassProductInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_TRYGETBATTLEPASSPRODUCTINFO_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::BattlePassSeasonInfo* GetBattlePassSeasonInfoForUnitTest()
		{
			return ((::MX::Data::BattlePassSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GETBATTLEPASSSEASONINFOFORUNITTEST_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAllRewardExcelByGroupIdLevel(::System::Int64 arg, ::System::Int32 arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_TRYGETALLREWARDEXCELBYGROUPIDLEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsLimitedRewardMissionCategory(::MX::Data::MissionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_ISLIMITEDREWARDMISSIONCATEGORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BattlePassLevelDic()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GET_BATTLEPASSLEVELDIC_OFFSET))(nullptr);
		}

		::MX::Data::BattlePassSeasonInfo* GetBattlePassSeasonInfo(::System::Int64 arg)
		{
			return ((::MX::Data::BattlePassSeasonInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GETBATTLEPASSSEASONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::BattlePassSeasonInfo* GetReceiveOnlyRewardSeasonInfo(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::MX::Data::BattlePassSeasonInfo*(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GETRECEIVEONLYREWARDSEASONINFO_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetMissionInfoByBattlePassId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATA_GETMISSIONINFOBYBATTLEPASSID_OFFSET))(arg, nullptr);
		}

	};

