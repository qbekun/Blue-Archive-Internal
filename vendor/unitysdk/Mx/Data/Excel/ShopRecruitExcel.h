#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class GachaDisplayTag; }
namespace FlatData { class PurchaseCountResetType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7E2A0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETROOTASSHOPRECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7E2B0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETROOTASSHOPRECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7E310)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C7E3A0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C7E370)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C7E3C0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C7E410)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1C7E460)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ONEGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x1C7E4B0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_TENGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x1C7E500)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_GOODSDEVNAME_OFFSET UNITYSDK_OFFSET(0x1C7E550)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETGOODSDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C7E590)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1C7E5B0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C7E600)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_GACHABANNERPATH_OFFSET UNITYSDK_OFFSET(0x1C7E650)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETGACHABANNERPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C7E690)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1C7E6B0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_VIDEOIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C7E710)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETVIDEOIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C7E750)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_LINKEDROBBYBANNERID_OFFSET UNITYSDK_OFFSET(0x1C7E770)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_INFOCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C7E7C0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_INFOCHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C7E820)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETINFOCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C7E860)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SALEPERIODVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C7E880)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C7E8D0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETSALEPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C7E910)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C7E930)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETSALEPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x1C7E970)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_RECRUITCOINID_OFFSET UNITYSDK_OFFSET(0x1C7E990)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_RECRUITSELLECTIONSHOPID_OFFSET UNITYSDK_OFFSET(0x1C7E9E0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PURCHASECOOLTIMEMIN_OFFSET UNITYSDK_OFFSET(0x1C7EA30)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C7EA80)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C7EAD0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SALEPERIODDAYPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C7EB20)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ISOVERRIDESALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C7EB70)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ISNEWBIE_OFFSET UNITYSDK_OFFSET(0x1C7EBC0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ISSELECTRECRUIT_OFFSET UNITYSDK_OFFSET(0x1C7EC10)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYINVISIBLETOKENID_OFFSET UNITYSDK_OFFSET(0x1C7EC60)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C7ECB0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETDIRECTPAYPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C7ECF0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYANDROIDSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C7ED10)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYAPPLESHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C7ED60)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SELECTABLEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1C7EDB0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_MAXSELECTCHARACTERNUM_OFFSET UNITYSDK_OFFSET(0x1C7EE00)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYONESTORESHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C7EE50)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PROBABILITYURLDEV_OFFSET UNITYSDK_OFFSET(0x1C7EEA0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETPROBABILITYURLDEVBYTES_OFFSET UNITYSDK_OFFSET(0x1C7EEE0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PROBABILITYURLLIVE_OFFSET UNITYSDK_OFFSET(0x1C7EF00)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETPROBABILITYURLLIVEBYTES_OFFSET UNITYSDK_OFFSET(0x1C7EF40)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_CREATESHOPRECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7EF60)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_STARTSHOPRECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7FBA0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C7F7F0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C7FA30)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1C7FB20)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDONEGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x1C7F7C0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDTENGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x1C7F790)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDGOODSDEVNAME_OFFSET UNITYSDK_OFFSET(0x1C7FA00)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1C7F9D0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C7F760)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDGACHABANNERPATH_OFFSET UNITYSDK_OFFSET(0x1C7F9A0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDVIDEOID_OFFSET UNITYSDK_OFFSET(0x1C7F970)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_CREATEVIDEOIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7FBC0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_STARTVIDEOIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7FC50)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDLINKEDROBBYBANNERID_OFFSET UNITYSDK_OFFSET(0x1C7F730)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDINFOCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C7F940)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_CREATEINFOCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7FC90)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_STARTINFOCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C7FD20)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSALEPERIODVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C7FAF0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C7F910)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C7F8E0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDRECRUITCOINID_OFFSET UNITYSDK_OFFSET(0x1C7F700)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDRECRUITSELLECTIONSHOPID_OFFSET UNITYSDK_OFFSET(0x1C7F6D0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPURCHASECOOLTIMEMIN_OFFSET UNITYSDK_OFFSET(0x1C7F6A0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C7F670)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C7F8B0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSALEPERIODDAYPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C7F640)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDISOVERRIDESALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C7FAC0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDISNEWBIE_OFFSET UNITYSDK_OFFSET(0x1C7FA90)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDISSELECTRECRUIT_OFFSET UNITYSDK_OFFSET(0x1C7FA60)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYINVISIBLETOKENID_OFFSET UNITYSDK_OFFSET(0x1C7F610)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C7F880)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYANDROIDSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C7F5E0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYAPPLESHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C7F5B0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSELECTABLEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1C7F580)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDMAXSELECTCHARACTERNUM_OFFSET UNITYSDK_OFFSET(0x1C7F550)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYONESTORESHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C7F520)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPROBABILITYURLDEV_OFFSET UNITYSDK_OFFSET(0x1C7F850)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPROBABILITYURLLIVE_OFFSET UNITYSDK_OFFSET(0x1C7F820)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_ENDSHOPRECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7FB50)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_FINISHSHOPRECRUITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7FD60)
#define MX_DATA_EXCEL_SHOPRECRUITEXCEL_FINISHSIZEPREFIXEDSHOPRECRUITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7FD80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRecruitExcel_TypeDefinitionIndex = 19426;

	class ShopRecruitExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopRecruitExcel* GetRootAsShopRecruitExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETROOTASSHOPRECRUITEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopRecruitExcel* GetRootAsShopRecruitExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETROOTASSHOPRECRUITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopRecruitExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int64 get_OneGachaGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ONEGACHAGOODSID_OFFSET))(nullptr);
		}

		::System::Int64 get_TenGachaGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_TENGACHAGOODSID_OFFSET))(nullptr);
		}

		::System::String* get_GoodsDevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_GOODSDEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetGoodsDevNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETGOODSDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::GachaDisplayTag* get_DisplayTag()
		{
			return (return (::FlatData::GachaDisplayTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DISPLAYTAG_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::String* get_GachaBannerPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_GACHABANNERPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGachaBannerPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETGACHABANNERPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 VideoId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_VIDEOID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VideoIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_VIDEOIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETVIDEOIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_LinkedRobbyBannerId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_LINKEDROBBYBANNERID_OFFSET))(nullptr);
		}

		::System::Int64 InfoCharacterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_INFOCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InfoCharacterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_INFOCHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetInfoCharacterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETINFOCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_SalePeriodVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SALEPERIODVISIBLE_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SALEPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETSALEPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SALEPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETSALEPERIODTOBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_RecruitCoinId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_RECRUITCOINID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecruitSellectionShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_RECRUITSELLECTIONSHOPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCooltimeMin()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PURCHASECOOLTIMEMIN_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::FlatData::PurchaseCountResetType* get_PurchaseCountResetType()
		{
			return (return (::FlatData::PurchaseCountResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PURCHASECOUNTRESETTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SalePeriodDayParameter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SALEPERIODDAYPARAMETER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOverrideSalePeriodTo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ISOVERRIDESALEPERIODTO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNewbie()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ISNEWBIE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSelectRecruit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_ISSELECTRECRUIT_OFFSET))(nullptr);
		}

		::System::Int64 get_DirectPayInvisibleTokenId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYINVISIBLETOKENID_OFFSET))(nullptr);
		}

		::System::String* get_DirectPayProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYPRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetDirectPayProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETDIRECTPAYPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_DirectPayAndroidShopCashId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYANDROIDSHOPCASHID_OFFSET))(nullptr);
		}

		::System::Int64 get_DirectPayAppleShopCashId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYAPPLESHOPCASHID_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectAbleGachaGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_SELECTABLEGACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxSelectCharacterNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_MAXSELECTCHARACTERNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_DirectPayOneStoreShopCashId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_DIRECTPAYONESTORESHOPCASHID_OFFSET))(nullptr);
		}

		::System::String* get_ProbabilityUrlDev()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PROBABILITYURLDEV_OFFSET))(nullptr);
		}

		Il2CppObject* GetProbabilityUrlDevBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETPROBABILITYURLDEVBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ProbabilityUrlLive()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GET_PROBABILITYURLLIVE_OFFSET))(nullptr);
		}

		Il2CppObject* GetProbabilityUrlLiveBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_GETPROBABILITYURLLIVEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopRecruitExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::GachaDisplayTag* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::PurchaseCountResetType* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ShopCategoryType*, ::System::Boolean, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::GachaDisplayTag*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::PurchaseCountResetType*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_CREATESHOPRECRUITEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopRecruitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_STARTSHOPRECRUITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOneGachaGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDONEGACHAGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTenGachaGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDTENGACHAGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDGOODSDEVNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GachaDisplayTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GachaDisplayTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDISPLAYTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaBannerPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDGACHABANNERPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDVIDEOID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVideoIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_CREATEVIDEOIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVideoIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_STARTVIDEOIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLinkedRobbyBannerId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDLINKEDROBBYBANNERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInfoCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDINFOCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateInfoCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_CREATEINFOCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartInfoCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_STARTINFOCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSALEPERIODVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSALEPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSALEPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecruitCoinId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDRECRUITCOINID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecruitSellectionShopId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDRECRUITSELLECTIONSHOPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCooltimeMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPURCHASECOOLTIMEMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountResetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PurchaseCountResetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PurchaseCountResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPURCHASECOUNTRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodDayParameter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSALEPERIODDAYPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsOverrideSalePeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDISOVERRIDESALEPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsNewbie(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDISNEWBIE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSelectRecruit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDISSELECTRECRUIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDirectPayInvisibleTokenId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYINVISIBLETOKENID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDirectPayProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDirectPayAndroidShopCashId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYANDROIDSHOPCASHID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDirectPayAppleShopCashId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYAPPLESHOPCASHID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSelectAbleGachaGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDSELECTABLEGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxSelectCharacterNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDMAXSELECTCHARACTERNUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDirectPayOneStoreShopCashId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDDIRECTPAYONESTORESHOPCASHID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbabilityUrlDev(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPROBABILITYURLDEV_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbabilityUrlLive(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ADDPROBABILITYURLLIVE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopRecruitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_ENDSHOPRECRUITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopRecruitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_FINISHSHOPRECRUITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopRecruitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCEL_FINISHSIZEPREFIXEDSHOPRECRUITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

