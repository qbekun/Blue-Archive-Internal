#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class DuplicateBonusExcel; }
namespace FlatData { class ItemCategory; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7C3D0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GETROOTASDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7C3E0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GETROOTASDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7C440)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A7C4D0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A7C4A0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A7C4F0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_ITEMCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A7C540)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A7C590)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7C5E0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A7C630)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1A7C680)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7C6D0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_CREATEDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7C720)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_STARTDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7CA10)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A7C930)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDITEMCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A7C990)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDITEMID_OFFSET UNITYSDK_OFFSET(0x1A7C900)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7C8D0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A7C960)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1A7C8A0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7C870)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ENDDUPLICATEBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7C9C0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_FINISHDUPLICATEBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7CA30)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_FINISHSIZEPREFIXEDDUPLICATEBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7CA50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int DuplicateBonusExcel_TypeDefinitionIndex = 17371;

	class DuplicateBonusExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::DuplicateBonusExcel* GetRootAsDuplicateBonusExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::DuplicateBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GETROOTASDUPLICATEBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::DuplicateBonusExcel* GetRootAsDuplicateBonusExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::DuplicateBonusExcel* arg)
		{
			return (return (::MX::Data::Excel::DuplicateBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::DuplicateBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GETROOTASDUPLICATEBONUSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::DuplicateBonusExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::DuplicateBonusExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ItemCategory* get_ItemCategory()
		{
			return (return (::FlatData::ItemCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_ITEMCATEGORY_OFFSET))(nullptr);
		}

		::System::Int64 get_ItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_ITEMID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDuplicateBonusExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ItemCategory* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ItemCategory*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_CREATEDUPLICATEBONUSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartDuplicateBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_STARTDUPLICATEBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddItemCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ItemCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDITEMCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndDuplicateBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_ENDDUPLICATEBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishDuplicateBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_FINISHDUPLICATEBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedDuplicateBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCEL_FINISHSIZEPREFIXEDDUPLICATEBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

