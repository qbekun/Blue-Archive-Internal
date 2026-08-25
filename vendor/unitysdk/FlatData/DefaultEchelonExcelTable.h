#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultEchelonExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_DEFAULTECHELONEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD30460)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_GETROOTASDEFAULTECHELONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD30470)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_GETROOTASDEFAULTECHELONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD304D0)
#define FLATDATA_DEFAULTECHELONEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD30560)
#define FLATDATA_DEFAULTECHELONEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD30530)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD30580)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD30680)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD306D0)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_CREATEDEFAULTECHELONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD30710)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_STARTDEFAULTECHELONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD30800)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD30780)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD30820)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD308B0)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_ENDDEFAULTECHELONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD307B0)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_FINISHDEFAULTECHELONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD308F0)
#define FLATDATA_DEFAULTECHELONEXCELTABLE_FINISHSIZEPREFIXEDDEFAULTECHELONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD30910)

namespace FlatData
{
	inline static constexpr unsigned int DefaultEchelonExcelTable_TypeDefinitionIndex = 9244;

	class DefaultEchelonExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultEchelonExcelTable* GetRootAsDefaultEchelonExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultEchelonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_GETROOTASDEFAULTECHELONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultEchelonExcelTable* GetRootAsDefaultEchelonExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultEchelonExcelTable* arg2)
		{
			return ((::FlatData::DefaultEchelonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultEchelonExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_GETROOTASDEFAULTECHELONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultEchelonExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultEchelonExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultEchelonExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_CREATEDEFAULTECHELONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDefaultEchelonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_STARTDEFAULTECHELONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultEchelonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_ENDDEFAULTECHELONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishDefaultEchelonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_FINISHDEFAULTECHELONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedDefaultEchelonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCELTABLE_FINISHSIZEPREFIXEDDEFAULTECHELONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

