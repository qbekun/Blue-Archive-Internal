#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class BattlePassReward; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Data { class BattlePassExpLimit; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class BattlePassInfoExcel; }

#define MX_DATA_BATTLEPASSSEASONINFO_GETPLAYANDRECEIVEONLYSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1811390)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_FLAVORTEXTGROUPID_OFFSET UNITYSDK_OFFSET(0x18113F0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_PURCHASEREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1811400)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_NORMALPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x1811410)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_BATTLEPASSFREEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1811420)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_PASSEXPLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1811440)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_PASSEXPLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1811450)
#define MX_DATA_BATTLEPASSSEASONINFO_BUILDPASSLEVELFORBUYLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x1811460)
#define MX_DATA_BATTLEPASSSEASONINFO_BUILDPURCHASEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x18115C0)
#define MX_DATA_BATTLEPASSSEASONINFO_UPDATEPASSEXP_OFFSET UNITYSDK_OFFSET(0x1811600)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_MAINICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x1811810)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_LOBBYBANNERPATH_OFFSET UNITYSDK_OFFSET(0x1811830)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_BATTLEPASSPURCHASEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1811840)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_EXPIRYBATTLEPASSITEMRECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x1811850)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1811860)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_DISCOUNTPREMIUMPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x1811870)
#define MX_DATA_BATTLEPASSSEASONINFO_SETMAXPASSLEVEL_OFFSET UNITYSDK_OFFSET(0x1811880)
#define MX_DATA_BATTLEPASSSEASONINFO_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1811890)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_FREEREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x18118A0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_FREEREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x18118B0)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_PREMIUMPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x18118C0)
#define MX_DATA_BATTLEPASSSEASONINFO_TRYGETWEEKLYLIMITFORVALIDATOR_OFFSET UNITYSDK_OFFSET(0x18118D0)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_LOBBYBANNERPATH_OFFSET UNITYSDK_OFFSET(0x1811900)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_PASSLVUPGOODSID_OFFSET UNITYSDK_OFFSET(0x1811920)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_BATTLEPASSENDWARNINGDATE_OFFSET UNITYSDK_OFFSET(0x1811930)
#define MX_DATA_BATTLEPASSSEASONINFO_GETPASSFREEREWARD_OFFSET UNITYSDK_OFFSET(0x1811940)
#define MX_DATA_BATTLEPASSSEASONINFO_GETRECEIVEONLYREWARDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1811970)
#define MX_DATA_BATTLEPASSSEASONINFO_BUILDFREEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1811A30)
#define MX_DATA_BATTLEPASSSEASONINFO_SETPURCHASEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1811A70)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_NEXTLVNEEDEXP_OFFSET UNITYSDK_OFFSET(0x1811A90)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_PASSBUYLEVELCOST_OFFSET UNITYSDK_OFFSET(0x1811AA0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1811AB0)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_PASSBUYLEVELCOST_OFFSET UNITYSDK_OFFSET(0x1811AC0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1811AE0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1811AF0)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_BUYPREMIUMLVUPAMOUNT_OFFSET UNITYSDK_OFFSET(0x1811B00)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_BATTLEPASSFREEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1811B10)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_PASSLVUPGOODSID_OFFSET UNITYSDK_OFFSET(0x1811B20)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_EXCLUSIVEEMBLEMID_OFFSET UNITYSDK_OFFSET(0x1811B30)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_WEEKLYEXPLIMIT_OFFSET UNITYSDK_OFFSET(0x1811B40)
#define MX_DATA_BATTLEPASSSEASONINFO_CALCRECEIVEPASSEXP_OFFSET UNITYSDK_OFFSET(0x1811B60)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_PURCHASESTEPBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1811B70)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_DISCOUNTPREMIUMPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x1811B90)
#define MX_DATA_BATTLEPASSSEASONINFO_BUILDEXPIRYBATTLEPASSITEMRECEIVEDAY_OFFSET UNITYSDK_OFFSET(0x1811BA0)
#define MX_DATA_BATTLEPASSSEASONINFO_BUILDPASSLEVEL_OFFSET UNITYSDK_OFFSET(0x1811750)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_EXPIRYBATTLEPASSITEMRECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x1811C30)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_PURCHASESTEPBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1811C40)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_MAINICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x1811C50)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_EXCLUSIVEREWARDID_OFFSET UNITYSDK_OFFSET(0x1811C60)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_BUYPREMIUMLVUPAMOUNT_OFFSET UNITYSDK_OFFSET(0x1811C70)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1811C80)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_FLAVORTEXTGROUPID_OFFSET UNITYSDK_OFFSET(0x1811C90)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1811CA0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_EXCLUSIVEEMBLEMID_OFFSET UNITYSDK_OFFSET(0x1811CB0)
#define MX_DATA_BATTLEPASSSEASONINFO_GETPRODUCTGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1811CC0)
#define MX_DATA_BATTLEPASSSEASONINFO_CANPLAYBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x1811D40)
#define MX_DATA_BATTLEPASSSEASONINFO_BUILDPASSLEVELFORBUYPREMIUMPRODUCT_OFFSET UNITYSDK_OFFSET(0x1811DD0)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_PURCHASEREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1811E00)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_BATTLEPASSENDWARNINGDATE_OFFSET UNITYSDK_OFFSET(0x1811E10)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_PREMIUMPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x1811E20)
#define MX_DATA_BATTLEPASSSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1811E30)
#define MX_DATA_BATTLEPASSSEASONINFO_GETWEEKLYLIMITEXP_OFFSET UNITYSDK_OFFSET(0x18121C0)
#define MX_DATA_BATTLEPASSSEASONINFO_BUILDPASSLEVELBYLEVELBUY_OFFSET UNITYSDK_OFFSET(0x1811490)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_NEXTLVNEEDEXP_OFFSET UNITYSDK_OFFSET(0x18121F0)
#define MX_DATA_BATTLEPASSSEASONINFO_SETFREEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1812200)
#define MX_DATA_BATTLEPASSSEASONINFO_GETPASSPURCHASEREWARD_OFFSET UNITYSDK_OFFSET(0x1812220)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1812250)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_BATTLEPASSPURCHASEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1812260)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_PURCHASESTEPPRODUCTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1812280)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_WEEKLYEXPLIMIT_OFFSET UNITYSDK_OFFSET(0x18122A0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x18122B0)
#define MX_DATA_BATTLEPASSSEASONINFO_SET_EXCLUSIVEREWARDID_OFFSET UNITYSDK_OFFSET(0x18122C0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_NORMALPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x18122D0)
#define MX_DATA_BATTLEPASSSEASONINFO_GET_PURCHASESTEPPRODUCTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18122E0)
#define MX_DATA_BATTLEPASSSEASONINFO_BUILDBATTLEPASSENDWARNINGDATE_OFFSET UNITYSDK_OFFSET(0x18122F0)

