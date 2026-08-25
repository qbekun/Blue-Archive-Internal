#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopInfoExcel; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ParcelType; }
namespace FlatData { class ShopRefresherType; }
namespace FlatData { class ShopRefreshPeriodType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7A770)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETROOTASSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7A780)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETROOTASSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7A7E0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C7A870)
#define MX_DATA_EXCEL_SHOPINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C7A840)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C7A890)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_ISREFRESH_OFFSET UNITYSDK_OFFSET(0x1C7A8E0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_ISSOLDOUTDIMMED_OFFSET UNITYSDK_OFFSET(0x1C7A930)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_COSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C7A980)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_COSTPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C7A9E0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETCOSTPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C7AA20)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_COSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1C7AA40)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_COSTPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C7AAA0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETCOSTPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C7AAE0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_AUTOREFRESHCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C7AB00)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPREFRESHERTYPE_OFFSET UNITYSDK_OFFSET(0x1C7AB50)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPREFRESHPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x1C7ABA0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_REFRESHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C7ABF0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C7AC40)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_GOODSIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C7ACA0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETGOODSIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C7ACE0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_OPENPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C7AD00)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETOPENPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C7AD40)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_OPENPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C7AD60)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETOPENPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x1C7ADA0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_REFRESHPERIODBASETIME_OFFSET UNITYSDK_OFFSET(0x1C7ADC0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETREFRESHPERIODBASETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C7AE00)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPPRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1C7AE20)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GETSHOPPRODUCTUPDATETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C7AE60)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_DISPLAYPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C7AE80)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_DISPLAYPARCELID_OFFSET UNITYSDK_OFFSET(0x1C7AED0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_ISSHOPVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C7AF20)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C7AF70)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x1C7AFC0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID1_OFFSET UNITYSDK_OFFSET(0x1C7B010)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID2_OFFSET UNITYSDK_OFFSET(0x1C7B060)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID3_OFFSET UNITYSDK_OFFSET(0x1C7B0B0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID4_OFFSET UNITYSDK_OFFSET(0x1C7B100)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID5_OFFSET UNITYSDK_OFFSET(0x1C7B150)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID6_OFFSET UNITYSDK_OFFSET(0x1C7B1A0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID7_OFFSET UNITYSDK_OFFSET(0x1C7B1F0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID8_OFFSET UNITYSDK_OFFSET(0x1C7B240)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID9_OFFSET UNITYSDK_OFFSET(0x1C7B290)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID10_OFFSET UNITYSDK_OFFSET(0x1C7B2E0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID11_OFFSET UNITYSDK_OFFSET(0x1C7B330)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID12_OFFSET UNITYSDK_OFFSET(0x1C7B380)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_CREATESHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7B3D0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_STARTSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7BF30)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C7BE20)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDISREFRESH_OFFSET UNITYSDK_OFFSET(0x1C7BEB0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDISSOLDOUTDIMMED_OFFSET UNITYSDK_OFFSET(0x1C7BE80)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C7BDF0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_CREATECOSTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7BF50)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_STARTCOSTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7BFE0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1C7BDC0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_CREATECOSTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7C020)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_STARTCOSTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7C0B0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDAUTOREFRESHCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C7B970)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPREFRESHERTYPE_OFFSET UNITYSDK_OFFSET(0x1C7BD90)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPREFRESHPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x1C7BD60)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDREFRESHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C7B940)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1C7BD30)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_CREATEGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7C0F0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_STARTGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7C180)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDOPENPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C7BD00)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDOPENPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C7BCD0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDREFRESHPERIODBASETIME_OFFSET UNITYSDK_OFFSET(0x1C7BCA0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPPRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1C7BC70)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDDISPLAYPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C7BC40)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDDISPLAYPARCELID_OFFSET UNITYSDK_OFFSET(0x1C7B910)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDISSHOPVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C7BE50)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C7BC10)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x1C7BBE0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID1_OFFSET UNITYSDK_OFFSET(0x1C7BBB0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID2_OFFSET UNITYSDK_OFFSET(0x1C7BB80)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID3_OFFSET UNITYSDK_OFFSET(0x1C7BB50)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID4_OFFSET UNITYSDK_OFFSET(0x1C7BB20)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID5_OFFSET UNITYSDK_OFFSET(0x1C7BAF0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID6_OFFSET UNITYSDK_OFFSET(0x1C7BAC0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID7_OFFSET UNITYSDK_OFFSET(0x1C7BA90)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID8_OFFSET UNITYSDK_OFFSET(0x1C7BA60)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID9_OFFSET UNITYSDK_OFFSET(0x1C7BA30)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID10_OFFSET UNITYSDK_OFFSET(0x1C7BA00)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID11_OFFSET UNITYSDK_OFFSET(0x1C7B9D0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID12_OFFSET UNITYSDK_OFFSET(0x1C7B9A0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_ENDSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7BEE0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_FINISHSHOPINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7C1C0)
#define MX_DATA_EXCEL_SHOPINFOEXCEL_FINISHSIZEPREFIXEDSHOPINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7C1E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopInfoExcel_TypeDefinitionIndex = 19412;

	class ShopInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopInfoExcel* GetRootAsShopInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETROOTASSHOPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopInfoExcel* GetRootAsShopInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETROOTASSHOPINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRefresh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_ISREFRESH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSoldOutDimmed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_ISSOLDOUTDIMMED_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* CostParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_COSTPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CostParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_COSTPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCostParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETCOSTPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 CostParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_COSTPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CostParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_COSTPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCostParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETCOSTPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_AutoRefreshCoolTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_AUTOREFRESHCOOLTIME_OFFSET))(nullptr);
		}

		::FlatData::ShopRefresherType* get_ShopRefresherType()
		{
			return (return (::FlatData::ShopRefresherType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPREFRESHERTYPE_OFFSET))(nullptr);
		}

		::FlatData::ShopRefreshPeriodType* get_ShopRefreshPeriodType()
		{
			return (return (::FlatData::ShopRefreshPeriodType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPREFRESHPERIODTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RefreshAbleCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_REFRESHABLECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 GoodsId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GoodsIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_GOODSIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGoodsIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETGOODSIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenPeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_OPENPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenPeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETOPENPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenPeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_OPENPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenPeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETOPENPERIODTOBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RefreshPeriodBaseTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_REFRESHPERIODBASETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetRefreshPeriodBaseTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETREFRESHPERIODBASETIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ShopProductUpdateTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPPRODUCTUPDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopProductUpdateTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GETSHOPPRODUCTUPDATETIMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_DisplayParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_DISPLAYPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_DISPLAYPARCELID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsShopVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_ISSHOPVISIBLE_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateDate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEDATE_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId1()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID1_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId2()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID2_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId3()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID3_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId4()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID4_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId5()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID5_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId6()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID6_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId7()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID7_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId8()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID8_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId9()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID9_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId10()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID10_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId11()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID11_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId12()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_GET_SHOPUPDATEGROUPID12_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatData::ShopRefresherType* arg, ::FlatData::ShopRefreshPeriodType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::System::Boolean, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatData::ShopRefresherType*, ::FlatData::ShopRefreshPeriodType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_CREATESHOPINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_STARTSHOPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsRefresh(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDISREFRESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSoldOutDimmed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDISSOLDOUTDIMMED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDCOSTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCostParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_CREATECOSTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCostParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_STARTCOSTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDCOSTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCostParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_CREATECOSTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCostParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_STARTCOSTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAutoRefreshCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDAUTOREFRESHCOOLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopRefresherType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopRefresherType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopRefresherType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPREFRESHERTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopRefreshPeriodType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopRefreshPeriodType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopRefreshPeriodType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPREFRESHPERIODTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRefreshAbleCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDREFRESHABLECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_CREATEGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_STARTGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenPeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDOPENPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenPeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDOPENPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRefreshPeriodBaseTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDREFRESHPERIODBASETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopProductUpdateTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPPRODUCTUPDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDDISPLAYPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDDISPLAYPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsShopVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDISSHOPVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId1(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId2(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId3(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID3_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId4(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID4_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId5(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID5_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId6(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID6_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId7(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID7_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId8(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID8_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId9(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID9_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId10(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID10_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId11(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID11_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId12(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ADDSHOPUPDATEGROUPID12_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_ENDSHOPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_FINISHSHOPINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCEL_FINISHSIZEPREFIXEDSHOPINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

