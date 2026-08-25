#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TacticSimulatorSettingExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5FB40)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_GETROOTASTACTICSIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5FB50)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_GETROOTASTACTICSIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5FBB0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD5FC40)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5FC10)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD5FC60)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD5FD60)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD5FDB0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_CREATETACTICSIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5FDF0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_STARTTACTICSIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5FEE0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD5FE60)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5FF00)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5FF90)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_ENDTACTICSIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5FE90)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_FINISHTACTICSIMULATORSETTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5FFD0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_FINISHSIZEPREFIXEDTACTICSIMULATORSETTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5FFF0)

namespace FlatData
{
	inline static constexpr unsigned int TacticSimulatorSettingExcelTable_TypeDefinitionIndex = 9340;

	class TacticSimulatorSettingExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TacticSimulatorSettingExcelTable* GetRootAsTacticSimulatorSettingExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TacticSimulatorSettingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_GETROOTASTACTICSIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::TacticSimulatorSettingExcelTable* GetRootAsTacticSimulatorSettingExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::TacticSimulatorSettingExcelTable* arg2)
		{
			return ((::FlatData::TacticSimulatorSettingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TacticSimulatorSettingExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_GETROOTASTACTICSIMULATORSETTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TacticSimulatorSettingExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TacticSimulatorSettingExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_CREATETACTICSIMULATORSETTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTacticSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_STARTTACTICSIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTacticSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_ENDTACTICSIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTacticSimulatorSettingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_FINISHTACTICSIMULATORSETTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedTacticSimulatorSettingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCELTABLE_FINISHSIZEPREFIXEDTACTICSIMULATORSETTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

