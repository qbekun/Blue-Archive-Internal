#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PickupFirstGetBonusExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2AF70)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GETROOTASPICKUPFIRSTGETBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2AF80)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GETROOTASPICKUPFIRSTGETBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2AFE0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C2B070)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C2B040)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C2B090)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_RECRUITSELLECTIONSHOPID_OFFSET UNITYSDK_OFFSET(0x1C2B0E0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_PICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C2B130)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C2B180)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C2B1D0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C2B220)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_CREATEPICKUPFIRSTGETBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2B270)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_STARTPICKUPFIRSTGETBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2B510)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDSHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C2B460)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDRECRUITSELLECTIONSHOPID_OFFSET UNITYSDK_OFFSET(0x1C2B430)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDPICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C2B400)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C2B490)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C2B3D0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C2B3A0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ENDPICKUPFIRSTGETBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2B4C0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_FINISHPICKUPFIRSTGETBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2B530)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_FINISHSIZEPREFIXEDPICKUPFIRSTGETBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2B550)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PickupFirstGetBonusExcel_TypeDefinitionIndex = 19050;

	class PickupFirstGetBonusExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PickupFirstGetBonusExcel* GetRootAsPickupFirstGetBonusExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PickupFirstGetBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GETROOTASPICKUPFIRSTGETBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PickupFirstGetBonusExcel* GetRootAsPickupFirstGetBonusExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PickupFirstGetBonusExcel* arg)
		{
			return (return (::MX::Data::Excel::PickupFirstGetBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PickupFirstGetBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GETROOTASPICKUPFIRSTGETBONUSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PickupFirstGetBonusExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PickupFirstGetBonusExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ShopRecruitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_SHOPRECRUITID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecruitSellectionShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_RECRUITSELLECTIONSHOPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PickupCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_PICKUPCHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePickupFirstGetBonusExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_CREATEPICKUPFIRSTGETBONUSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartPickupFirstGetBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_STARTPICKUPFIRSTGETBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddShopRecruitId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDSHOPRECRUITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecruitSellectionShopId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDRECRUITSELLECTIONSHOPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPickupCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDPICKUPCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPickupFirstGetBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_ENDPICKUPFIRSTGETBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPickupFirstGetBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_FINISHPICKUPFIRSTGETBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPickupFirstGetBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCEL_FINISHSIZEPREFIXEDPICKUPFIRSTGETBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

