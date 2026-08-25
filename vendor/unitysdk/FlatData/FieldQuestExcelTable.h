#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldQuestExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDQUESTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD414A0)
#define FLATDATA_FIELDQUESTEXCELTABLE_GETROOTASFIELDQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD414B0)
#define FLATDATA_FIELDQUESTEXCELTABLE_GETROOTASFIELDQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD41510)
#define FLATDATA_FIELDQUESTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD415A0)
#define FLATDATA_FIELDQUESTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD41570)
#define FLATDATA_FIELDQUESTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD415C0)
#define FLATDATA_FIELDQUESTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD416C0)
#define FLATDATA_FIELDQUESTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD41710)
#define FLATDATA_FIELDQUESTEXCELTABLE_CREATEFIELDQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD41750)
#define FLATDATA_FIELDQUESTEXCELTABLE_STARTFIELDQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD41840)
#define FLATDATA_FIELDQUESTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD417C0)
#define FLATDATA_FIELDQUESTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD41860)
#define FLATDATA_FIELDQUESTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD418F0)
#define FLATDATA_FIELDQUESTEXCELTABLE_ENDFIELDQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD417F0)
#define FLATDATA_FIELDQUESTEXCELTABLE_FINISHFIELDQUESTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD41930)
#define FLATDATA_FIELDQUESTEXCELTABLE_FINISHSIZEPREFIXEDFIELDQUESTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD41950)

namespace FlatData
{
	inline static constexpr unsigned int FieldQuestExcelTable_TypeDefinitionIndex = 9278;

	class FieldQuestExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldQuestExcelTable* GetRootAsFieldQuestExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldQuestExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_GETROOTASFIELDQUESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldQuestExcelTable* GetRootAsFieldQuestExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldQuestExcelTable* arg2)
		{
			return ((::FlatData::FieldQuestExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldQuestExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_GETROOTASFIELDQUESTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldQuestExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldQuestExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldQuestExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_CREATEFIELDQUESTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldQuestExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_STARTFIELDQUESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldQuestExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_ENDFIELDQUESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldQuestExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_FINISHFIELDQUESTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldQuestExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCELTABLE_FINISHSIZEPREFIXEDFIELDQUESTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

