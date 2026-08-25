#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GoodsExcel; }
namespace FlatData { class Rarity; }
namespace FlatData { class ParcelType; }
namespace FlatData { class ConsumeCondition; }
namespace FlatData { class GachaTicketType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_GOODSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3AF20)
#define MX_DATA_EXCEL_GOODSEXCEL_GETROOTASGOODSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3AF30)
#define MX_DATA_EXCEL_GOODSEXCEL_GETROOTASGOODSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3AF90)
#define MX_DATA_EXCEL_GOODSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B3B020)
#define MX_DATA_EXCEL_GOODSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B3AFF0)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B3B040)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3B090)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1B3B0E0)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B3B130)
#define MX_DATA_EXCEL_GOODSEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B170)
#define MX_DATA_EXCEL_GOODSEXCEL_CONSUMEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B190)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B3B1F0)
#define MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B230)
#define MX_DATA_EXCEL_GOODSEXCEL_CONSUMEPARCELID_OFFSET UNITYSDK_OFFSET(0x1B3B250)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3B2B0)
#define MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B2F0)
#define MX_DATA_EXCEL_GOODSEXCEL_CONSUMEPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3B310)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3B370)
#define MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B3B0)
#define MX_DATA_EXCEL_GOODSEXCEL_CONSUMECONDITION_OFFSET UNITYSDK_OFFSET(0x1B3B3D0)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMECONDITIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3B430)
#define MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMECONDITIONBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B470)
#define MX_DATA_EXCEL_GOODSEXCEL_CONSUMEGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B490)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEGACHATICKETTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B3B4F0)
#define MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEGACHATICKETTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B530)
#define MX_DATA_EXCEL_GOODSEXCEL_CONSUMEGACHATICKETTYPEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3B550)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEGACHATICKETTYPEAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3B5B0)
#define MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEGACHATICKETTYPEAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B5F0)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_COMBINEDGACHACOSTID_OFFSET UNITYSDK_OFFSET(0x1B3B610)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDAOS_OFFSET UNITYSDK_OFFSET(0x1B3B660)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDIOS_OFFSET UNITYSDK_OFFSET(0x1B3B6B0)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDONE_OFFSET UNITYSDK_OFFSET(0x1B3B700)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDSGS_OFFSET UNITYSDK_OFFSET(0x1B3B750)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDSTEAM_OFFSET UNITYSDK_OFFSET(0x1B3B7A0)
#define MX_DATA_EXCEL_GOODSEXCEL_CONSUMEEXTRASTEP_OFFSET UNITYSDK_OFFSET(0x1B3B7F0)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEEXTRASTEPLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3B850)
#define MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEEXTRASTEPBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B890)
#define MX_DATA_EXCEL_GOODSEXCEL_CONSUMEEXTRAAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3B8B0)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEEXTRAAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3B910)
#define MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEEXTRAAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B950)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1B3B970)
#define MX_DATA_EXCEL_GOODSEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B9C0)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B3BA20)
#define MX_DATA_EXCEL_GOODSEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B3BA60)
#define MX_DATA_EXCEL_GOODSEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0x1B3BA80)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3BAE0)
#define MX_DATA_EXCEL_GOODSEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B3BB20)
#define MX_DATA_EXCEL_GOODSEXCEL_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3BB40)
#define MX_DATA_EXCEL_GOODSEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3BBA0)
#define MX_DATA_EXCEL_GOODSEXCEL_GETPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B3BBE0)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATEGOODSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3BC00)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTGOODSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3C430)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B3C0E0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDTYPE_OFFSET UNITYSDK_OFFSET(0x1B3C3B0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1B3C380)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1B3C350)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B3C320)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C450)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C4E0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEPARCELID_OFFSET UNITYSDK_OFFSET(0x1B3C2F0)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C520)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C5B0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3C2C0)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C5F0)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C680)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMECONDITION_OFFSET UNITYSDK_OFFSET(0x1B3C290)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMECONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C6C0)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMECONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C750)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1B3C260)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEGACHATICKETTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C790)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEGACHATICKETTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C820)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEGACHATICKETTYPEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3C230)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEGACHATICKETTYPEAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C860)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEGACHATICKETTYPEAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C8F0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCOMBINEDGACHACOSTID_OFFSET UNITYSDK_OFFSET(0x1B3C0B0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDAOS_OFFSET UNITYSDK_OFFSET(0x1B3C080)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDIOS_OFFSET UNITYSDK_OFFSET(0x1B3C050)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDONE_OFFSET UNITYSDK_OFFSET(0x1B3C020)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDSGS_OFFSET UNITYSDK_OFFSET(0x1B3BFF0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDSTEAM_OFFSET UNITYSDK_OFFSET(0x1B3BFC0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEEXTRASTEP_OFFSET UNITYSDK_OFFSET(0x1B3C200)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEEXTRASTEPVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C930)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEEXTRASTEPVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3C9C0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEEXTRAAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3C1D0)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEEXTRAAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3CA00)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEEXTRAAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3CA90)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDSTATE_OFFSET UNITYSDK_OFFSET(0x1B3C1A0)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B3C170)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3CAD0)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3CB60)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B3C140)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3CBA0)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3CC30)
#define MX_DATA_EXCEL_GOODSEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3C110)
#define MX_DATA_EXCEL_GOODSEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3CC70)
#define MX_DATA_EXCEL_GOODSEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B3CD00)
#define MX_DATA_EXCEL_GOODSEXCEL_ENDGOODSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3C3E0)
#define MX_DATA_EXCEL_GOODSEXCEL_FINISHGOODSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3CD40)
#define MX_DATA_EXCEL_GOODSEXCEL_FINISHSIZEPREFIXEDGOODSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3CD60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GoodsExcel_TypeDefinitionIndex = 18107;

	class GoodsExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GoodsExcel* GetRootAsGoodsExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GoodsExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETROOTASGOODSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GoodsExcel* GetRootAsGoodsExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GoodsExcel* arg)
		{
			return (return (::MX::Data::Excel::GoodsExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GoodsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETROOTASGOODSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GoodsExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GoodsExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_TYPE_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ConsumeParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CONSUMEPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConsumeParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ConsumeParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CONSUMEPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConsumeParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ConsumeParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CONSUMEPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConsumeParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::ConsumeCondition* ConsumeCondition(::System::Int32 arg)
		{
			return (return (::FlatData::ConsumeCondition*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CONSUMECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeConditionLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMECONDITIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConsumeConditionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMECONDITIONBYTES_OFFSET))(nullptr);
		}

		::FlatData::GachaTicketType* ConsumeGachaTicketType(::System::Int32 arg)
		{
			return (return (::FlatData::GachaTicketType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CONSUMEGACHATICKETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeGachaTicketTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEGACHATICKETTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConsumeGachaTicketTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEGACHATICKETTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ConsumeGachaTicketTypeAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CONSUMEGACHATICKETTYPEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeGachaTicketTypeAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEGACHATICKETTYPEAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConsumeGachaTicketTypeAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEGACHATICKETTYPEAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CombinedGachaCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_COMBINEDGACHACOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductIdAOS()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDAOS_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductIdiOS()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDIOS_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductIdONE()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDONE_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductIdSGS()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDSGS_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductIdSTEAM()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_PRODUCTIDSTEAM_OFFSET))(nullptr);
		}

		::System::Int64 ConsumeExtraStep(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CONSUMEEXTRASTEP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeExtraStepLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEEXTRASTEPLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConsumeExtraStepBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEEXTRASTEPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ConsumeExtraAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CONSUMEEXTRAAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeExtraAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_CONSUMEEXTRAAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConsumeExtraAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETCONSUMEEXTRAAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_State()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_STATE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_PARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_GETPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGoodsExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::Rarity* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::FlatData::Rarity*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATEGOODSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGoodsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTGOODSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddType(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConsumeParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConsumeParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConsumeParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConsumeParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConsumeParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConsumeParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConsumeConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMECONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConsumeConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMECONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeGachaTicketType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEGACHATICKETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConsumeGachaTicketTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEGACHATICKETTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConsumeGachaTicketTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEGACHATICKETTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeGachaTicketTypeAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEGACHATICKETTYPEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConsumeGachaTicketTypeAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEGACHATICKETTYPEAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConsumeGachaTicketTypeAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEGACHATICKETTYPEAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCombinedGachaCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCOMBINEDGACHACOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductIdAOS(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDAOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductIdiOS(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDIOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductIdONE(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductIdSGS(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDSGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductIdSTEAM(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDPRODUCTIDSTEAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeExtraStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEEXTRASTEP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConsumeExtraStepVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEEXTRASTEPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConsumeExtraStepVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEEXTRASTEPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeExtraAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDCONSUMEEXTRAAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConsumeExtraAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATECONSUMEEXTRAAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConsumeExtraAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTCONSUMEEXTRAAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddState(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGoodsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_ENDGOODSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGoodsExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_FINISHGOODSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGoodsExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCEL_FINISHSIZEPREFIXEDGOODSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

