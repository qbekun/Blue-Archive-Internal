#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class ShopCategoryType; }
namespace MX::Data { class ShopInfoExcelData&; }
namespace MX::Data::Excel { class ShopRecruitExcel&; }
namespace MX::Data { class ShopExcelData&; }
namespace MX::Data { class ShopRefreshExcelData&; }
namespace MX::Data::Excel { class GoodsExcel&; }
namespace MX::GameLogic::Parcel { class ParcelCost&; }
namespace MX::Data { class ShopExcelData; }
namespace MX::Data { class ShopRefreshExcelData; }
namespace MX::Data::Excel { class ShopFilterClassifiedExcel&; }
namespace MX::Data::Excel { class GoodsExcel; }
namespace FlatData { class GachaTicketType&; }
namespace MX::Data::Excel { class GachaGroupExcel; }
namespace FlatData { class GachaGroupType; }
namespace MX::Data { class GachaElement; }
namespace MX::Data { class GachaPopulation; }
namespace MX::Data { class ShopInfoExcelData; }
namespace MX::GameLogic::Parcel { class ParcelInfo&; }
namespace FlatData { class GachaTicketType; }
namespace MX::Data { class ShopFreeRecruitExcelData; }
namespace MX::Data { class ShopFreeRecruitExcelData&; }
namespace MX::Data { class ShopRecruitExcelData&; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Data { class PickupFirstGetBonusExcelData&; }
namespace FlatData { class ShopGroupType; }
namespace MX::Data { class GachaCombinedCostDataInfo; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define MX_DATA_SHOPDATA_GET_TUTORIALGACHASHOPID_OFFSET UNITYSDK_OFFSET(0x1947A20)
#define MX_DATA_SHOPDATA_GET_TUTORIALGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x1947AB0)
#define MX_DATA_SHOPDATA_FINDALLAVAILABLECHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1947B40)
#define MX_DATA_SHOPDATA_FINDALLAVAILABLECHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1947C50)
#define MX_DATA_SHOPDATA_GETPARCELAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1948220)
#define MX_DATA_SHOPDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1948470)
#define MX_DATA_SHOPDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1948890)
#define MX_DATA_SHOPDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x194EAF0)
#define MX_DATA_SHOPDATA_ISEVENTCONTENTSHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1951040)
#define MX_DATA_SHOPDATA_TRYGETSHOPINFOEXCELDATAFORCOMMONSHOP_OFFSET UNITYSDK_OFFSET(0x1951050)
#define MX_DATA_SHOPDATA_TRYGETALLSHOPINFOEXCELDATAFORCOMMONSHOP_OFFSET UNITYSDK_OFFSET(0x1951180)
#define MX_DATA_SHOPDATA_GETALLSHOPEXCELDATASFORCOMMONSHOP_OFFSET UNITYSDK_OFFSET(0x1951260)
#define MX_DATA_SHOPDATA_GETALLSHOPREFRESHEXCELDATASFORCOMMONSHOP_OFFSET UNITYSDK_OFFSET(0x19512D0)
#define MX_DATA_SHOPDATA_TRYGETSHOPINFOEXCELDATABYKEYPAIR_OFFSET UNITYSDK_OFFSET(0x19510F0)
#define MX_DATA_SHOPDATA_TRYGETSHOPINFOEXCELDATABYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1951200)
#define MX_DATA_SHOPDATA_TRYGETSHOPRECRUITVALUE_OFFSET UNITYSDK_OFFSET(0x1951340)
#define MX_DATA_SHOPDATA_TRYGETSHOPEXCELDATA_OFFSET UNITYSDK_OFFSET(0x19513A0)
#define MX_DATA_SHOPDATA_TRYGETSHOPEXCELDATASBYKEYPAIR_OFFSET UNITYSDK_OFFSET(0x1951400)
#define MX_DATA_SHOPDATA_TRYGETSHOPEXCELDATASBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1951490)
#define MX_DATA_SHOPDATA_TRYGETSHOPREFRESHEXCELDATA_OFFSET UNITYSDK_OFFSET(0x19514F0)
#define MX_DATA_SHOPDATA_TRYGETSHOPREFRESHEXCELDATASBYKEYPAIR_OFFSET UNITYSDK_OFFSET(0x1951550)
#define MX_DATA_SHOPDATA_TRYGETSHOPREFRESHEXCELDATASBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19515E0)
#define MX_DATA_SHOPDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x19481C0)
#define MX_DATA_SHOPDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1951640)
#define MX_DATA_SHOPDATA_TRYGETVALUEGOODSCOST_OFFSET UNITYSDK_OFFSET(0x19516F0)
#define MX_DATA_SHOPDATA_TRYGETGOODSPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1951750)
#define MX_DATA_SHOPDATA_TRYGETGOODSCONSUMEEXTRAMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0x19517B0)
#define MX_DATA_SHOPDATA_TRYGETVALUEBYTYPE_OFFSET UNITYSDK_OFFSET(0x1951870)
#define MX_DATA_SHOPDATA_FINDSHOPEXCELDATA_OFFSET UNITYSDK_OFFSET(0x1951AF0)
#define MX_DATA_SHOPDATA_FINDSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1951B50)
#define MX_DATA_SHOPDATA_FINDSHOPRECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1951BB0)
#define MX_DATA_SHOPDATA_CHARACTERPROFILE_OFFSET UNITYSDK_OFFSET(0x1951C20)
#define MX_DATA_SHOPDATA_GETGACHATABSTRING_OFFSET UNITYSDK_OFFSET(0x1951CF0)
#define MX_DATA_SHOPDATA_GETGACHATITLENAMESTRING_OFFSET UNITYSDK_OFFSET(0x1951F50)
#define MX_DATA_SHOPDATA_GETGACHASUBTITLESTRING_OFFSET UNITYSDK_OFFSET(0x19521B0)
#define MX_DATA_SHOPDATA_GETGACHADESCRIPTIONSTRING_OFFSET UNITYSDK_OFFSET(0x1952410)
#define MX_DATA_SHOPDATA_TRYGETSHOPFILTERCLASSIFIEDEXCELBYGOODSID_OFFSET UNITYSDK_OFFSET(0x1952670)
#define MX_DATA_SHOPDATA_GETGACHACATEGORYTYPELISTALL_OFFSET UNITYSDK_OFFSET(0x19526D0)
#define MX_DATA_SHOPDATA_GETSELECTPICKUPGACHACATEGORYTYPELIST_OFFSET UNITYSDK_OFFSET(0x19529D0)
#define MX_DATA_SHOPDATA_GETNEWBIEDATELIMITEDGACHAALL_OFFSET UNITYSDK_OFFSET(0x1952CD0)
#define MX_DATA_SHOPDATA_ISSELECTIONPICKUPGACHA_OFFSET UNITYSDK_OFFSET(0x1952E20)
#define MX_DATA_SHOPDATA_GETSHOPCATEGORYTYPELIST_OFFSET UNITYSDK_OFFSET(0x1952F20)
#define MX_DATA_SHOPDATA_FINDSHOPREFRESHEXCELDATASBYSHOPCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1953030)
#define MX_DATA_SHOPDATA_FINDGOODS_OFFSET UNITYSDK_OFFSET(0x19530F0)
#define MX_DATA_SHOPDATA_FINDGOODSCOSTANDREWARD_OFFSET UNITYSDK_OFFSET(0x1953160)
#define MX_DATA_SHOPDATA_TRYGETGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x19531E0)
#define MX_DATA_SHOPDATA_TRYGETGACHATICKETAMOUNT_OFFSET UNITYSDK_OFFSET(0x19534A0)
#define MX_DATA_SHOPDATA_HASDATA_OFFSET UNITYSDK_OFFSET(0x1953680)
#define MX_DATA_SHOPDATA_HASRECRUITDATA_OFFSET UNITYSDK_OFFSET(0x19536D0)
#define MX_DATA_SHOPDATA_HASGACHAGROUP_OFFSET UNITYSDK_OFFSET(0x1953720)
#define MX_DATA_SHOPDATA_GETGACHAGROUP_OFFSET UNITYSDK_OFFSET(0x1953770)
#define MX_DATA_SHOPDATA_GETGACHAGROUPTABLE_OFFSET UNITYSDK_OFFSET(0x1953800)
#define MX_DATA_SHOPDATA_GETGACHAGROUPBYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1953810)
#define MX_DATA_SHOPDATA_GETGACHAELEMENTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1953950)
#define MX_DATA_SHOPDATA_GETGACHAELEMENTSBYGROUP_OFFSET UNITYSDK_OFFSET(0x1953BC0)
#define MX_DATA_SHOPDATA_GETGACHAELEMENTSANDPROBSUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1953C30)
#define MX_DATA_SHOPDATA_GETGACHAGROUPPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1953CA0)
#define MX_DATA_SHOPDATA_GETSHOPREFRESHEXCELLISTBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1953E50)
#define MX_DATA_SHOPDATA_GETSHOPEXCELBYSHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1953F10)
#define MX_DATA_SHOPDATA_GETSHOPINFOEXCELDATABYSHOPTYPE_OFFSET UNITYSDK_OFFSET(0x1953FD0)
#define MX_DATA_SHOPDATA_GETPICKUPDUPLICATEBOUNSEXCELDATALIST_OFFSET UNITYSDK_OFFSET(0x1954070)
#define MX_DATA_SHOPDATA_GETPICKUPDUPLICATEBONUSEXCELDATADICTIONARY_OFFSET UNITYSDK_OFFSET(0x1954210)
#define MX_DATA_SHOPDATA_TRYGETPICKUPBONUSREWARD_OFFSET UNITYSDK_OFFSET(0x1954290)
#define MX_DATA_SHOPDATA_FINDSHOPBYDIRECTPAYINVISIBLETOKENID_OFFSET UNITYSDK_OFFSET(0x1954400)
#define MX_DATA_SHOPDATA_GETSHOPINFOEXCELDATALISTBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1954600)
#define MX_DATA_SHOPDATA_GET_GACHAELEMENTGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1954670)
#define MX_DATA_SHOPDATA_GET_SHOPKEYS_OFFSET UNITYSDK_OFFSET(0x1954790)
#define MX_DATA_SHOPDATA_GET_SHOPREFRESHKEYS_OFFSET UNITYSDK_OFFSET(0x19547E0)
#define MX_DATA_SHOPDATA_HASGOODSID_OFFSET UNITYSDK_OFFSET(0x1954830)
#define MX_DATA_SHOPDATA_ISSHOPRECRUITOPEN_OFFSET UNITYSDK_OFFSET(0x1954880)
#define MX_DATA_SHOPDATA_CANPURCHASEBYPACKAGETHREESTARTYPE_OFFSET UNITYSDK_OFFSET(0x1954A10)
#define MX_DATA_SHOPDATA_ISPARTICULARPACKAGEGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1954AE0)
#define MX_DATA_SHOPDATA_CANPURCHASEBYGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1954AF0)
#define MX_DATA_SHOPDATA_ISSHOPPRODUCTOPEN_OFFSET UNITYSDK_OFFSET(0x1954B90)
#define MX_DATA_SHOPDATA_ISREFRESHSHOPOPEN_OFFSET UNITYSDK_OFFSET(0x1954DF0)
#define MX_DATA_SHOPDATA_GETGOODSCONSUMEPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1954E70)
#define MX_DATA_SHOPDATA_GETCURRENTSTEPCONSUMEEXTRAAMOUNT_OFFSET UNITYSDK_OFFSET(0x1954FF0)
#define MX_DATA_SHOPDATA_GETCONSUMEEXTRAAMOUNTLIST_OFFSET UNITYSDK_OFFSET(0x19550B0)
#define MX_DATA_SHOPDATA_GETMERCHANDISEREWARDS_OFFSET UNITYSDK_OFFSET(0x1955280)
#define MX_DATA_SHOPDATA_GETGOODSID_OFFSET UNITYSDK_OFFSET(0x1955410)
#define MX_DATA_SHOPDATA_ISACTIONPOINTPARCELGOODS_OFFSET UNITYSDK_OFFSET(0x1955460)
#define MX_DATA_SHOPDATA_GETGOODSTABLE_OFFSET UNITYSDK_OFFSET(0x19555F0)
#define MX_DATA_SHOPDATA_SHOPRECRUITCHANGEDATACHECK_OFFSET UNITYSDK_OFFSET(0x1955600)
#define MX_DATA_SHOPDATA_GETFREERECRUITDATAS_OFFSET UNITYSDK_OFFSET(0x1955970)
#define MX_DATA_SHOPDATA_GETFREERECRUITDATA_OFFSET UNITYSDK_OFFSET(0x19559C0)
#define MX_DATA_SHOPDATA_GETFREERECRUITDATAFROMSHOPRECRUITGOODSID_OFFSET UNITYSDK_OFFSET(0x1955A30)
#define MX_DATA_SHOPDATA_GETFREERECRUITDATAFROMSHOPRECRUITGOODID_OFFSET UNITYSDK_OFFSET(0x1955CB0)
#define MX_DATA_SHOPDATA_TRYGETFREERECRUITDATAFROMSHOPRECRUITGOODID_OFFSET UNITYSDK_OFFSET(0x1955EB0)
#define MX_DATA_SHOPDATA_TRYGETSHOPRECRUITBYSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1955EE0)
#define MX_DATA_SHOPDATA_GETCATEGORYSHOPPARCELCOST_OFFSET UNITYSDK_OFFSET(0x1955F00)
#define MX_DATA_SHOPDATA_GETPICKUPSELECTCANDIDATES_OFFSET UNITYSDK_OFFSET(0x19561A0)
#define MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUS_OFFSET UNITYSDK_OFFSET(0x1956250)
#define MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUSBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x19562B0)
#define MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUS_OFFSET UNITYSDK_OFFSET(0x19564B0)
#define MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUSFORPICKUPSELECTION_OFFSET UNITYSDK_OFFSET(0x19566C0)
#define MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUSFORPICKUPSELECTION_OFFSET UNITYSDK_OFFSET(0x1956790)
#define MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUSFORPICKUPSELECTION_OFFSET UNITYSDK_OFFSET(0x1956820)
#define MX_DATA_SHOPDATA_GETPICKUPFIRSTGETBONUSLIST_OFFSET UNITYSDK_OFFSET(0x1956B50)
#define MX_DATA_SHOPDATA_GETPICKUPFIRSTGETBONUSDATA_OFFSET UNITYSDK_OFFSET(0x1956BA0)
#define MX_DATA_SHOPDATA_GETPICKUPFIRSTGETBONUSFORPICKUPSELECTIONKEYS_OFFSET UNITYSDK_OFFSET(0x1956C60)
#define MX_DATA_SHOPDATA_TRYGETCHARACTERIDFORGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1956CB0)
#define MX_DATA_SHOPDATA_GETSHOPTABGROUPEXCELLISTBYDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1956D10)
#define MX_DATA_SHOPDATA_GETSHOPCATEGORYLISTINSHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1956E70)
#define MX_DATA_SHOPDATA_GETSHOPGROUPTYPEBYSHOPCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1956FB0)
#define MX_DATA_SHOPDATA_GETGACHACOMBINEDCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1957020)
#define MX_DATA_SHOPDATA_GETGACHACOMBINEDCOSTDATA_OFFSET UNITYSDK_OFFSET(0x1953430)
#define MX_DATA_SHOPDATA_ISPACKAGEGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1954AB0)
#define MX_DATA_SHOPDATA_ISPACKAGETHREESTARCATEGRYGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1957090)
#define MX_DATA_SHOPDATA_GETNEWBIERECRUITCANDIDATES_OFFSET UNITYSDK_OFFSET(0x19570B0)
#define MX_DATA_SHOPDATA_GETGACHAGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1957160)
#define MX_DATA_SHOPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1957270)
#define MX_DATA_SHOPDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1957E40)
#define MX_DATA_SHOPDATA__FINDALLAVAILABLECHARACTERIDS_B__49_0_OFFSET UNITYSDK_OFFSET(0x1958BA0)

namespace MX::Data
{
	inline static constexpr unsigned int ShopData_TypeDefinitionIndex = 16399;

