#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MultiFloorRaidSeasonManageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C16A40)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETROOTASMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C16A50)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETROOTASMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C16AB0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C16B40)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C16B10)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1C16B60)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_LOBBYENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0x1C16BB0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SHOWLOBBYBANNER_OFFSET UNITYSDK_OFFSET(0x1C16C00)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SEASONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1C16C50)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETSEASONSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C16C90)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_ENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1C16CB0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETENDNOTELABELSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C16CF0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SEASONENDDATE_OFFSET UNITYSDK_OFFSET(0x1C16D10)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETSEASONENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C16D50)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x1C16D70)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETSETTLEMENTENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C16DB0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1C16DD0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C16E10)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_ENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1C16E30)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_LOBBYIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C16E80)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETLOBBYIMGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C16EC0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_LEVELIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C16EE0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETLEVELIMGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C16F20)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_PLAYTIP_OFFSET UNITYSDK_OFFSET(0x1C16F40)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETPLAYTIPBYTES_OFFSET UNITYSDK_OFFSET(0x1C16F80)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_CREATEMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C16FA0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_STARTMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C17450)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x1C171C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDLOBBYENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0x1C173A0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSHOWLOBBYBANNER_OFFSET UNITYSDK_OFFSET(0x1C173D0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSEASONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1C17370)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1C17340)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSEASONENDDATE_OFFSET UNITYSDK_OFFSET(0x1C17310)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x1C172E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1C172B0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1C17280)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDLOBBYIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C17250)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDLEVELIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C17220)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDPLAYTIP_OFFSET UNITYSDK_OFFSET(0x1C171F0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ENDMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C17400)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_FINISHMULTIFLOORRAIDSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C17470)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDMULTIFLOORRAIDSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C17490)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidSeasonManageExcel_TypeDefinitionIndex = 18957;

	class MultiFloorRaidSeasonManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* GetRootAsMultiFloorRaidSeasonManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETROOTASMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* GetRootAsMultiFloorRaidSeasonManageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETROOTASMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LobbyEnterScenario()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_LOBBYENTERSCENARIO_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowLobbyBanner()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SHOWLOBBYBANNER_OFFSET))(nullptr);
		}

		::System::String* get_SeasonStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SEASONSTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETSEASONSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndNoteLabelStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_ENDNOTELABELSTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndNoteLabelStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETENDNOTELABELSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SeasonEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SEASONENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETSEASONENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SettlementEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_SETTLEMENTENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSettlementEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETSETTLEMENTENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenRaidBossGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenRaidBossGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_EnterScenarioKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_ENTERSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::String* get_LobbyImgPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_LOBBYIMGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLobbyImgPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETLOBBYIMGPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LevelImgPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_LEVELIMGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLevelImgPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETLEVELIMGPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PlayTip()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GET_PLAYTIP_OFFSET))(nullptr);
		}

		Il2CppObject* GetPlayTipBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_GETPLAYTIPBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMultiFloorRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_CREATEMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMultiFloorRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_STARTMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyEnterScenario(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDLOBBYENTERSCENARIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowLobbyBanner(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSHOWLOBBYBANNER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSEASONSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndNoteLabelStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDENDNOTELABELSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSEASONENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSettlementEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDSETTLEMENTENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenRaidBossGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDENTERSCENARIOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyImgPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDLOBBYIMGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelImgPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDLEVELIMGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayTip(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ADDPLAYTIP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMultiFloorRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_ENDMULTIFLOORRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMultiFloorRaidSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_FINISHMULTIFLOORRAIDSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMultiFloorRaidSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDMULTIFLOORRAIDSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

