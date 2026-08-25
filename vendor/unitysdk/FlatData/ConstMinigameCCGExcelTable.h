#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstMinigameCCGExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD08D10)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_GETROOTASCONSTMINIGAMECCGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD08D20)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_GETROOTASCONSTMINIGAMECCGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD08D80)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD08E10)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD08DE0)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD08E30)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD08F30)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD08F80)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_CREATECONSTMINIGAMECCGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD08FC0)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_STARTCONSTMINIGAMECCGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD090B0)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD09030)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD090D0)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD09160)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_ENDCONSTMINIGAMECCGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD09060)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_FINISHCONSTMINIGAMECCGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD091A0)
#define FLATDATA_CONSTMINIGAMECCGEXCELTABLE_FINISHSIZEPREFIXEDCONSTMINIGAMECCGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD091C0)

namespace FlatData
{
	inline static constexpr unsigned int ConstMinigameCCGExcelTable_TypeDefinitionIndex = 9226;

	class ConstMinigameCCGExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameCCGExcelTable* GetRootAsConstMinigameCCGExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstMinigameCCGExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_GETROOTASCONSTMINIGAMECCGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMinigameCCGExcelTable* GetRootAsConstMinigameCCGExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstMinigameCCGExcelTable* arg2)
		{
			return ((::FlatData::ConstMinigameCCGExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstMinigameCCGExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_GETROOTASCONSTMINIGAMECCGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstMinigameCCGExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstMinigameCCGExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstMinigameCCGExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_CREATECONSTMINIGAMECCGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstMinigameCCGExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_STARTCONSTMINIGAMECCGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstMinigameCCGExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_ENDCONSTMINIGAMECCGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstMinigameCCGExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_FINISHCONSTMINIGAMECCGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstMinigameCCGExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCELTABLE_FINISHSIZEPREFIXEDCONSTMINIGAMECCGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

