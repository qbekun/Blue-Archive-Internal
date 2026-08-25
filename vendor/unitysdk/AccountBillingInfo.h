#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class DailyRecordDB; }
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace MX::Data::Excel { class ShopCashExcel; }

#define ACCOUNTBILLINGINFO_GET_BIRTH_OFFSET UNITYSDK_OFFSET(0x181A980)
#define ACCOUNTBILLINGINFO_SET_BIRTH_OFFSET UNITYSDK_OFFSET(0x181A990)
#define ACCOUNTBILLINGINFO_GET_NEEDCHECKPURCHASESTATE_OFFSET UNITYSDK_OFFSET(0x181A9A0)
#define ACCOUNTBILLINGINFO_SET_NEEDCHECKPURCHASESTATE_OFFSET UNITYSDK_OFFSET(0x181A9B0)
#define ACCOUNTBILLINGINFO_GET_MONTHLYPRODUCTREWARDS_OFFSET UNITYSDK_OFFSET(0x181A9C0)
#define ACCOUNTBILLINGINFO_SET_MONTHLYPRODUCTREWARDS_OFFSET UNITYSDK_OFFSET(0x181A9D0)
#define ACCOUNTBILLINGINFO_GET_MONTHLYPRODUCTREWARDMAILEXIST_OFFSET UNITYSDK_OFFSET(0x181A9E0)
#define ACCOUNTBILLINGINFO_SET_MONTHLYPRODUCTREWARDMAILEXIST_OFFSET UNITYSDK_OFFSET(0x181A9F0)
#define ACCOUNTBILLINGINFO_GET_REPURCHASABLEPRODUCTPURCHASECOUNTDBLIST_OFFSET UNITYSDK_OFFSET(0x181AA00)
#define ACCOUNTBILLINGINFO_SET_REPURCHASABLEPRODUCTPURCHASECOUNTDBLIST_OFFSET UNITYSDK_OFFSET(0x181AA10)
#define ACCOUNTBILLINGINFO_GET_REPURCHASABLEPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x181AA20)
#define ACCOUNTBILLINGINFO_SET_REPURCHASABLEPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x181AA30)
#define ACCOUNTBILLINGINFO_GET_NEWPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x181AA40)
#define ACCOUNTBILLINGINFO_SET_NEWPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x181AA50)
#define ACCOUNTBILLINGINFO_GET_DAILYRECORDDB_OFFSET UNITYSDK_OFFSET(0x181AA60)
#define ACCOUNTBILLINGINFO_SET_DAILYRECORDDB_OFFSET UNITYSDK_OFFSET(0x181AA70)
#define ACCOUNTBILLINGINFO_GET_LIMITEDFLASHSALEDBLIST_OFFSET UNITYSDK_OFFSET(0x181AA80)
#define ACCOUNTBILLINGINFO_SET_LIMITEDFLASHSALEDBLIST_OFFSET UNITYSDK_OFFSET(0x181AA90)
#define ACCOUNTBILLINGINFO_GET_NEWLYADDEDSHOPCASHIDS_OFFSET UNITYSDK_OFFSET(0x181AAA0)
#define ACCOUNTBILLINGINFO_SET_NEWLYADDEDSHOPCASHIDS_OFFSET UNITYSDK_OFFSET(0x181AAB0)
#define ACCOUNTBILLINGINFO_GET_PRODUCTMONTHLYIDINMAILLIST_OFFSET UNITYSDK_OFFSET(0x181AAC0)
#define ACCOUNTBILLINGINFO_SET_PRODUCTMONTHLYIDINMAILLIST_OFFSET UNITYSDK_OFFSET(0x181AAD0)
#define ACCOUNTBILLINGINFO_GET_GACHATICKETITEMIDLIST_OFFSET UNITYSDK_OFFSET(0x181AAE0)
#define ACCOUNTBILLINGINFO_SET_GACHATICKETITEMIDLIST_OFFSET UNITYSDK_OFFSET(0x181AAF0)
#define ACCOUNTBILLINGINFO_GET_PRODUCTBATTLEPASSIDINMAILLIST_OFFSET UNITYSDK_OFFSET(0x181AB00)
#define ACCOUNTBILLINGINFO_SET_PRODUCTBATTLEPASSIDINMAILLIST_OFFSET UNITYSDK_OFFSET(0x181AB10)
#define ACCOUNTBILLINGINFO_GET_PRODUCTDAILYRECORDIDINMAILLIST_OFFSET UNITYSDK_OFFSET(0x181AB20)
#define ACCOUNTBILLINGINFO_SET_PRODUCTDAILYRECORDIDINMAILLIST_OFFSET UNITYSDK_OFFSET(0x181AB30)
#define ACCOUNTBILLINGINFO_GET_PURCHASECOUNTLIST_OFFSET UNITYSDK_OFFSET(0x181AB40)
#define ACCOUNTBILLINGINFO_SET_PURCHASECOUNTLIST_OFFSET UNITYSDK_OFFSET(0x181AB50)
#define ACCOUNTBILLINGINFO_GET_BLOCKEDPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x181AB80)
#define ACCOUNTBILLINGINFO_SET_BLOCKEDPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x181AB90)
#define ACCOUNTBILLINGINFO_GET_BIRTHDAYFORMAT_OFFSET UNITYSDK_OFFSET(0x181ABB0)
#define ACCOUNTBILLINGINFO_GET_SHOWFREEPRODUCTREDDOT_OFFSET UNITYSDK_OFFSET(0x181AC50)
#define ACCOUNTBILLINGINFO_SET_SHOWFREEPRODUCTREDDOT_OFFSET UNITYSDK_OFFSET(0x181AC60)
#define ACCOUNTBILLINGINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x181AC70)
#define ACCOUNTBILLINGINFO_ISBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x181B150)
#define ACCOUNTBILLINGINFO_REQUESTBIRTHDAYMAIL_OFFSET UNITYSDK_OFFSET(0x181B280)
#define ACCOUNTBILLINGINFO_REFRESHPURCHASECOUNTLIST_OFFSET UNITYSDK_OFFSET(0x181B430)
#define ACCOUNTBILLINGINFO_SYNCPICKUPFIRSTGETHISTORY_OFFSET UNITYSDK_OFFSET(0x181B6B0)
#define ACCOUNTBILLINGINFO_ADDPICKUPFIRSTGETHISTORY_OFFSET UNITYSDK_OFFSET(0x181B6D0)
#define ACCOUNTBILLINGINFO_HASPICKUPFIRSTGETHISTORYBYSHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x181B760)
#define ACCOUNTBILLINGINFO_HASNOPURCHASERECORD_OFFSET UNITYSDK_OFFSET(0x181B870)
#define ACCOUNTBILLINGINFO_HASNOPURCHASERECORD_OFFSET UNITYSDK_OFFSET(0x181B8A0)
#define ACCOUNTBILLINGINFO_SYNCDAILYRECORDDBS_OFFSET UNITYSDK_OFFSET(0x181B9E0)
#define ACCOUNTBILLINGINFO_SYNCLIMITEDFLASHPRODUCTINFO_OFFSET UNITYSDK_OFFSET(0x181BC30)
#define ACCOUNTBILLINGINFO_SETDAILYRECORDFIRSTPURCHASEDSTATE_OFFSET UNITYSDK_OFFSET(0x181BD50)
#define ACCOUNTBILLINGINFO_REMOVEINMAILPURCHASEPRODUCTIDFORNEXON_OFFSET UNITYSDK_OFFSET(0x181BE80)
#define ACCOUNTBILLINGINFO_CHECKINMAILPURCHASEPRODUCTIDLISTFORNEXON_OFFSET UNITYSDK_OFFSET(0x181C040)
#define ACCOUNTBILLINGINFO_TRYGETLIMITEDFLASHSALEDB_OFFSET UNITYSDK_OFFSET(0x181C230)
#define ACCOUNTBILLINGINFO_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x181C3B0)
#define ACCOUNTBILLINGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x181C470)

	inline static constexpr unsigned int AccountBillingInfo_TypeDefinitionIndex = 1275;

	class AccountBillingInfo : public Il2CppObject
	{
	public:
		::System::String* _Birth_k__BackingField; // 0x10
		::System::Boolean _NeedCheckPurchaseState_k__BackingField; // 0x18
		Il2CppObject* _MonthlyProductRewards_k__BackingField; // 0x20
		::System::Boolean _MonthlyProductRewardMailExist_k__BackingField; // 0x28
		Il2CppObject* _RepurchasableProductPurchaseCountDBList_k__BackingField; // 0x30
		Il2CppObject* _RepurchasableProductList_k__BackingField; // 0x38
		Il2CppObject* _NewProductList_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::DailyRecordDB* _DailyRecordDB_k__BackingField; // 0x48
		Il2CppObject* _LimitedFlashSaleDBList_k__BackingField; // 0x50
		Il2CppObject* _NewlyAddedShopCashIds_k__BackingField; // 0x58
		Il2CppObject* _ProductMonthlyIdInMailList_k__BackingField; // 0x60
		Il2CppObject* _GachaTicketItemIdList_k__BackingField; // 0x68
		Il2CppObject* _ProductBattlePassIdInMailList_k__BackingField; // 0x70
		Il2CppObject* _ProductDailyRecordIdInMailList_k__BackingField; // 0x78
		Il2CppObject* _purchaseCountList; // 0x80
		Il2CppObject* _BlockedProductList_k__BackingField; // 0x88
		::System::Boolean _ShowFreeProductRedDot_k__BackingField; // 0x90
		Il2CppObject* pickupFirstGetHistoryDBs; // 0x98

		::System::String* get_Birth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_BIRTH_OFFSET))(nullptr);
		}

		::System::Void set_Birth(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_BIRTH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_NeedCheckPurchaseState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_NEEDCHECKPURCHASESTATE_OFFSET))(nullptr);
		}

		::System::Void set_NeedCheckPurchaseState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_NEEDCHECKPURCHASESTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MonthlyProductRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_MONTHLYPRODUCTREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_MonthlyProductRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_MONTHLYPRODUCTREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MonthlyProductRewardMailExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_MONTHLYPRODUCTREWARDMAILEXIST_OFFSET))(nullptr);
		}

		::System::Void set_MonthlyProductRewardMailExist(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_MONTHLYPRODUCTREWARDMAILEXIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RepurchasableProductPurchaseCountDBList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_REPURCHASABLEPRODUCTPURCHASECOUNTDBLIST_OFFSET))(nullptr);
		}

		::System::Void set_RepurchasableProductPurchaseCountDBList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_REPURCHASABLEPRODUCTPURCHASECOUNTDBLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RepurchasableProductList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_REPURCHASABLEPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::Void set_RepurchasableProductList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_REPURCHASABLEPRODUCTLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NewProductList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_NEWPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::Void set_NewProductList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_NEWPRODUCTLIST_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::DailyRecordDB* get_DailyRecordDB()
		{
			return ((::MX::GameLogic::DBModel::DailyRecordDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_DAILYRECORDDB_OFFSET))(nullptr);
		}

		::System::Void set_DailyRecordDB(::MX::GameLogic::DBModel::DailyRecordDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DailyRecordDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_DAILYRECORDDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LimitedFlashSaleDBList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_LIMITEDFLASHSALEDBLIST_OFFSET))(nullptr);
		}

		::System::Void set_LimitedFlashSaleDBList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_LIMITEDFLASHSALEDBLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NewlyAddedShopCashIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_NEWLYADDEDSHOPCASHIDS_OFFSET))(nullptr);
		}

		::System::Void set_NewlyAddedShopCashIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_NEWLYADDEDSHOPCASHIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ProductMonthlyIdInMailList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_PRODUCTMONTHLYIDINMAILLIST_OFFSET))(nullptr);
		}

		::System::Void set_ProductMonthlyIdInMailList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_PRODUCTMONTHLYIDINMAILLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GachaTicketItemIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_GACHATICKETITEMIDLIST_OFFSET))(nullptr);
		}

		::System::Void set_GachaTicketItemIdList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_GACHATICKETITEMIDLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ProductBattlePassIdInMailList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_PRODUCTBATTLEPASSIDINMAILLIST_OFFSET))(nullptr);
		}

		::System::Void set_ProductBattlePassIdInMailList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_PRODUCTBATTLEPASSIDINMAILLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ProductDailyRecordIdInMailList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_PRODUCTDAILYRECORDIDINMAILLIST_OFFSET))(nullptr);
		}

		::System::Void set_ProductDailyRecordIdInMailList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_PRODUCTDAILYRECORDIDINMAILLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PurchaseCountList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_PURCHASECOUNTLIST_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCountList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_PURCHASECOUNTLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BlockedProductList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_BLOCKEDPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::Void set_BlockedProductList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_BLOCKEDPRODUCTLIST_OFFSET))(arg, nullptr);
		}

		::System::String* get_birthDayFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_BIRTHDAYFORMAT_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowFreeProductRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_GET_SHOWFREEPRODUCTREDDOT_OFFSET))(nullptr);
		}

		::System::Void set_ShowFreeProductRedDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SET_SHOWFREEPRODUCTREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean IsBirthDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_ISBIRTHDAY_OFFSET))(nullptr);
		}

		::System::Void RequestBirthDayMail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_REQUESTBIRTHDAYMAIL_OFFSET))(nullptr);
		}

		::System::Void RefreshPurchaseCountList(::MX::GameLogic::DBModel::PurchaseCountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_REFRESHPURCHASECOUNTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SyncPickupFirstGetHistory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SYNCPICKUPFIRSTGETHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void AddPickupFirstGetHistory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_ADDPICKUPFIRSTGETHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasPickupFirstGetHistoryByShopRecruitId(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_HASPICKUPFIRSTGETHISTORYBYSHOPRECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasNoPurchaseRecord(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_HASNOPURCHASERECORD_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasNoPurchaseRecord(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_HASNOPURCHASERECORD_OFFSET))(str, nullptr);
		}

		::System::Void SyncDailyRecordDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SYNCDAILYRECORDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncLimitedFlashProductInfo(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SYNCLIMITEDFLASHPRODUCTINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDailyRecordFirstPurchasedState(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_SETDAILYRECORDFIRSTPURCHASEDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveInMailPurchaseProductIdForNexon(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_REMOVEINMAILPURCHASEPRODUCTIDFORNEXON_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckInMailPurchaseProductIdListForNexon(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_CHECKINMAILPURCHASEPRODUCTIDLISTFORNEXON_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLimitedFlashSaleDB(::System::Int64 arg, ::MX::GameLogic::DBModel::AccountLimitedFlashSaleDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::AccountLimitedFlashSaleDB&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_TRYGETLIMITEDFLASHSALEDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsExpired(::MX::Data::Excel::ShopCashExcel* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopCashExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_ISEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBILLINGINFO_.CTOR_OFFSET))(nullptr);
		}

	};

