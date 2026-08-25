#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ShopCashExcel; }
namespace FlatData { class ProductCategory; }
namespace FlatData { class StoreType; }
namespace FlatData { class GachaTicketType; }
namespace MX::Data::Excel { class ShopCashExcel&; }

#define MX_DATA_SHOPCASHDATA_GET__SHOPCASHSCENARIORESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x193F420)
#define MX_DATA_SHOPCASHDATA_SET__SHOPCASHSCENARIORESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x193F430)
#define MX_DATA_SHOPCASHDATA_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x193F440)
#define MX_DATA_SHOPCASHDATA_SET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x193F450)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTMONTHLY_OFFSET UNITYSDK_OFFSET(0x193F460)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTMONTHLY_OFFSET UNITYSDK_OFFSET(0x193F470)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x193F480)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x193F490)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x193F4A0)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x193F4B0)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTDAILYRECORD_OFFSET UNITYSDK_OFFSET(0x193F4C0)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTDAILYRECORD_OFFSET UNITYSDK_OFFSET(0x193F4D0)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCT_OFFSET UNITYSDK_OFFSET(0x193F4E0)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCT_OFFSET UNITYSDK_OFFSET(0x193F4F0)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTGOOGLEPOINTBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x193F500)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTGOOGLEPOINTBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x193F510)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTGOOGLEPOINT_OFFSET UNITYSDK_OFFSET(0x193F520)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTGOOGLEPOINT_OFFSET UNITYSDK_OFFSET(0x193F530)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTPCSTORE_OFFSET UNITYSDK_OFFSET(0x193F540)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTPCSTORE_OFFSET UNITYSDK_OFFSET(0x193F550)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTPCSTOREBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x193F560)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTPCSTOREBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x193F570)
#define MX_DATA_SHOPCASHDATA_GET__SHOPCASHEXCELIDSBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x193F580)
#define MX_DATA_SHOPCASHDATA_SET__SHOPCASHEXCELIDSBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x193F590)
#define MX_DATA_SHOPCASHDATA_GET__PRODUCTKEYINFOBYSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x193F5A0)
#define MX_DATA_SHOPCASHDATA_SET__PRODUCTKEYINFOBYSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x193F5B0)
#define MX_DATA_SHOPCASHDATA_GET__SHOPCASHEXCELBYLIMITEDFLASHSALE_OFFSET UNITYSDK_OFFSET(0x193F5D0)
#define MX_DATA_SHOPCASHDATA_SET__SHOPCASHEXCELBYLIMITEDFLASHSALE_OFFSET UNITYSDK_OFFSET(0x193F5E0)
#define MX_DATA_SHOPCASHDATA_GET__LIMITEDFLASHSALESHOPCASHIDS_OFFSET UNITYSDK_OFFSET(0x193F600)
#define MX_DATA_SHOPCASHDATA_SET__LIMITEDFLASHSALESHOPCASHIDS_OFFSET UNITYSDK_OFFSET(0x193F610)
#define MX_DATA_SHOPCASHDATA_GET__LIMITEDFLASHSALESGROUPIDBYSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x193F630)
#define MX_DATA_SHOPCASHDATA_SET__LIMITEDFLASHSALESGROUPIDBYSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x193F640)
#define MX_DATA_SHOPCASHDATA_GET_PIDTOPRODUCTIDS_OFFSET UNITYSDK_OFFSET(0x193F660)
#define MX_DATA_SHOPCASHDATA_SET_PIDTOPRODUCTIDS_OFFSET UNITYSDK_OFFSET(0x193F670)
#define MX_DATA_SHOPCASHDATA_GET__BILLINGDATA_OFFSET UNITYSDK_OFFSET(0x193F690)
#define MX_DATA_SHOPCASHDATA_SET__BILLINGDATA_OFFSET UNITYSDK_OFFSET(0x193F6A0)
#define MX_DATA_SHOPCASHDATA_GET__STEAMPIDTOPID_OFFSET UNITYSDK_OFFSET(0x193F6C0)
#define MX_DATA_SHOPCASHDATA_SET__STEAMPIDTOPID_OFFSET UNITYSDK_OFFSET(0x193F6D0)
#define MX_DATA_SHOPCASHDATA_GET__PIDTOSTEAMPID_OFFSET UNITYSDK_OFFSET(0x193F6F0)
#define MX_DATA_SHOPCASHDATA_SET__PIDTOSTEAMPID_OFFSET UNITYSDK_OFFSET(0x193F700)
#define MX_DATA_SHOPCASHDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x193F720)
#define MX_DATA_SHOPCASHDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x193F7C0)
#define MX_DATA_SHOPCASHDATA_GETPRODUCT_OFFSET UNITYSDK_OFFSET(0x1940020)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x19400B0)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTMONTHLY_OFFSET UNITYSDK_OFFSET(0x1940160)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x1940210)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTDAILYRECORD_OFFSET UNITYSDK_OFFSET(0x19402A0)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTGOOGLEPOINT_OFFSET UNITYSDK_OFFSET(0x1940350)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTGOOGLEPOINT_OFFSET UNITYSDK_OFFSET(0x19403E0)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTPCSTORE_OFFSET UNITYSDK_OFFSET(0x1940470)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTPCSTORE_OFFSET UNITYSDK_OFFSET(0x1940500)
#define MX_DATA_SHOPCASHDATA_GETPRODUCTANDCACHE_OFFSET UNITYSDK_OFFSET(0x1940590)
#define MX_DATA_SHOPCASHDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x1941B10)
#define MX_DATA_SHOPCASHDATA_HASDATA_OFFSET UNITYSDK_OFFSET(0x1943360)
#define MX_DATA_SHOPCASHDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1943420)
#define MX_DATA_SHOPCASHDATA_GETORDEREDDATALISTBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x19434B0)
#define MX_DATA_SHOPCASHDATA_GETALLFREESHOPCASHEXCELS_OFFSET UNITYSDK_OFFSET(0x1943780)
#define MX_DATA_SHOPCASHDATA_GETBILLINGPRODUCT_OFFSET UNITYSDK_OFFSET(0x1943E70)
#define MX_DATA_SHOPCASHDATA_GETBILLINGPRODUCT_OFFSET UNITYSDK_OFFSET(0x1943EE0)
#define MX_DATA_SHOPCASHDATA_BILLINGDATAPROCESS_OFFSET UNITYSDK_OFFSET(0x1944690)
#define MX_DATA_SHOPCASHDATA_GETBILLINGPRODUCTIDLIST_OFFSET UNITYSDK_OFFSET(0x1944740)
#define MX_DATA_SHOPCASHDATA_GETSTEAMPID_OFFSET UNITYSDK_OFFSET(0x19449B0)
#define MX_DATA_SHOPCASHDATA_STEAMPIDTOPID_OFFSET UNITYSDK_OFFSET(0x1944A50)
#define MX_DATA_SHOPCASHDATA_PIDTOSTEAMPID_OFFSET UNITYSDK_OFFSET(0x1944AB0)
#define MX_DATA_SHOPCASHDATA_GETBILLINGPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1943F50)
#define MX_DATA_SHOPCASHDATA_GETSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1944B10)
#define MX_DATA_SHOPCASHDATA_GETSHOPCASHSCENARIORESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x19451B0)
#define MX_DATA_SHOPCASHDATA_FINDPRODUCTCATEGORYFORGACHATICKET_OFFSET UNITYSDK_OFFSET(0x1945290)
#define MX_DATA_SHOPCASHDATA_TRYGETSHOPCASHEXCELBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x19460B0)
#define MX_DATA_SHOPCASHDATA_TRYGETSHOPCASHIDBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1946380)
#define MX_DATA_SHOPCASHDATA_GETOTHERSTORESHOPCASHIDS_OFFSET UNITYSDK_OFFSET(0x1946700)
#define MX_DATA_SHOPCASHDATA_GETSHOPCASHIDSBYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1946820)
#define MX_DATA_SHOPCASHDATA_TRYGETPRODUCTKEYINFO_OFFSET UNITYSDK_OFFSET(0x19466A0)
#define MX_DATA_SHOPCASHDATA_TRYGETLIMITEDFLASHSALESHOPCASHGROUPID_OFFSET UNITYSDK_OFFSET(0x19468B0)
#define MX_DATA_SHOPCASHDATA_TRYGETLIMITEDFLASHSALESHOPCASHEXCEL_OFFSET UNITYSDK_OFFSET(0x1946910)
#define MX_DATA_SHOPCASHDATA_GETSHOPCASHIDSBYLIMITEDFLASHSALEGROUPID_OFFSET UNITYSDK_OFFSET(0x19469B0)
#define MX_DATA_SHOPCASHDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1946BC0)
#define MX_DATA_SHOPCASHDATA__GETPRODUCTANDCACHE_G__ADD_GL_BILLINGID|93_0_OFFSET UNITYSDK_OFFSET(0x1941820)
#define MX_DATA_SHOPCASHDATA__PREPROCESSCOMMON_G__MERGELIMITEDFLASHSALEGROUPIDS|94_0_OFFSET UNITYSDK_OFFSET(0x1942FF0)
#define MX_DATA_SHOPCASHDATA__PREPROCESSCOMMON_B__94_1_OFFSET UNITYSDK_OFFSET(0x19471F0)

