#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PickupFirstGetBonus2Excel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C29BC0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GETROOTASPICKUPFIRSTGETBONUS2EXCEL_OFFSET UNITYSDK_OFFSET(0x1C29BD0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GETROOTASPICKUPFIRSTGETBONUS2EXCEL_OFFSET UNITYSDK_OFFSET(0x1C29C30)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C29CC0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C29C90)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C29CE0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C29D30)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_RECRUITSELLECTIONSHOPID_OFFSET UNITYSDK_OFFSET(0x1C29D80)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_PICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C29DD0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C29E20)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C29E70)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C29EC0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_CREATEPICKUPFIRSTGETBONUS2EXCEL_OFFSET UNITYSDK_OFFSET(0x1C29F10)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_STARTPICKUPFIRSTGETBONUS2EXCEL_OFFSET UNITYSDK_OFFSET(0x1C2A200)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C2A150)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDSHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C2A120)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDRECRUITSELLECTIONSHOPID_OFFSET UNITYSDK_OFFSET(0x1C2A0F0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDPICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C2A0C0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C2A180)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C2A090)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C2A060)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ENDPICKUPFIRSTGETBONUS2EXCEL_OFFSET UNITYSDK_OFFSET(0x1C2A1B0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_FINISHPICKUPFIRSTGETBONUS2EXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2A220)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_FINISHSIZEPREFIXEDPICKUPFIRSTGETBONUS2EXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2A240)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PickupFirstGetBonus2Excel_TypeDefinitionIndex = 19043;

	class PickupFirstGetBonus2Excel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PickupFirstGetBonus2Excel* GetRootAsPickupFirstGetBonus2Excel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PickupFirstGetBonus2Excel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GETROOTASPICKUPFIRSTGETBONUS2EXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PickupFirstGetBonus2Excel* GetRootAsPickupFirstGetBonus2Excel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PickupFirstGetBonus2Excel* arg)
		{
			return (return (::MX::Data::Excel::PickupFirstGetBonus2Excel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PickupFirstGetBonus2Excel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GETROOTASPICKUPFIRSTGETBONUS2EXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PickupFirstGetBonus2Excel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PickupFirstGetBonus2Excel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopRecruitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_SHOPRECRUITID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecruitSellectionShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_RECRUITSELLECTIONSHOPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PickupCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_PICKUPCHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePickupFirstGetBonus2Excel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_CREATEPICKUPFIRSTGETBONUS2EXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartPickupFirstGetBonus2Excel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_STARTPICKUPFIRSTGETBONUS2EXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopRecruitId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDSHOPRECRUITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecruitSellectionShopId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDRECRUITSELLECTIONSHOPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPickupCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDPICKUPCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPickupFirstGetBonus2Excel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_ENDPICKUPFIRSTGETBONUS2EXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPickupFirstGetBonus2ExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_FINISHPICKUPFIRSTGETBONUS2EXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPickupFirstGetBonus2ExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUS2EXCEL_FINISHSIZEPREFIXEDPICKUPFIRSTGETBONUS2EXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

