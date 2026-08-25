#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstMinigameTBGExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD27D80)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_GETROOTASCONSTMINIGAMETBGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD27D90)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_GETROOTASCONSTMINIGAMETBGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD27DF0)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD27E80)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD27E50)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD27EA0)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD27FA0)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD27FF0)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_CREATECONSTMINIGAMETBGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD28030)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_STARTCONSTMINIGAMETBGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD28120)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD280A0)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD28140)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD281D0)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_ENDCONSTMINIGAMETBGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD280D0)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_FINISHCONSTMINIGAMETBGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD28210)
#define FLATDATA_CONSTMINIGAMETBGEXCELTABLE_FINISHSIZEPREFIXEDCONSTMINIGAMETBGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD28230)

namespace FlatData
{
	inline static constexpr unsigned int ConstMinigameTBGExcelTable_TypeDefinitionIndex = 9232;

	class ConstMinigameTBGExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameTBGExcelTable* GetRootAsConstMinigameTBGExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstMinigameTBGExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_GETROOTASCONSTMINIGAMETBGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMinigameTBGExcelTable* GetRootAsConstMinigameTBGExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstMinigameTBGExcelTable* arg2)
		{
			return ((::FlatData::ConstMinigameTBGExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstMinigameTBGExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_GETROOTASCONSTMINIGAMETBGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstMinigameTBGExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstMinigameTBGExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstMinigameTBGExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_CREATECONSTMINIGAMETBGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstMinigameTBGExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_STARTCONSTMINIGAMETBGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstMinigameTBGExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_ENDCONSTMINIGAMETBGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstMinigameTBGExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_FINISHCONSTMINIGAMETBGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstMinigameTBGExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCELTABLE_FINISHSIZEPREFIXEDCONSTMINIGAMETBGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