namespace MX::Data
{
	inline static constexpr unsigned int BattlePassSeasonInfo_TypeDefinitionIndex = 15717;

	class BattlePassSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x10
		::System::Int64 _FreeRewardGroupId_k__BackingField; // 0x18
		::System::Int64 _PurchaseRewardGroupId_k__BackingField; // 0x20
		::System::Int64 _NormalProductGroupId_k__BackingField; // 0x28
		::System::Int64 _PremiumProductGroupId_k__BackingField; // 0x30
		::System::Int64 _DiscountPremiumProductGroupId_k__BackingField; // 0x38
		::System::Int64 _NextLvNeedExp_k__BackingField; // 0x40
		::System::Int64 _PassLvUpGoodsId_k__BackingField; // 0x48
		::System::Int64 _BuyPremiumLvUpAmount_k__BackingField; // 0x50
		::System::DateTime* _SalePeriodFrom_k__BackingField; // 0x58
		::System::DateTime* _SalePeriodTo_k__BackingField; // 0x60
		::System::DateTime* _ExpiryBattlePassItemReceiveDate_k__BackingField; // 0x68
		::System::DateTime* _BattlePassEndWarningDate_k__BackingField; // 0x70
		Il2CppObject* _VideoId_k__BackingField; // 0x78
		::System::Int64 _FlavorTextGroupId_k__BackingField; // 0x80
		::System::Int64 _ExclusiveRewardId_k__BackingField; // 0x88
		::System::Int64 _ExclusiveEmblemId_k__BackingField; // 0x90
		::System::UInt32 _PassExpLocalizeEtcId_k__BackingField; // 0x98
		::System::String* _LobbyBannerPath_k__BackingField; // 0xA0
		::System::String* _MainIconParcelPath_k__BackingField; // 0xA8
		::System::String* _PurchaseStepProductImagePath_k__BackingField; // 0xB0
		::System::String* _PurchaseStepBgImagePath_k__BackingField; // 0xB8
		::MX::Data::BattlePassReward* _BattlePassFreeRewardInfo_k__BackingField; // 0xC0
		::MX::Data::BattlePassReward* _BattlePassPurchaseRewardInfo_k__BackingField; // 0xC8
		::System::Int64 maxPassLevel; // 0xD0
		::MX::GameLogic::Parcel::ParcelCost* _PassBuyLevelCost_k__BackingField; // 0xD8
		::MX::Data::BattlePassExpLimit* _WeeklyExpLimit_k__BackingField; // 0xE0