	class ShopData : public Il2CppObject
	{
	public:
		Il2CppObject* GachaCategoryTypes; // 0x0
		Il2CppObject* PickupGachaCategoryTypes; // 0x8
		Il2CppObject* SelectPickupGachaCategoryTypes; // 0x10
		Il2CppObject* PickupDuplicateBonusCategoryTypes; // 0x18
		Il2CppObject* SinglePickupFirstGetBonusCategoryTypes; // 0x20
		Il2CppObject* MultiplePickupFirstGetBonusCategoryTypes; // 0x28
		Il2CppObject* shopExcelTable; // 0x28
		Il2CppObject* shopRefreshExcelTable; // 0x30
		Il2CppObject* shopExcelDataDic; // 0x38
		Il2CppObject* shopRecruitTable; // 0x40
		Il2CppObject* shopRecruitExcelDataDic; // 0x48
		Il2CppObject* shopFreeRecruitTable; // 0x50
		Il2CppObject* shopFreeRecruitExcelDataDic; // 0x58
		Il2CppObject* pickupDuplicateBonusTable; // 0x60
		Il2CppObject* pickupDuplicateBonusExcelDataDic; // 0x68
		Il2CppObject* pickupDuplicateBonusExcelDataDicByShopId; // 0x70
		Il2CppObject* shopRefreshExcelDataDic; // 0x78
		Il2CppObject* shopTabGroupExcelDic; // 0x80
		Il2CppObject* shopTabGroupIdByCategoryType; // 0x88
		Il2CppObject* shopInfoExcelDic; // 0x90
		Il2CppObject* shopInfoExcelDataByEventContentId; // 0x98
		Il2CppObject* shopExcelDataByEventContentId; // 0xA0
		Il2CppObject* shopRefreshExcelDataByEventContentId; // 0xA8
		Il2CppObject* shopInfoExcelDataByKeyPair; // 0xB0
		Il2CppObject* shopExcelDataByKeyPair; // 0xB8
		Il2CppObject* shopRefreshExcelDataByKeyPair; // 0xC0
		Il2CppObject* dataGoodsTable; // 0xC8
		Il2CppObject* goodsCostTable; // 0xD0
		Il2CppObject* goodsRewardTable; // 0xD8
		Il2CppObject* gachaGroupDic; // 0xE0
		Il2CppObject* gachaElementDic; // 0xE8
		Il2CppObject* gachaElementRecursiveDic; // 0xF0
		Il2CppObject* gachaCombinedCostTable; // 0xF8
		Il2CppObject* gachaCombinedCostDataDic; // 0x100
		Il2CppObject* gachaElementListDic; // 0x108
		Il2CppObject* gachaPopulationDic; // 0x110
		::System::Boolean IsShopRecruitDataChanged; // 0x118
		Il2CppObject* localizeGachaShopDic; // 0x120
		Il2CppObject* goodsIdShopFilterExcelDic; // 0x128
		Il2CppObject* shopFreeRecruitPeriodDic; // 0x130
		Il2CppObject* pickSelectCandidatesBySelectAbleGachaGroupID; // 0x138
		Il2CppObject* pickupFirstGetBonusDic; // 0x140
		Il2CppObject* pickupFirstGetBonusForPickupSelectionDic; // 0x148
		::System::Int32 BlockRefreshSecond; // 0x30