namespace MX::Data
{
	inline static constexpr unsigned int ShopCashData_TypeDefinitionIndex = 16381;

	class ShopCashData : public Il2CppObject
	{
	public:
		Il2CppObject* __shopCashScenarioResourceInfo_k__BackingField; // 0x28
		Il2CppObject* _Dictionary_k__BackingField; // 0x30
		Il2CppObject* __productMonthly_k__BackingField; // 0x38
		Il2CppObject* __productBattlePass_k__BackingField; // 0x40
		Il2CppObject* __productSelect_k__BackingField; // 0x48
		Il2CppObject* __productDailyRecord_k__BackingField; // 0x50
		Il2CppObject* __product_k__BackingField; // 0x58
		Il2CppObject* __productGooglePointByProductId_k__BackingField; // 0x60
		Il2CppObject* __productGooglePoint_k__BackingField; // 0x68
		Il2CppObject* __productPCStore_k__BackingField; // 0x70
		Il2CppObject* __productPCStoreByProductId_k__BackingField; // 0x78
		Il2CppObject* __shopCashExcelIdsByProductId_k__BackingField; // 0x80
		Il2CppObject* __productKeyInfoByShopCashId_k__BackingField; // 0x88
		Il2CppObject* __shopCashExcelByLimitedFlashSale_k__BackingField; // 0x90
		Il2CppObject* __limitedFlashSaleShopCashIds_k__BackingField; // 0x98
		Il2CppObject* __limitedFlashSalesGroupIdByShopCashId_k__BackingField; // 0xA0
		::System::Int64 _notFoundId; // 0x0
		Il2CppObject* _PidToProductIds_k__BackingField; // 0xA8
		Il2CppObject* __billingData_k__BackingField; // 0xB0
		Il2CppObject* __SteamPIDtoPID_k__BackingField; // 0xB8
		Il2CppObject* __PIDtoSteamPID_k__BackingField; // 0xC0

