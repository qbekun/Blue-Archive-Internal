#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldRewardExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD427A0)
#define FLATDATA_FIELDREWARDEXCELTABLE_GETROOTASFIELDREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD427B0)
#define FLATDATA_FIELDREWARDEXCELTABLE_GETROOTASFIELDREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD42810)
#define FLATDATA_FIELDREWARDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD428A0)
#define FLATDATA_FIELDREWARDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD42870)
#define FLATDATA_FIELDREWARDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD428C0)
#define FLATDATA_FIELDREWARDEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD429C0)
#define FLATDATA_FIELDREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD42A10)
#define FLATDATA_FIELDREWARDEXCELTABLE_CREATEFIELDREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD42A50)
#define FLATDATA_FIELDREWARDEXCELTABLE_STARTFIELDREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD42B40)
#define FLATDATA_FIELDREWARDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD42AC0)
#define FLATDATA_FIELDREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD42B60)
#define FLATDATA_FIELDREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD42BF0)
#define FLATDATA_FIELDREWARDEXCELTABLE_ENDFIELDREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD42AF0)
#define FLATDATA_FIELDREWARDEXCELTABLE_FINISHFIELDREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD42C30)
#define FLATDATA_FIELDREWARDEXCELTABLE_FINISHSIZEPREFIXEDFIELDREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD42C50)

namespace FlatData
{
	inline static constexpr unsigned int FieldRewardExcelTable_TypeDefinitionIndex = 9280;

	class FieldRewardExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldRewardExcelTable* GetRootAsFieldRewardExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_GETROOTASFIELDREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldRewardExcelTable* GetRootAsFieldRewardExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldRewardExcelTable* arg2)
		{
			return ((::FlatData::FieldRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldRewardExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_GETROOTASFIELDREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldRewardExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldRewardExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_CREATEFIELDREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_STARTFIELDREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_ENDFIELDREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_FINISHFIELDREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCELTABLE_FINISHSIZEPREFIXEDFIELDREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