		::System::Int32 get_TutorialGachaShopId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GET_TUTORIALGACHASHOPID_OFFSET))(nullptr);
		}

		::System::Int32 get_TutorialGachaGoodsId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GET_TUTORIALGACHAGOODSID_OFFSET))(nullptr);
		}

		Il2CppObject* FindAllAvailableCharacterIds(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDALLAVAILABLECHARACTERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindAllAvailableCharacterIds(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDALLAVAILABLECHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetParcelAmountMax(::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETPARCELAMOUNTMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean IsEventContentShopCategory(::FlatData::ShopCategoryType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISEVENTCONTENTSHOPCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetShopInfoExcelDataForCommonShop(::FlatData::ShopCategoryType* arg, ::MX::Data::ShopInfoExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ShopCategoryType*, ::MX::Data::ShopInfoExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPINFOEXCELDATAFORCOMMONSHOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllShopInfoExcelDataForCommonShop(::FlatData::ShopCategoryType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ShopCategoryType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETALLSHOPINFOEXCELDATAFORCOMMONSHOP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllShopExcelDatasForCommonShop()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETALLSHOPEXCELDATASFORCOMMONSHOP_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllShopRefreshExcelDatasForCommonShop()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETALLSHOPREFRESHEXCELDATASFORCOMMONSHOP_OFFSET))(nullptr);
		}

		::System::Boolean TryGetShopInfoExcelDataByKeyPair(::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::MX::Data::ShopInfoExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::MX::Data::ShopInfoExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPINFOEXCELDATABYKEYPAIR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetShopInfoExcelDataByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPINFOEXCELDATABYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetShopRecruitValue(::System::Int64 arg, ::MX::Data::Excel::ShopRecruitExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ShopRecruitExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPRECRUITVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetShopExcelData(::System::Int64 arg, ::MX::Data::ShopExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ShopExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPEXCELDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetShopExcelDatasByKeyPair(::System::Int64 arg, ::FlatData::ShopCategoryType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ShopCategoryType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPEXCELDATASBYKEYPAIR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetShopExcelDatasByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPEXCELDATASBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetShopRefreshExcelData(::System::Int64 arg, ::MX::Data::ShopRefreshExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ShopRefreshExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPREFRESHEXCELDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetShopRefreshExcelDatasByKeyPair(::System::Int64 arg, ::FlatData::ShopCategoryType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ShopCategoryType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPREFRESHEXCELDATASBYKEYPAIR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetShopRefreshExcelDatasByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPREFRESHEXCELDATASBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::GoodsExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::GoodsExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelCost&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelCost&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetValueGoodsCost(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelCost&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETVALUEGOODSCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetGoodsParcelInfos(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETGOODSPARCELINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetGoodsConsumeExtraMaxAmount(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETGOODSCONSUMEEXTRAMAXAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* TryGetValueByType(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETVALUEBYTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Data::ShopExcelData* FindShopExcelData(::System::Int64 arg)
		{
			return (return (::MX::Data::ShopExcelData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDSHOPEXCELDATA_OFFSET))(arg, nullptr);
		}

		::MX::Data::ShopRefreshExcelData* FindShopRefreshExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::ShopRefreshExcelData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDSHOPREFRESHEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopRecruitExcel* FindShopRecruitExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDSHOPRECRUITEXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CharacterProfile(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_CHARACTERPROFILE_OFFSET))(arg, nullptr);
		}

		::System::String* GetGachaTabString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHATABSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetGachaTitleNameString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHATITLENAMESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetGachaSubTitleString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHASUBTITLESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetGachaDescriptionString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHADESCRIPTIONSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetShopFilterClassifiedExcelByGoodsId(::System::Int64 arg, ::MX::Data::Excel::ShopFilterClassifiedExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ShopFilterClassifiedExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPFILTERCLASSIFIEDEXCELBYGOODSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetGachaCategoryTypeListAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHACATEGORYTYPELISTALL_OFFSET))(nullptr);
		}

		Il2CppObject* GetSelectPickupGachaCategoryTypeList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSELECTPICKUPGACHACATEGORYTYPELIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetNewbieDateLimitedGachaAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETNEWBIEDATELIMITEDGACHAALL_OFFSET))(nullptr);
		}

		::System::Boolean IsSelectionPickupGacha(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISSELECTIONPICKUPGACHA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetShopCategoryTypeList(::FlatData::ShopCategoryType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSHOPCATEGORYTYPELIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindShopRefreshExcelDatasByShopCategoryType(::System::Int64 arg, ::FlatData::ShopCategoryType* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDSHOPREFRESHEXCELDATASBYSHOPCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GoodsExcel* FindGoods(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::GoodsExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDGOODS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindGoodsCostAndReward(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDGOODSCOSTANDREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetGachaTicketType(::System::Int64 arg, ::FlatData::GachaTicketType&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::GachaTicketType&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETGACHATICKETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetGachaTicketAmount(::System::Int64 arg, int64_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETGACHATICKETAMOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_HASDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasRecruitData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_HASRECRUITDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasGachaGroup(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_HASGACHAGROUP_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaGroupExcel* GetGachaGroup(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::GachaGroupExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHAGROUP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGachaGroupTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHAGROUPTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetGachaGroupByGroupType(::FlatData::GachaGroupType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::GachaGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHAGROUPBYGROUPTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Data::GachaElement* GetGachaElementByUniqueId(::System::Int64 arg)
		{
			return (return (::MX::Data::GachaElement*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHAELEMENTBYUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGachaElementsByGroup(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHAELEMENTSBYGROUP_OFFSET))(arg, nullptr);
		}

		::MX::Data::GachaPopulation* GetGachaElementsAndProbSumByGroupId(::System::Int64 arg)
		{
			return (return (::MX::Data::GachaPopulation*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHAELEMENTSANDPROBSUMBYGROUPID_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* GetGachaGroupParcelType(::System::Int64 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHAGROUPPARCELTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetShopRefreshExcelListByCategory(::System::Int64 arg, ::FlatData::ShopCategoryType* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSHOPREFRESHEXCELLISTBYCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetShopExcelByShopCategory(::System::Int64 arg, ::FlatData::ShopCategoryType* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSHOPEXCELBYSHOPCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::ShopInfoExcelData* GetShopInfoExcelDataByShopType(::System::Int64 arg, ::FlatData::ShopCategoryType* arg)
		{
			return (return (::MX::Data::ShopInfoExcelData*(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSHOPINFOEXCELDATABYSHOPTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetPickupDuplicateBounsExcelDataList(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETPICKUPDUPLICATEBOUNSEXCELDATALIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPickupDuplicateBonusExcelDataDictionary(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETPICKUPDUPLICATEBONUSEXCELDATADICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetPickUpBonusReward(::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETPICKUPBONUSREWARD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* FindShopByDirectPayInvisibleTokenId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_FINDSHOPBYDIRECTPAYINVISIBLETOKENID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetShopInfoExcelDataListByEventContentId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSHOPINFOEXCELDATALISTBYEVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GachaElementGroupIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GET_GACHAELEMENTGROUPIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopKeys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GET_SHOPKEYS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopRefreshKeys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GET_SHOPREFRESHKEYS_OFFSET))(nullptr);
		}

		::System::Boolean HasGoodsId(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_HASGOODSID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsShopRecruitOpen(::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISSHOPRECRUITOPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanPurchaseByPackageThreeStarType(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_CANPURCHASEBYPACKAGETHREESTARTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsParticularPackageGachaTicketType(::FlatData::GachaTicketType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISPARTICULARPACKAGEGACHATICKETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanPurchaseByGachaTicketType(::MX::Data::Excel::ShopRecruitExcel* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ShopRecruitExcel*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_CANPURCHASEBYGACHATICKETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsShopProductOpen(::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISSHOPPRODUCTOPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsRefreshShopOpen(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISREFRESHSHOPOPEN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGoodsConsumeParcelInfos(::MX::Data::Excel::GoodsExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::GoodsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGOODSCONSUMEPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetCurrentStepConsumeExtraAmount(::MX::Data::Excel::GoodsExcel* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::MX::Data::Excel::GoodsExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETCURRENTSTEPCONSUMEEXTRAAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetConsumeExtraAmountList(::MX::Data::Excel::GoodsExcel* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::GoodsExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETCONSUMEEXTRAAMOUNTLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetMerchandiseRewards(::MX::Data::Excel::GoodsExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::GoodsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETMERCHANDISEREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetGoodsId(::Il2CppArray<::System::Object*>* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGOODSID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsActionPointParcelGoods(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISACTIONPOINTPARCELGOODS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGoodsTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGOODSTABLE_OFFSET))(nullptr);
		}

		::System::Void ShopRecruitChangeDataCheck(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_SHOPRECRUITCHANGEDATACHECK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFreeRecruitDatas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETFREERECRUITDATAS_OFFSET))(nullptr);
		}

		::MX::Data::ShopFreeRecruitExcelData* GetFreeRecruitData(::System::Int64 arg)
		{
			return (return (::MX::Data::ShopFreeRecruitExcelData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETFREERECRUITDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFreeRecruitDataFromShopRecruitGoodsId(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETFREERECRUITDATAFROMSHOPRECRUITGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::ShopFreeRecruitExcelData* GetFreeRecruitDataFromShopRecruitGoodId(::System::DateTime* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::ShopFreeRecruitExcelData*(*)(::System::DateTime*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETFREERECRUITDATAFROMSHOPRECRUITGOODID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetFreeRecruitDataFromShopRecruitGoodId(::System::DateTime* arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::Data::ShopFreeRecruitExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int64, ::System::Int64, ::MX::Data::ShopFreeRecruitExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETFREERECRUITDATAFROMSHOPRECRUITGOODID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetShopRecruitByShopCashId(::System::DateTime* arg, ::System::Int64 arg, ::MX::Data::ShopRecruitExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int64, ::MX::Data::ShopRecruitExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETSHOPRECRUITBYSHOPCASHID_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* GetCategoryShopParcelCost(::FlatData::ShopCategoryType* arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETCATEGORYSHOPPARCELCOST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPickupSelectCandidates(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETPICKUPSELECTCANDIDATES_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetPickupFirstGetBonus(::System::Int64 arg, ::MX::Data::PickupFirstGetBonusExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::PickupFirstGetBonusExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPickupFirstGetBonusByCharacterId(::System::Int64 arg, ::System::DateTime* arg, ::MX::Data::PickupFirstGetBonusExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::DateTime*, ::MX::Data::PickupFirstGetBonusExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUSBYCHARACTERID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetPickupFirstGetBonus(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::PickupFirstGetBonusExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::PickupFirstGetBonusExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetPickupFirstGetBonusForPickupSelection(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUSFORPICKUPSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPickupFirstGetBonusForPickupSelection(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUSFORPICKUPSELECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetPickupFirstGetBonusForPickupSelection(::System::Int64 arg, ::System::Int64 arg, Il2CppObject* arg, ::MX::Data::PickupFirstGetBonusExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::MX::Data::PickupFirstGetBonusExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETPICKUPFIRSTGETBONUSFORPICKUPSELECTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetPickupFirstGetBonusList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETPICKUPFIRSTGETBONUSLIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetPickupFirstGetBonusData(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETPICKUPFIRSTGETBONUSDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPickupFirstGetBonusForPickupSelectionKeys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETPICKUPFIRSTGETBONUSFORPICKUPSELECTIONKEYS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCharacterIdForGachaGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_TRYGETCHARACTERIDFORGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetShopTabGroupExcelListByDisplayOrder()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSHOPTABGROUPEXCELLISTBYDISPLAYORDER_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopCategoryListInShopGroupType(::FlatData::ShopGroupType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSHOPCATEGORYLISTINSHOPGROUPTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopGroupType* GetShopGroupTypeByShopCategoryType(::FlatData::ShopCategoryType* arg)
		{
			return (return (::FlatData::ShopGroupType*(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETSHOPGROUPTYPEBYSHOPCATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGachaCombinedCostList(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHACOMBINEDCOSTLIST_OFFSET))(arg, nullptr);
		}

		::MX::Data::GachaCombinedCostDataInfo* GetGachaCombinedCostData(::System::Int64 arg)
		{
			return (return (::MX::Data::GachaCombinedCostDataInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHACOMBINEDCOSTDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPackageGachaTicketType(::FlatData::GachaTicketType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISPACKAGEGACHATICKETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPackageThreeStarCategryGachaTicketType(::FlatData::GachaTicketType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_ISPACKAGETHREESTARCATEGRYGACHATICKETTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNewbieRecruitCandidates(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETNEWBIERECRUITCANDIDATES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGachaGoodsList(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_GETGACHAGOODSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _FindAllAvailableCharacterIds_b__49_0(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return (return (Il2CppObject*(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPDATA__FINDALLAVAILABLECHARACTERIDS_B__49_0_OFFSET))(arg, nullptr);
		}

	};
}

