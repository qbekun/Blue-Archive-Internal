#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TacticArenaSimulatorSettingExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5C8C0)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_GETROOTASTACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5C8D0)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_GETROOTASTACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5C930)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD5C9C0)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5C990)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD5C9E0)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD5CAE0)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD5CB30)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_CREATETACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5CB70)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_STARTTACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5CC60)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD5CBE0)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5CC80)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5CD10)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_ENDTACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5CC10)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_FINISHTACTICARENASIMULATORSETTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5CD50)
#define FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_FINISHSIZEPREFIXEDTACTICARENASIMULATORSETTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5CD70)

namespace FlatData
{
	inline static constexpr unsigned int TacticArenaSimulatorSettingExcelTable_TypeDefinitionIndex = 9336;

	class TacticArenaSimulatorSettingExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TacticArenaSimulatorSettingExcelTable* GetRootAsTacticArenaSimulatorSettingExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TacticArenaSimulatorSettingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_GETROOTASTACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::TacticArenaSimulatorSettingExcelTable* GetRootAsTacticArenaSimulatorSettingExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::TacticArenaSimulatorSettingExcelTable* arg2)
		{
			return ((::FlatData::TacticArenaSimulatorSettingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TacticArenaSimulatorSettingExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_GETROOTASTACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TacticArenaSimulatorSettingExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TacticArenaSimulatorSettingExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticArenaSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_CREATETACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTacticArenaSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_STARTTACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTacticArenaSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_ENDTACTICARENASIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTacticArenaSimulatorSettingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_FINISHTACTICARENASIMULATORSETTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedTacticArenaSimulatorSettingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICARENASIMULATORSETTINGEXCELTABLE_FINISHSIZEPREFIXEDTACTICARENASIMULATORSETTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

