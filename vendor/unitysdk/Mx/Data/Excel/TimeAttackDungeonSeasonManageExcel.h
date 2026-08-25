#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TimeAttackDungeonSeasonManageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA5560)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETROOTASTIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA5570)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETROOTASTIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA55D0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CA5660)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CA5630)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CA5680)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1CA56D0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1CA5710)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_ENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1CA5730)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETENDNOTELABELSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1CA5770)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1CA5790)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1CA57D0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_UISLOT_OFFSET UNITYSDK_OFFSET(0x1CA57F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x1CA5840)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_DIFFICULTYGEAS_OFFSET UNITYSDK_OFFSET(0x1CA5890)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_DIFFICULTYGEASLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA58F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETDIFFICULTYGEASBYTES_OFFSET UNITYSDK_OFFSET(0x1CA5930)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_TIMEATTACKDUNGEONREWARDID_OFFSET UNITYSDK_OFFSET(0x1CA5950)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_ROOMLIFETIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x1CA59A0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_CREATETIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA59F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_STARTTIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA5D90)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CA5C50)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1CA5D10)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1CA5CE0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0x1CA5CB0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDUISLOT_OFFSET UNITYSDK_OFFSET(0x1CA5C20)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDDUNGEONID_OFFSET UNITYSDK_OFFSET(0x1CA5BF0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDDIFFICULTYGEAS_OFFSET UNITYSDK_OFFSET(0x1CA5C80)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_CREATEDIFFICULTYGEASVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA5DB0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_STARTDIFFICULTYGEASVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA5E40)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDTIMEATTACKDUNGEONREWARDID_OFFSET UNITYSDK_OFFSET(0x1CA5BC0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDROOMLIFETIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x1CA5B90)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ENDTIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA5D40)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_FINISHTIMEATTACKDUNGEONSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA5E80)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDTIMEATTACKDUNGEONSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA5EA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TimeAttackDungeonSeasonManageExcel_TypeDefinitionIndex = 19617;

	class TimeAttackDungeonSeasonManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel* GetRootAsTimeAttackDungeonSeasonManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETROOTASTIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel* GetRootAsTimeAttackDungeonSeasonManageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETROOTASTIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndNoteLabelStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_ENDNOTELABELSTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndNoteLabelStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETENDNOTELABELSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_UISlot()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_UISLOT_OFFSET))(nullptr);
		}

		::System::Int64 get_DungeonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_DUNGEONID_OFFSET))(nullptr);
		}

		::System::Int64 DifficultyGeas(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_DIFFICULTYGEAS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DifficultyGeasLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_DIFFICULTYGEASLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDifficultyGeasBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GETDIFFICULTYGEASBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeAttackDungeonRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_TIMEATTACKDUNGEONREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RoomLifeTimeInSeconds()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_GET_ROOMLIFETIMEINSECONDS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTimeAttackDungeonSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_CREATETIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTimeAttackDungeonSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_STARTTIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndNoteLabelStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDENDNOTELABELSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUISlot(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDUISLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDungeonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDDUNGEONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficultyGeas(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDDIFFICULTYGEAS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDifficultyGeasVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_CREATEDIFFICULTYGEASVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDifficultyGeasVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_STARTDIFFICULTYGEASVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTimeAttackDungeonRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDTIMEATTACKDUNGEONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRoomLifeTimeInSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ADDROOMLIFETIMEINSECONDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTimeAttackDungeonSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_ENDTIMEATTACKDUNGEONSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTimeAttackDungeonSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_FINISHTIMEATTACKDUNGEONSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTimeAttackDungeonSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDTIMEATTACKDUNGEONSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

