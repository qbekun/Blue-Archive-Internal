#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopCashExcel; }
namespace FlatData { class PurchaseSourceType; }
namespace FlatData { class TargetGroup; }
namespace FlatData { class ProductCategory; }
namespace FlatData { class ProductDisplayTag; }
namespace FlatData { class ProductSaleType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C71130)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GETROOTASSHOPCASHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C71140)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GETROOTASSHOPCASHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C711A0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C71230)
#define MX_DATA_EXCEL_SHOPCASHEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C71200)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C71250)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_CASHPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C712A0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PACKAGETYPE_OFFSET UNITYSDK_OFFSET(0x1C712F0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1C71340)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C71390)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_INMAILPURCHASELOCK_OFFSET UNITYSDK_OFFSET(0x1C713E0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_USEMAILPARCEL_OFFSET UNITYSDK_OFFSET(0x1C71430)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C71480)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C714C0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C714E0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_RENEWALDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C71530)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C71580)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_DISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1C715D0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PRODUCTSALETYPE_OFFSET UNITYSDK_OFFSET(0x1C71620)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C71670)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GETSALEPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C716B0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C716D0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GETSALEPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x1C71710)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PRODUCTSALEDAY_OFFSET UNITYSDK_OFFSET(0x1C71730)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PERIODTAG_OFFSET UNITYSDK_OFFSET(0x1C71780)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ACCOUNTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x1C717D0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ACCOUNTLEVELHIDE_OFFSET UNITYSDK_OFFSET(0x1C71820)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_CLEARMISSIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1C71870)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_CLEARMISSIONHIDE_OFFSET UNITYSDK_OFFSET(0x1C718C0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PURCHASEREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C71910)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GETPURCHASEREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C71950)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PACKAGECLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C71970)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ISSTARTDASH_OFFSET UNITYSDK_OFFSET(0x1C719C0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_GET_VIEWFLAG_OFFSET UNITYSDK_OFFSET(0x1C71A10)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_CREATESHOPCASHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C71A60)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_STARTSHOPCASHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C723A0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C71FC0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDCASHPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C71F90)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPACKAGETYPE_OFFSET UNITYSDK_OFFSET(0x1C721D0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1C721A0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C72170)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDINMAILPURCHASELOCK_OFFSET UNITYSDK_OFFSET(0x1C72320)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDUSEMAILPARCEL_OFFSET UNITYSDK_OFFSET(0x1C722F0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1C72140)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C71F60)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDRENEWALDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C71F30)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C72110)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1C720E0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPRODUCTSALETYPE_OFFSET UNITYSDK_OFFSET(0x1C720B0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDSALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C72080)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDSALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C72050)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPRODUCTSALEDAY_OFFSET UNITYSDK_OFFSET(0x1C71F00)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPERIODTAG_OFFSET UNITYSDK_OFFSET(0x1C722C0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDACCOUNTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x1C71ED0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDACCOUNTLEVELHIDE_OFFSET UNITYSDK_OFFSET(0x1C72290)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDCLEARMISSIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1C71EA0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDCLEARMISSIONHIDE_OFFSET UNITYSDK_OFFSET(0x1C72260)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPURCHASEREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C72020)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPACKAGECLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C71FF0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDISSTARTDASH_OFFSET UNITYSDK_OFFSET(0x1C72230)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ADDVIEWFLAG_OFFSET UNITYSDK_OFFSET(0x1C72200)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_ENDSHOPCASHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C72350)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_FINISHSHOPCASHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C723C0)
#define MX_DATA_EXCEL_SHOPCASHEXCEL_FINISHSIZEPREFIXEDSHOPCASHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C723E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopCashExcel_TypeDefinitionIndex = 19367;

	class ShopCashExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopCashExcel* GetRootAsShopCashExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopCashExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GETROOTASSHOPCASHEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopCashExcel* GetRootAsShopCashExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopCashExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GETROOTASSHOPCASHEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopCashExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopCashExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CashProductId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_CASHPRODUCTID_OFFSET))(nullptr);
		}

		::FlatData::PurchaseSourceType* get_PackageType()
		{
			return (return (::FlatData::PurchaseSourceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PACKAGETYPE_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Boolean get_InMailPurchaseLock()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_INMAILPURCHASELOCK_OFFSET))(nullptr);
		}

		::System::Boolean get_UseMailParcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_USEMAILPARCEL_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_RenewalDisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_RENEWALDISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::ProductCategory* get_CategoryType()
		{
			return (return (::FlatData::ProductCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::FlatData::ProductDisplayTag* get_DisplayTag()
		{
			return (return (::FlatData::ProductDisplayTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_DISPLAYTAG_OFFSET))(nullptr);
		}

		::FlatData::ProductSaleType* get_ProductSaleType()
		{
			return (return (::FlatData::ProductSaleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PRODUCTSALETYPE_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_SALEPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GETSALEPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_SALEPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GETSALEPERIODTOBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductSaleDay()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PRODUCTSALEDAY_OFFSET))(nullptr);
		}

		::System::Boolean get_PeriodTag()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PERIODTAG_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevelLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ACCOUNTLEVELLIMIT_OFFSET))(nullptr);
		}

		::System::Boolean get_AccountLevelHide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ACCOUNTLEVELHIDE_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearMissionLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_CLEARMISSIONLIMIT_OFFSET))(nullptr);
		}

		::System::Boolean get_ClearMissionHide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_CLEARMISSIONHIDE_OFFSET))(nullptr);
		}

		::System::String* get_PurchaseReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PURCHASEREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPurchaseReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GETPURCHASEREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::PurchaseSourceType* get_PackageClientType()
		{
			return (return (::FlatData::PurchaseSourceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_PACKAGECLIENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStartDash()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_ISSTARTDASH_OFFSET))(nullptr);
		}

		::System::Boolean get_ViewFlag()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_GET_VIEWFLAG_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopCashExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::PurchaseSourceType* arg, ::FlatData::TargetGroup* arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ProductCategory* arg, ::FlatData::ProductDisplayTag* arg, ::FlatData::ProductSaleType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatData::PurchaseSourceType* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::PurchaseSourceType*, ::FlatData::TargetGroup*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatData::ProductCategory*, ::FlatData::ProductDisplayTag*, ::FlatData::ProductSaleType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatData::PurchaseSourceType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_CREATESHOPCASHEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopCashExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_STARTSHOPCASHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCashProductId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDCASHPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPackageType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PurchaseSourceType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PurchaseSourceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPACKAGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDTARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInMailPurchaseLock(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDINMAILPURCHASELOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseMailParcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDUSEMAILPARCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRenewalDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDRENEWALDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductDisplayTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductDisplayTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDDISPLAYTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductSaleType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductSaleType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductSaleType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPRODUCTSALETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDSALEPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDSALEPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductSaleDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPRODUCTSALEDAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPeriodTag(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPERIODTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevelLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDACCOUNTLEVELLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevelHide(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDACCOUNTLEVELHIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearMissionLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDCLEARMISSIONLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearMissionHide(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDCLEARMISSIONHIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPURCHASEREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPackageClientType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PurchaseSourceType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PurchaseSourceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDPACKAGECLIENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsStartDash(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDISSTARTDASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddViewFlag(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ADDVIEWFLAG_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopCashExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_ENDSHOPCASHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopCashExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_FINISHSHOPCASHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopCashExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCEL_FINISHSIZEPREFIXEDSHOPCASHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