		::System::Boolean GetPlayAndReceiveOnlySeasonInfo(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GETPLAYANDRECEIVEONLYSEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FlavorTextGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_FLAVORTEXTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_PURCHASEREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_NormalProductGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_NORMALPRODUCTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattlePassFreeRewardInfo(::MX::Data::BattlePassReward* arg)
		{
			((::System::Void(*)(::MX::Data::BattlePassReward*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_BATTLEPASSFREEREWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_PassExpLocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_PASSEXPLOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_PassExpLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_PASSEXPLOCALIZEETCID_OFFSET))(nullptr);
		}

		Il2CppObject* BuildPassLevelForBuyLevelCount(::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_BUILDPASSLEVELFORBUYLEVELCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BuildPurchaseRewardInfo(::System::Int64 arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_BUILDPURCHASEREWARDINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* UpdatePassExp(::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_UPDATEPASSEXP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_MainIconParcelPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_MAINICONPARCELPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_LobbyBannerPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_LOBBYBANNERPATH_OFFSET))(nullptr);
		}

		::MX::Data::BattlePassReward* get_BattlePassPurchaseRewardInfo()
		{
			return (return (::MX::Data::BattlePassReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_BATTLEPASSPURCHASEREWARDINFO_OFFSET))(nullptr);
		}

		::System::DateTime* get_ExpiryBattlePassItemReceiveDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_EXPIRYBATTLEPASSITEMRECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DiscountPremiumProductGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_DISCOUNTPREMIUMPRODUCTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxPassLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SETMAXPASSLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMaxLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GETMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_FreeRewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_FREEREWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FreeRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_FREEREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_PremiumProductGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_PREMIUMPRODUCTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetWeeklyLimitForValidator(::System::DateTime* arg, ExpLimitInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ExpLimitInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_TRYGETWEEKLYLIMITFORVALIDATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_LobbyBannerPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_LOBBYBANNERPATH_OFFSET))(str, nullptr);
		}

