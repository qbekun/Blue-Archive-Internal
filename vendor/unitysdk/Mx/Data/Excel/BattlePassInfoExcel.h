#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BattlePassInfoExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19E4860)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETROOTASBATTLEPASSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19E4870)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETROOTASBATTLEPASSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19E48D0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19E4960)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19E4930)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19E4980)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_FREEREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19E49D0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PURCHASEREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19E4A20)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_NORMALPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x19E4A70)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PREMIUMPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x19E4AC0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_DISCOUNTPREMIUMPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x19E4B10)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_NEXTLVNEEDEXP_OFFSET UNITYSDK_OFFSET(0x19E4B60)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PASSLVUPGOODSID_OFFSET UNITYSDK_OFFSET(0x19E4BB0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_BUYPREMIUMLVUPAMOUNT_OFFSET UNITYSDK_OFFSET(0x19E4C00)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x19E4C50)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETSALEPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x19E4C90)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x19E4CB0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETSALEPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x19E4CF0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_VIDEOID_OFFSET UNITYSDK_OFFSET(0x19E4D10)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_VIDEOIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19E4D70)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETVIDEOIDBYTES_OFFSET UNITYSDK_OFFSET(0x19E4DB0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_FLAVORTEXTGROUPID_OFFSET UNITYSDK_OFFSET(0x19E4DD0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_EXCLUSIVEREWARDID_OFFSET UNITYSDK_OFFSET(0x19E4E20)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_EXCLUSIVEEMBLEMID_OFFSET UNITYSDK_OFFSET(0x19E4E70)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PASSEXPLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x19E4EC0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_LOBBYBANNERPATH_OFFSET UNITYSDK_OFFSET(0x19E4F10)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETLOBBYBANNERPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19E4F50)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_MAINICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x19E4F70)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETMAINICONPARCELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19E4FB0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PURCHASESTEPPRODUCTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19E4FD0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETPURCHASESTEPPRODUCTIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19E5010)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_CREATEBATTLEPASSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19E5030)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_STARTBATTLEPASSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19E5750)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19E5520)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDFREEREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19E54F0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPURCHASEREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19E54C0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDNORMALPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x19E5490)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPREMIUMPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x19E5460)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDDISCOUNTPREMIUMPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x19E5430)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDNEXTLVNEEDEXP_OFFSET UNITYSDK_OFFSET(0x19E56D0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPASSLVUPGOODSID_OFFSET UNITYSDK_OFFSET(0x19E5400)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDBUYPREMIUMLVUPAMOUNT_OFFSET UNITYSDK_OFFSET(0x19E56A0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDSALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x19E5670)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDSALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x19E5640)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDVIDEOID_OFFSET UNITYSDK_OFFSET(0x19E5610)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_CREATEVIDEOIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19E5770)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_STARTVIDEOIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19E5800)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDFLAVORTEXTGROUPID_OFFSET UNITYSDK_OFFSET(0x19E53D0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDEXCLUSIVEREWARDID_OFFSET UNITYSDK_OFFSET(0x19E53A0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDEXCLUSIVEEMBLEMID_OFFSET UNITYSDK_OFFSET(0x19E5370)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPASSEXPLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x19E55E0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDLOBBYBANNERPATH_OFFSET UNITYSDK_OFFSET(0x19E55B0)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDMAINICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x19E5580)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPURCHASESTEPPRODUCTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19E5550)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ENDBATTLEPASSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19E5700)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_FINISHBATTLEPASSINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E5840)
#define MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_FINISHSIZEPREFIXEDBATTLEPASSINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E5860)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassInfoExcel_TypeDefinitionIndex = 16748;

	class BattlePassInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BattlePassInfoExcel* GetRootAsBattlePassInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETROOTASBATTLEPASSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BattlePassInfoExcel* GetRootAsBattlePassInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BattlePassInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::BattlePassInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BattlePassInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETROOTASBATTLEPASSINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BattlePassInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_FreeRewardGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_FREEREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseRewardGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PURCHASEREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_NormalProductGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_NORMALPRODUCTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PremiumProductGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PREMIUMPRODUCTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_DiscountPremiumProductGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_DISCOUNTPREMIUMPRODUCTGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_NextLvNeedExp()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_NEXTLVNEEDEXP_OFFSET))(nullptr);
		}

		::System::Int64 get_PassLvUpGoodsID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PASSLVUPGOODSID_OFFSET))(nullptr);
		}

		::System::Int32 get_BuyPremiumLvUpAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_BUYPREMIUMLVUPAMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_SALEPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETSALEPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_SALEPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETSALEPERIODTOBYTES_OFFSET))(nullptr);
		}

		::System::Int64 VideoId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_VIDEOID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VideoIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_VIDEOIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETVIDEOIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_FlavorTextGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_FLAVORTEXTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ExclusiveRewardID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_EXCLUSIVEREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_ExclusiveEmblemID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_EXCLUSIVEEMBLEMID_OFFSET))(nullptr);
		}

		::System::UInt32 get_PassExpLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PASSEXPLOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_LobbyBannerPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_LOBBYBANNERPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLobbyBannerPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETLOBBYBANNERPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MainIconParcelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_MAINICONPARCELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMainIconParcelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETMAINICONPARCELPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PurchaseStepProductImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GET_PURCHASESTEPPRODUCTIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPurchaseStepProductImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_GETPURCHASESTEPPRODUCTIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattlePassInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_CREATEBATTLEPASSINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBattlePassInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_STARTBATTLEPASSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFreeRewardGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDFREEREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseRewardGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPURCHASEREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNormalProductGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDNORMALPRODUCTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPremiumProductGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPREMIUMPRODUCTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiscountPremiumProductGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDDISCOUNTPREMIUMPRODUCTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNextLvNeedExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDNEXTLVNEEDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassLvUpGoodsID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPASSLVUPGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuyPremiumLvUpAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDBUYPREMIUMLVUPAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDSALEPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDSALEPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDVIDEOID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVideoIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_CREATEVIDEOIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVideoIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_STARTVIDEOIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFlavorTextGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDFLAVORTEXTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExclusiveRewardID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDEXCLUSIVEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExclusiveEmblemID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDEXCLUSIVEEMBLEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassExpLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPASSEXPLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyBannerPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDLOBBYBANNERPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMainIconParcelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDMAINICONPARCELPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseStepProductImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ADDPURCHASESTEPPRODUCTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBattlePassInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_ENDBATTLEPASSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBattlePassInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_FINISHBATTLEPASSINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBattlePassInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSINFOEXCEL_FINISHSIZEPREFIXEDBATTLEPASSINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

