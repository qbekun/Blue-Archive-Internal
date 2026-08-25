#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PickupDuplicateBonusExcel; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C27C40)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GETROOTASPICKUPDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C27C50)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GETROOTASPICKUPDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C27CB0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C27D40)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C27D10)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C27D60)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_SHOPCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C27DB0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C27E00)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_PICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C27E50)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C27EA0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C27EF0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C27F40)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_CREATEPICKUPDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C27F90)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_STARTPICKUPDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C28280)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C281A0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDSHOPCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C28200)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDSHOPID_OFFSET UNITYSDK_OFFSET(0x1C28170)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDPICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C28140)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C281D0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C28110)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C280E0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ENDPICKUPDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C28230)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_FINISHPICKUPDUPLICATEBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C282A0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_FINISHSIZEPREFIXEDPICKUPDUPLICATEBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C282C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PickupDuplicateBonusExcel_TypeDefinitionIndex = 19033;

	class PickupDuplicateBonusExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PickupDuplicateBonusExcel* GetRootAsPickupDuplicateBonusExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PickupDuplicateBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GETROOTASPICKUPDUPLICATEBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PickupDuplicateBonusExcel* GetRootAsPickupDuplicateBonusExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PickupDuplicateBonusExcel* arg)
		{
			return (return (::MX::Data::Excel::PickupDuplicateBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PickupDuplicateBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GETROOTASPICKUPDUPLICATEBONUSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PickupDuplicateBonusExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PickupDuplicateBonusExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_ShopCategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_SHOPCATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_SHOPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PickupCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_PICKUPCHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePickupDuplicateBonusExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ShopCategoryType*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_CREATEPICKUPDUPLICATEBONUSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartPickupDuplicateBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_STARTPICKUPDUPLICATEBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDSHOPCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDSHOPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPickupCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDPICKUPCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPickupDuplicateBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_ENDPICKUPDUPLICATEBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPickupDuplicateBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_FINISHPICKUPDUPLICATEBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPickupDuplicateBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCEL_FINISHSIZEPREFIXEDPICKUPDUPLICATEBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

