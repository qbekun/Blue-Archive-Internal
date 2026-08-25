#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WeekDungeonRewardExcel; }
namespace FlatData { class WeekDungeonType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBED90)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GETROOTASWEEKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBEDA0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GETROOTASWEEKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBEE00)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CBEE90)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CBEE60)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CBEEB0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1CBEF00)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CBEF50)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1CBEFA0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CBEFF0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_REWARDPARCELPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1CBF040)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1CBF090)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_DROPITEMMODELPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1CBF0E0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GETDROPITEMMODELPREFABPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1CBF120)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_CREATEWEEKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBF140)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_STARTWEEKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBF490)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CBF350)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1CBF3E0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CBF3B0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1CBF320)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CBF2F0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDREWARDPARCELPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1CBF2C0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1CBF410)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDDROPITEMMODELPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1CBF380)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ENDWEEKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBF440)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_FINISHWEEKDUNGEONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBF4B0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_FINISHSIZEPREFIXEDWEEKDUNGEONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBF4D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonRewardExcel_TypeDefinitionIndex = 19750;

	class WeekDungeonRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WeekDungeonRewardExcel* GetRootAsWeekDungeonRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GETROOTASWEEKDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WeekDungeonRewardExcel* GetRootAsWeekDungeonRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WeekDungeonRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WeekDungeonRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GETROOTASWEEKDUNGEONREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WeekDungeonRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonType* get_DungeonType()
		{
			return (return (::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_DUNGEONTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelProbability()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_REWARDPARCELPROBABILITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		::System::String* get_DropItemModelPrefabPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GET_DROPITEMMODELPREFABPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDropItemModelPrefabPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_GETDROPITEMMODELPREFABPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWeekDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::WeekDungeonType* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::WeekDungeonType*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_CREATEWEEKDUNGEONREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWeekDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_STARTWEEKDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDungeonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDDUNGEONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelProbability(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDREWARDPARCELPROBABILITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDropItemModelPrefabPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ADDDROPITEMMODELPREFABPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWeekDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_ENDWEEKDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWeekDungeonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_FINISHWEEKDUNGEONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWeekDungeonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCEL_FINISHSIZEPREFIXEDWEEKDUNGEONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