		Il2CppObject* get__shopCashScenarioResourceInfo()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__SHOPCASHSCENARIORESOURCEINFO_OFFSET))(nullptr);
		}

		::System::Void set__shopCashScenarioResourceInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__SHOPCASHSCENARIORESOURCEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Dictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET_DICTIONARY_OFFSET))(nullptr);
		}

		::System::Void set_Dictionary(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET_DICTIONARY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productMonthly()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTMONTHLY_OFFSET))(nullptr);
		}

		::System::Void set__productMonthly(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTMONTHLY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productBattlePass()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTBATTLEPASS_OFFSET))(nullptr);
		}

		::System::Void set__productBattlePass(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTBATTLEPASS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productSelect()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTSELECT_OFFSET))(nullptr);
		}

		::System::Void set__productSelect(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTSELECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productDailyRecord()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTDAILYRECORD_OFFSET))(nullptr);
		}

		::System::Void set__productDailyRecord(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTDAILYRECORD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__product()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCT_OFFSET))(nullptr);
		}

		::System::Void set__product(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productGooglePointByProductId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTGOOGLEPOINTBYPRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set__productGooglePointByProductId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTGOOGLEPOINTBYPRODUCTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productGooglePoint()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTGOOGLEPOINT_OFFSET))(nullptr);
		}

		::System::Void set__productGooglePoint(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTGOOGLEPOINT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productPCStore()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTPCSTORE_OFFSET))(nullptr);
		}

		::System::Void set__productPCStore(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTPCSTORE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productPCStoreByProductId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTPCSTOREBYPRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set__productPCStoreByProductId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTPCSTOREBYPRODUCTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__shopCashExcelIdsByProductId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__SHOPCASHEXCELIDSBYPRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set__shopCashExcelIdsByProductId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__SHOPCASHEXCELIDSBYPRODUCTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__productKeyInfoByShopCashId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PRODUCTKEYINFOBYSHOPCASHID_OFFSET))(nullptr);
		}

		::System::Void set__productKeyInfoByShopCashId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PRODUCTKEYINFOBYSHOPCASHID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__shopCashExcelByLimitedFlashSale()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__SHOPCASHEXCELBYLIMITEDFLASHSALE_OFFSET))(nullptr);
		}

		::System::Void set__shopCashExcelByLimitedFlashSale(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__SHOPCASHEXCELBYLIMITEDFLASHSALE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__limitedFlashSaleShopCashIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__LIMITEDFLASHSALESHOPCASHIDS_OFFSET))(nullptr);
		}

		::System::Void set__limitedFlashSaleShopCashIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__LIMITEDFLASHSALESHOPCASHIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__limitedFlashSalesGroupIdByShopCashId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__LIMITEDFLASHSALESGROUPIDBYSHOPCASHID_OFFSET))(nullptr);
		}

		::System::Void set__limitedFlashSalesGroupIdByShopCashId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__LIMITEDFLASHSALESGROUPIDBYSHOPCASHID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PidToProductIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET_PIDTOPRODUCTIDS_OFFSET))(nullptr);
		}

		::System::Void set_PidToProductIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET_PIDTOPRODUCTIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__billingData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__BILLINGDATA_OFFSET))(nullptr);
		}

		::System::Void set__billingData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__BILLINGDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__SteamPIDtoPID()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__STEAMPIDTOPID_OFFSET))(nullptr);
		}

		::System::Void set__SteamPIDtoPID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__STEAMPIDTOPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__PIDtoSteamPID()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GET__PIDTOSTEAMPID_OFFSET))(nullptr);
		}

		::System::Void set__PIDtoSteamPID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_SET__PIDTOSTEAMPID_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetProduct(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductSelect(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTSELECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductMonthly(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTMONTHLY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductBattlePass(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTBATTLEPASS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductDailyRecord(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTDAILYRECORD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductGooglePoint(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTGOOGLEPOINT_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetProductGooglePoint(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTGOOGLEPOINT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductPCStore(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTPCSTORE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductPCStore(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTPCSTORE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetProductAndCache(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETPRODUCTANDCACHE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean HasData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_HASDATA_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopCashExcel* GetData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::ShopCashExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrderedDataListByCategory(::FlatData::ProductCategory* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ProductCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETORDEREDDATALISTBYCATEGORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllFreeShopCashExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETALLFREESHOPCASHEXCELS_OFFSET))(nullptr);
		}

		BillingProductData* GetBillingProduct(::System::String* str)
		{
			return (return (BillingProductData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETBILLINGPRODUCT_OFFSET))(str, nullptr);
		}

		BillingProductData* GetBillingProduct(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (BillingProductData*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETBILLINGPRODUCT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BillingDataProcess(::System::String* str, ::System::String* str, ::System::Int64 arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int64, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_BILLINGDATAPROCESS_OFFSET))(str, str, arg, str, arg, nullptr);
		}

		Il2CppObject* GetBillingProductIdList(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETBILLINGPRODUCTIDLIST_OFFSET))(arg, nullptr);
		}

		::System::String* GetSteamPID(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETSTEAMPID_OFFSET))(str, nullptr);
		}

		::System::String* SteamPIDtoPID(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_STEAMPIDTOPID_OFFSET))(str, nullptr);
		}

		::System::String* PIDtoSteamPID(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_PIDTOSTEAMPID_OFFSET))(str, nullptr);
		}

		::System::String* GetBillingProductId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETBILLINGPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetShopCashId(::FlatData::StoreType* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int64(*)(::FlatData::StoreType*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETSHOPCASHID_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* GetShopCashScenarioResourceInfo(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETSHOPCASHSCENARIORESOURCEINFO_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ProductCategory* FindProductCategoryForGachaTicket(::System::DateTime* arg, ::FlatData::StoreType* arg, ::FlatData::GachaTicketType* arg)
		{
			return (return (::FlatData::ProductCategory*(*)(::System::DateTime*, ::FlatData::StoreType*, ::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_FINDPRODUCTCATEGORYFORGACHATICKET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetShopCashExcelByProductId(::System::String* str, ::FlatData::StoreType* arg, ::MX::Data::Excel::ShopCashExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::FlatData::StoreType*, ::MX::Data::Excel::ShopCashExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_TRYGETSHOPCASHEXCELBYPRODUCTID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryGetShopCashIdByProductId(::System::String* str, ::FlatData::StoreType* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::FlatData::StoreType*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_TRYGETSHOPCASHIDBYPRODUCTID_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetOtherStoreShopCashIds(::System::String* str, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETOTHERSTORESHOPCASHIDS_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetShopCashIdsByProductId(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETSHOPCASHIDSBYPRODUCTID_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetProductKeyInfo(::System::Int64 arg, ProductKeyInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ProductKeyInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_TRYGETPRODUCTKEYINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLimitedFlashSaleShopCashGroupId(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_TRYGETLIMITEDFLASHSALESHOPCASHGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLimitedFlashSaleShopCashExcel(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_TRYGETLIMITEDFLASHSALESHOPCASHEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetShopCashIdsByLimitedFlashSaleGroupId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_GETSHOPCASHIDSBYLIMITEDFLASHSALEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _GetProductAndCache_g__Add_GL_BillingID|93_0(::System::Int64 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA__GETPRODUCTANDCACHE_G__ADD_GL_BILLINGID|93_0_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void _PreprocessCommon_g__MergeLimitedFlashSaleGroupIds|94_0(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA__PREPROCESSCOMMON_G__MERGELIMITEDFLASHSALEGROUPIDS|94_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _PreprocessCommon_b__94_1(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATA__PREPROCESSCOMMON_B__94_1_OFFSET))(arg, nullptr);
		}

	};
}

