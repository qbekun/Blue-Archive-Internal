#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultCharacterExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2F040)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_GETROOTASDEFAULTCHARACTEREXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2F050)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_GETROOTASDEFAULTCHARACTEREXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2F0B0)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD2F140)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD2F110)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD2F160)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD2F260)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD2F2B0)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_CREATEDEFAULTCHARACTEREXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2F2F0)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_STARTDEFAULTCHARACTEREXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2F3E0)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD2F360)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2F400)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2F490)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_ENDDEFAULTCHARACTEREXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2F390)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_FINISHDEFAULTCHARACTEREXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2F4D0)
#define FLATDATA_DEFAULTCHARACTEREXCELTABLE_FINISHSIZEPREFIXEDDEFAULTCHARACTEREXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2F4F0)

namespace FlatData
{
	inline static constexpr unsigned int DefaultCharacterExcelTable_TypeDefinitionIndex = 9242;

	class DefaultCharacterExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultCharacterExcelTable* GetRootAsDefaultCharacterExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultCharacterExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_GETROOTASDEFAULTCHARACTEREXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultCharacterExcelTable* GetRootAsDefaultCharacterExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultCharacterExcelTable* arg2)
		{
			return ((::FlatData::DefaultCharacterExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultCharacterExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_GETROOTASDEFAULTCHARACTEREXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultCharacterExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultCharacterExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultCharacterExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_CREATEDEFAULTCHARACTEREXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDefaultCharacterExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_STARTDEFAULTCHARACTEREXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultCharacterExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_ENDDEFAULTCHARACTEREXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishDefaultCharacterExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_FINISHDEFAULTCHARACTEREXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedDefaultCharacterExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCELTABLE_FINISHSIZEPREFIXEDDEFAULTCHARACTEREXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