		::System::Int64 get_PassLvUpGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_PASSLVUPGOODSID_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassEndWarningDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_BATTLEPASSENDWARNINGDATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetPassFreeReward(::System::Int32 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GETPASSFREEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetReceiveOnlyRewardSeasonInfo(::System::DateTime* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GETRECEIVEONLYREWARDSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BuildFreeRewardInfo(::System::Int64 arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_BUILDFREEREWARDINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetPurchaseRewardInfo(::MX::Data::BattlePassReward* arg)
		{
			((::System::Void(*)(::MX::Data::BattlePassReward*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SETPURCHASEREWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_NextLvNeedExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_NEXTLVNEEDEXP_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_PassBuyLevelCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_PASSBUYLEVELCOST_OFFSET))(nullptr);
		}

		Il2CppObject* get_VideoId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_VIDEOID_OFFSET))(nullptr);
		}

		::System::Void set_PassBuyLevelCost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_PASSBUYLEVELCOST_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SalePeriodTo()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_SALEPERIODTO_OFFSET))(nullptr);
		}

		::System::DateTime* get_SalePeriodFrom()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_SALEPERIODFROM_OFFSET))(nullptr);
		}

		::System::Void set_BuyPremiumLvUpAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_BUYPREMIUMLVUPAMOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Data::BattlePassReward* get_BattlePassFreeRewardInfo()
		{
			return (return (::MX::Data::BattlePassReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_BATTLEPASSFREEREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void set_PassLvUpGoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_PASSLVUPGOODSID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExclusiveEmblemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_EXCLUSIVEEMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_WeeklyExpLimit(::MX::Data::BattlePassExpLimit* arg)
		{
			((::System::Void(*)(::MX::Data::BattlePassExpLimit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_WEEKLYEXPLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalcReceivePassExp(::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_CALCRECEIVEPASSEXP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_PurchaseStepBgImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_PURCHASESTEPBGIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Int64 get_DiscountPremiumProductGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_DISCOUNTPREMIUMPRODUCTGROUPID_OFFSET))(nullptr);
		}

		::System::Void BuildExpiryBattlePassItemReceiveDay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_BUILDEXPIRYBATTLEPASSITEMRECEIVEDAY_OFFSET))(nullptr);
		}

		Il2CppObject* BuildPassLevel(::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_BUILDPASSLEVEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_ExpiryBattlePassItemReceiveDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_EXPIRYBATTLEPASSITEMRECEIVEDATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_PurchaseStepBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_PURCHASESTEPBGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_MainIconParcelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_MAINICONPARCELPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_ExclusiveRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_EXCLUSIVEREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_BuyPremiumLvUpAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_BUYPREMIUMLVUPAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SalePeriodTo(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_SALEPERIODTO_OFFSET))(arg, nullptr);
		}

		::System::Void set_FlavorTextGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_FLAVORTEXTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SalePeriodFrom(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_SALEPERIODFROM_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ExclusiveEmblemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_EXCLUSIVEEMBLEMID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetProductGroupIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GETPRODUCTGROUPIDS_OFFSET))(nullptr);
		}

		::System::Boolean CanPlayBattlePass(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_CANPLAYBATTLEPASS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* BuildPassLevelForBuyPremiumProduct(::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_BUILDPASSLEVELFORBUYPREMIUMPRODUCT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_PurchaseRewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_PURCHASEREWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BattlePassEndWarningDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_BATTLEPASSENDWARNINGDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_PremiumProductGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_PREMIUMPRODUCTGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::BattlePassInfoExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BattlePassInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetWeeklyLimitExp(::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GETWEEKLYLIMITEXP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* BuildPassLevelByLevelBuy(::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_BUILDPASSLEVELBYLEVELBUY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 get_NextLvNeedExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_NEXTLVNEEDEXP_OFFSET))(nullptr);
		}

		::System::Void SetFreeRewardInfo(::MX::Data::BattlePassReward* arg)
		{
			((::System::Void(*)(::MX::Data::BattlePassReward*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SETFREEREWARDINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetPassPurchaseReward(::System::Int32 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GETPASSPURCHASEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_VideoId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_VIDEOID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattlePassPurchaseRewardInfo(::MX::Data::BattlePassReward* arg)
		{
			((::System::Void(*)(::MX::Data::BattlePassReward*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_BATTLEPASSPURCHASEREWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_PurchaseStepProductImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_PURCHASESTEPPRODUCTIMAGEPATH_OFFSET))(str, nullptr);
		}

		::MX::Data::BattlePassExpLimit* get_WeeklyExpLimit()
		{
			return (return (::MX::Data::BattlePassExpLimit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_WEEKLYEXPLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_SET_EXCLUSIVEREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NormalProductGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_NORMALPRODUCTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_PurchaseStepProductImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_GET_PURCHASESTEPPRODUCTIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void BuildBattlePassEndWarningDate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSSEASONINFO_BUILDBATTLEPASSENDWARNINGDATE_OFFSET))(nullptr);
		}

	};
}

