#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BattlePassExpLimitExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19E2420)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GETROOTASBATTLEPASSEXPLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x19E2430)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GETROOTASBATTLEPASSEXPLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x19E2490)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19E2520)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19E24F0)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E2540)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_LIMITSTARTTIME_OFFSET UNITYSDK_OFFSET(0x19E2590)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GETLIMITSTARTTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x19E25D0)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_LIMITENDTIME_OFFSET UNITYSDK_OFFSET(0x19E25F0)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GETLIMITENDTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x19E2630)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_EXPLIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x19E2650)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_CREATEBATTLEPASSEXPLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x19E26A0)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_STARTBATTLEPASSEXPLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x19E2890)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ADDBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E27B0)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ADDLIMITSTARTTIME_OFFSET UNITYSDK_OFFSET(0x19E2810)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ADDLIMITENDTIME_OFFSET UNITYSDK_OFFSET(0x19E27E0)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ADDEXPLIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x19E2780)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ENDBATTLEPASSEXPLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x19E2840)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_FINISHBATTLEPASSEXPLIMITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E28B0)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_FINISHSIZEPREFIXEDBATTLEPASSEXPLIMITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E28D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassExpLimitExcel_TypeDefinitionIndex = 16734;

	class BattlePassExpLimitExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BattlePassExpLimitExcel* GetRootAsBattlePassExpLimitExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassExpLimitExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GETROOTASBATTLEPASSEXPLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BattlePassExpLimitExcel* GetRootAsBattlePassExpLimitExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BattlePassExpLimitExcel* arg)
		{
			return (return (::MX::Data::Excel::BattlePassExpLimitExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BattlePassExpLimitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GETROOTASBATTLEPASSEXPLIMITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BattlePassExpLimitExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassExpLimitExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::String* get_LimitStartTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_LIMITSTARTTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetLimitStartTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GETLIMITSTARTTIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LimitEndTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_LIMITENDTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetLimitEndTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GETLIMITENDTIMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpLimitAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_GET_EXPLIMITAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattlePassExpLimitExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_CREATEBATTLEPASSEXPLIMITEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBattlePassExpLimitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_STARTBATTLEPASSEXPLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddBattlePassId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ADDBATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitStartTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ADDLIMITSTARTTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitEndTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ADDLIMITENDTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpLimitAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ADDEXPLIMITAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBattlePassExpLimitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_ENDBATTLEPASSEXPLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBattlePassExpLimitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_FINISHBATTLEPASSEXPLIMITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBattlePassExpLimitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCEL_FINISHSIZEPREFIXEDBATTLEPASSEXPLIMITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

