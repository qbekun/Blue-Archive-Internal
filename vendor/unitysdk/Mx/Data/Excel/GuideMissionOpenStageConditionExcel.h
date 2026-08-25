#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GuideMissionOpenStageConditionExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B47360)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETROOTASGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B47370)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETROOTASGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B473D0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B47460)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B47430)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1B47480)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_ORDERNUMBER_OFFSET UNITYSDK_OFFSET(0x1B474D0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_TABLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1B47520)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETTABLOCALIZECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B47560)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_CLEARSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1B47580)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_LOCKSCENARIOTEXTLOCAILZECODE_OFFSET UNITYSDK_OFFSET(0x1B475D0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETLOCKSCENARIOTEXTLOCAILZECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B47610)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_SHORTCUTSCENARIOUI_OFFSET UNITYSDK_OFFSET(0x1B47630)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETSHORTCUTSCENARIOUIBYTES_OFFSET UNITYSDK_OFFSET(0x1B47670)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_CLEARSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B47690)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_LOCKSTAGETEXTLOCAILZECODE_OFFSET UNITYSDK_OFFSET(0x1B476E0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETLOCKSTAGETEXTLOCAILZECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B47720)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_SHORTCUTSTAGEUI_OFFSET UNITYSDK_OFFSET(0x1B47740)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETSHORTCUTSTAGEUIBYTES_OFFSET UNITYSDK_OFFSET(0x1B47780)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_CREATEGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B477A0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_STARTGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B47B40)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B479D0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDORDERNUMBER_OFFSET UNITYSDK_OFFSET(0x1B479A0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDTABLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1B47AC0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDCLEARSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1B47970)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDLOCKSCENARIOTEXTLOCAILZECODE_OFFSET UNITYSDK_OFFSET(0x1B47A90)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDSHORTCUTSCENARIOUI_OFFSET UNITYSDK_OFFSET(0x1B47A60)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDCLEARSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B47940)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDLOCKSTAGETEXTLOCAILZECODE_OFFSET UNITYSDK_OFFSET(0x1B47A30)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDSHORTCUTSTAGEUI_OFFSET UNITYSDK_OFFSET(0x1B47A00)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ENDGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B47AF0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_FINISHGUIDEMISSIONOPENSTAGECONDITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B47B60)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_FINISHSIZEPREFIXEDGUIDEMISSIONOPENSTAGECONDITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B47B80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GuideMissionOpenStageConditionExcel_TypeDefinitionIndex = 18149;

	class GuideMissionOpenStageConditionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GuideMissionOpenStageConditionExcel* GetRootAsGuideMissionOpenStageConditionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionOpenStageConditionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETROOTASGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GuideMissionOpenStageConditionExcel* GetRootAsGuideMissionOpenStageConditionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GuideMissionOpenStageConditionExcel* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionOpenStageConditionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GuideMissionOpenStageConditionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETROOTASGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GuideMissionOpenStageConditionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionOpenStageConditionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_OrderNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_ORDERNUMBER_OFFSET))(nullptr);
		}

		::System::String* get_TabLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_TABLOCALIZECODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTabLocalizeCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETTABLOCALIZECODEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_CLEARSCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::String* get_LockScenarioTextLocailzeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_LOCKSCENARIOTEXTLOCAILZECODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLockScenarioTextLocailzeCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETLOCKSCENARIOTEXTLOCAILZECODEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ShortcutScenarioUI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_SHORTCUTSCENARIOUI_OFFSET))(nullptr);
		}

		Il2CppObject* GetShortcutScenarioUIBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETSHORTCUTSCENARIOUIBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_CLEARSTAGEID_OFFSET))(nullptr);
		}

		::System::String* get_LockStageTextLocailzeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_LOCKSTAGETEXTLOCAILZECODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLockStageTextLocailzeCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETLOCKSTAGETEXTLOCAILZECODEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ShortcutStageUI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GET_SHORTCUTSTAGEUI_OFFSET))(nullptr);
		}

		Il2CppObject* GetShortcutStageUIBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_GETSHORTCUTSTAGEUIBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGuideMissionOpenStageConditionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_CREATEGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGuideMissionOpenStageConditionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_STARTGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrderNumber(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDORDERNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDTABLOCALIZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDCLEARSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLockScenarioTextLocailzeCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDLOCKSCENARIOTEXTLOCAILZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutScenarioUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDSHORTCUTSCENARIOUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDCLEARSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLockStageTextLocailzeCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDLOCKSTAGETEXTLOCAILZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutStageUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ADDSHORTCUTSTAGEUI_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGuideMissionOpenStageConditionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_ENDGUIDEMISSIONOPENSTAGECONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGuideMissionOpenStageConditionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_FINISHGUIDEMISSIONOPENSTAGECONDITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGuideMissionOpenStageConditionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCEL_FINISHSIZEPREFIXEDGUIDEMISSIONOPENSTAGECONDITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

