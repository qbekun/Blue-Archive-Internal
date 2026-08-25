#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TacticTimeAttackSimulatorConfigExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD60400)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_GETROOTASTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD60410)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_GETROOTASTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD60470)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD60500)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD604D0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD60520)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD60620)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD60670)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_CREATETACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD606B0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_STARTTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD607A0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD60720)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD607C0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD60850)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_ENDTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD60750)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_FINISHTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD60890)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_FINISHSIZEPREFIXEDTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD608B0)

namespace FlatData
{
	inline static constexpr unsigned int TacticTimeAttackSimulatorConfigExcelTable_TypeDefinitionIndex = 9342;

	class TacticTimeAttackSimulatorConfigExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TacticTimeAttackSimulatorConfigExcelTable* GetRootAsTacticTimeAttackSimulatorConfigExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TacticTimeAttackSimulatorConfigExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_GETROOTASTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::TacticTimeAttackSimulatorConfigExcelTable* GetRootAsTacticTimeAttackSimulatorConfigExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::TacticTimeAttackSimulatorConfigExcelTable* arg2)
		{
			return ((::FlatData::TacticTimeAttackSimulatorConfigExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TacticTimeAttackSimulatorConfigExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_GETROOTASTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TacticTimeAttackSimulatorConfigExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TacticTimeAttackSimulatorConfigExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticTimeAttackSimulatorConfigExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_CREATETACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTacticTimeAttackSimulatorConfigExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_STARTTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTacticTimeAttackSimulatorConfigExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_ENDTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTacticTimeAttackSimulatorConfigExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_FINISHTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedTacticTimeAttackSimulatorConfigExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCELTABLE_FINISHSIZEPREFIXEDTACTICTIMEATTACKSIMULATORCONFIGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

