#pragma once
#include "unitysdk.h"

class BattlePassTask;
class BattlePassObject;
class BattlePassData;
namespace MX::Data { class BattlePassSeasonInfo; }
class BattlePassType;
namespace FlatData { class MissionCategory; }

#define BATTLEPASSTASK_GET_TABLEDATA_OFFSET UNITYSDK_OFFSET(0x2187A10)
#define BATTLEPASSTASK_SET_SHOWMISSIONREDDOT_OFFSET UNITYSDK_OFFSET(0x2187A20)
#define BATTLEPASSTASK_SET_SERVERDATA_OFFSET UNITYSDK_OFFSET(0x2187A30)
#define BATTLEPASSTASK_GET_PURCHASECOUNTDICT_OFFSET UNITYSDK_OFFSET(0x2187A40)
#define BATTLEPASSTASK_SET_PREPURCHASELEVEL_OFFSET UNITYSDK_OFFSET(0x2187A50)
#define BATTLEPASSTASK_SET_TABLEDATA_OFFSET UNITYSDK_OFFSET(0x2187A60)
#define BATTLEPASSTASK_SETCURRENTBATTLEPASSTYPE_OFFSET UNITYSDK_OFFSET(0x2187A70)
#define BATTLEPASSTASK_REQUESTMISSIONSINGLEREWARD_OFFSET UNITYSDK_OFFSET(0x2187AC0)
#define BATTLEPASSTASK_GET_CURRENTTYPE_OFFSET UNITYSDK_OFFSET(0x2187BD0)
#define BATTLEPASSTASK_SET_SHOWLOBBYREDDOT_OFFSET UNITYSDK_OFFSET(0x2187BE0)
#define BATTLEPASSTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2187BF0)
#define BATTLEPASSTASK_GETREWARDS_OFFSET UNITYSDK_OFFSET(0x2187FE0)
#define BATTLEPASSTASK_GET_ISSEASONEXPIRED_OFFSET UNITYSDK_OFFSET(0x21883A0)
#define BATTLEPASSTASK_CHECKIFSEASONNOWACTIVE_OFFSET UNITYSDK_OFFSET(0x2188470)
#define BATTLEPASSTASK_GET_ISSEASONACTIVE_OFFSET UNITYSDK_OFFSET(0x21884D0)
#define BATTLEPASSTASK_REQUESTINFO_OFFSET UNITYSDK_OFFSET(0x21884E0)
#define BATTLEPASSTASK_SET_CURRENTTYPE_OFFSET UNITYSDK_OFFSET(0x2188640)
#define BATTLEPASSTASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x2188650)
#define BATTLEPASSTASK_GET_ISPAIDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x2188630)
#define BATTLEPASSTASK_GET_ACTIVATEDTASK_OFFSET UNITYSDK_OFFSET(0x2188660)
#define BATTLEPASSTASK_SETPURCHASECOUNTDATA_OFFSET UNITYSDK_OFFSET(0x21886A0)
#define BATTLEPASSTASK_REQUESTMISSIONMULTIPLEREWARD_OFFSET UNITYSDK_OFFSET(0x2188E50)
#define BATTLEPASSTASK_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x2188F50)
#define BATTLEPASSTASK_REQUESTBATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0x2188F60)
#define BATTLEPASSTASK__INITPURCHASEDATA_G__ISTHISSEASONSPRODUCT|59_1_OFFSET UNITYSDK_OFFSET(0x2189080)
#define BATTLEPASSTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x21890B0)
#define BATTLEPASSTASK_GET_PREPURCHASELEVEL_OFFSET UNITYSDK_OFFSET(0x21890C0)
#define BATTLEPASSTASK_GET_PRODUCTDICT_OFFSET UNITYSDK_OFFSET(0x21890D0)
#define BATTLEPASSTASK_REQUESTREDDOTINFO_OFFSET UNITYSDK_OFFSET(0x21890E0)
#define BATTLEPASSTASK_REQUESTBUYLEVEL_OFFSET UNITYSDK_OFFSET(0x2189200)
#define BATTLEPASSTASK_REQUESTBATTLEPASSMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x2189540)
#define BATTLEPASSTASK_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x2189680)
#define BATTLEPASSTASK_SET_ACTIVATEDTASK_OFFSET UNITYSDK_OFFSET(0x2189690)
#define BATTLEPASSTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x21896E0)
#define BATTLEPASSTASK_KICKIFSEASONEXPIRED_OFFSET UNITYSDK_OFFSET(0x2189810)
#define BATTLEPASSTASK_INITPURCHASEDATA_OFFSET UNITYSDK_OFFSET(0x21899B0)
#define BATTLEPASSTASK_GET_SERVERDATA_OFFSET UNITYSDK_OFFSET(0x218A050)
#define BATTLEPASSTASK_ANYREWARDSAVAILABLE_OFFSET UNITYSDK_OFFSET(0x218A060)
#define BATTLEPASSTASK_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x218A130)
#define BATTLEPASSTASK_GET_SHOWLOBBYREDDOT_OFFSET UNITYSDK_OFFSET(0x218A140)
#define BATTLEPASSTASK_SHOPCASHIDTOPRODUCTID_OFFSET UNITYSDK_OFFSET(0x2188C60)
#define BATTLEPASSTASK_REQUESTBILLINGPURCHASELISTBYNEXON_OFFSET UNITYSDK_OFFSET(0x218A150)
#define BATTLEPASSTASK_GET_SHOWMISSIONREDDOT_OFFSET UNITYSDK_OFFSET(0x218A210)
#define BATTLEPASSTASK__INITPURCHASEDATA_G__GETBATTLEPASSTYPE|59_0_OFFSET UNITYSDK_OFFSET(0x2189FD0)
#define BATTLEPASSTASK_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0x2188BD0)
#define BATTLEPASSTASK_GETACTIVEBATTLEPASSSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x2187E40)

	inline static constexpr unsigned int BattlePassTask_TypeDefinitionIndex = 4081;

	class BattlePassTask : public Il2CppObject
	{
	public:
		BattlePassTask* _ActivatedTask_k__BackingField; // 0x0
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		BattlePassObject* _ServerData_k__BackingField; // 0x18
		BattlePassData* _TableData_k__BackingField; // 0x20
		::MX::Data::BattlePassSeasonInfo* _SeasonInfo_k__BackingField; // 0x28
		BattlePassType* _CurrentType_k__BackingField; // 0x30
		::System::Boolean _ShowLobbyRedDot_k__BackingField; // 0x34
		::System::Boolean _ShowMissionRedDot_k__BackingField; // 0x35
		::System::Int32 _PrePurchaseLevel_k__BackingField; // 0x38
		Il2CppObject* rewardObjects; // 0x40
		Il2CppObject* productDict; // 0x48
		Il2CppObject* purchaseCountDict; // 0x50

		BattlePassData* get_TableData()
		{
			return ((BattlePassData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_TABLEDATA_OFFSET))(nullptr);
		}

		::System::Void set_ShowMissionRedDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_SHOWMISSIONREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerData(BattlePassObject* arg)
		{
			((::System::Void(*)(BattlePassObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_SERVERDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PurchaseCountDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_PURCHASECOUNTDICT_OFFSET))(nullptr);
		}

		::System::Void set_PrePurchaseLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_PREPURCHASELEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_TableData(BattlePassData* arg)
		{
			((::System::Void(*)(BattlePassData*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_TABLEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetCurrentBattlePassType(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SETCURRENTBATTLEPASSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionSingleReward(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_REQUESTMISSIONSINGLEREWARD_OFFSET))(arg, arg2, nullptr);
		}

		BattlePassType* get_CurrentType()
		{
			return ((BattlePassType*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_CURRENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShowLobbyRedDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_SHOWLOBBYREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GETREWARDS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSeasonExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_ISSEASONEXPIRED_OFFSET))(nullptr);
		}

		::System::Boolean CheckIfSeasonNowActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_CHECKIFSEASONNOWACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSeasonActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_ISSEASONACTIVE_OFFSET))(nullptr);
		}

		::System::Void RequestInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_REQUESTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentType(BattlePassType* arg)
		{
			((::System::Void(*)(BattlePassType*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_CURRENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPaidUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_ISPAIDUNLOCKED_OFFSET))(nullptr);
		}

		BattlePassTask* get_ActivatedTask()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_ACTIVATEDTASK_OFFSET))(nullptr);
		}

		::System::Void SetPurchaseCountData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SETPURCHASECOUNTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionMultipleReward(::System::Int64 arg, ::FlatData::MissionCategory* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_REQUESTMISSIONMULTIPLEREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::BattlePassSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::BattlePassSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBattlePassInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_REQUESTBATTLEPASSINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean _InitPurchaseData_g__IsThisSeasonsProduct|59_1(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK__INITPURCHASEDATA_G__ISTHISSEASONSPRODUCT|59_1_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Int32 get_PrePurchaseLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_PREPURCHASELEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProductDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_PRODUCTDICT_OFFSET))(nullptr);
		}

		::System::Void RequestRedDotInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_REQUESTREDDOTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBuyLevel(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_REQUESTBUYLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestBattlePassMissionList(::System::Boolean arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_REQUESTBATTLEPASSMISSIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::BattlePassSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::BattlePassSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void set_ActivatedTask(BattlePassTask* arg)
		{
			((::System::Void(*)(BattlePassTask*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_ACTIVATEDTASK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean KickIfSeasonExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_KICKIFSEASONEXPIRED_OFFSET))(nullptr);
		}

		::System::Void InitPurchaseData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_INITPURCHASEDATA_OFFSET))(nullptr);
		}

		BattlePassObject* get_ServerData()
		{
			return ((BattlePassObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_SERVERDATA_OFFSET))(nullptr);
		}

		::System::Boolean AnyRewardsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_ANYREWARDSAVAILABLE_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowLobbyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_SHOWLOBBYREDDOT_OFFSET))(nullptr);
		}

		::System::String* ShopCashIdToProductId(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_SHOPCASHIDTOPRODUCTID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* RequestBillingPurchaseListByNexon()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_REQUESTBILLINGPURCHASELISTBYNEXON_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowMissionRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_SHOWMISSIONREDDOT_OFFSET))(nullptr);
		}

		BattlePassType* _InitPurchaseData_g__GetBattlePassType|59_0(<>c__DisplayClass59_0&* arg)
		{
			return ((BattlePassType*(*)(<>c__DisplayClass59_0&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK__INITPURCHASEDATA_G__GETBATTLEPASSTYPE|59_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GET_ISTEENAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetActiveBattlePassSeasonInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSTASK_GETACTIVEBATTLEPASSSEASONINFOS_OFFSET))(nullptr);
		}

	};

