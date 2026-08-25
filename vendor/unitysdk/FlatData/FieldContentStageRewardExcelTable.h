#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldContentStageRewardExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD37C20)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_GETROOTASFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD37C30)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_GETROOTASFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD37C90)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD37D20)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD37CF0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD37D40)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD37E40)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD37E90)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_CREATEFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD37ED0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_STARTFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD37FC0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD37F40)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD37FE0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD38070)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_ENDFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD37F70)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_FINISHFIELDCONTENTSTAGEREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD380B0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_FINISHSIZEPREFIXEDFIELDCONTENTSTAGEREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD380D0)

namespace FlatData
{
	inline static constexpr unsigned int FieldContentStageRewardExcelTable_TypeDefinitionIndex = 9260;

	class FieldContentStageRewardExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldContentStageRewardExcelTable* GetRootAsFieldContentStageRewardExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldContentStageRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_GETROOTASFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldContentStageRewardExcelTable* GetRootAsFieldContentStageRewardExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldContentStageRewardExcelTable* arg2)
		{
			return ((::FlatData::FieldContentStageRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldContentStageRewardExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_GETROOTASFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldContentStageRewardExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldContentStageRewardExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldContentStageRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_CREATEFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldContentStageRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_STARTFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldContentStageRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_ENDFIELDCONTENTSTAGEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldContentStageRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_FINISHFIELDCONTENTSTAGEREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldContentStageRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCELTABLE_FINISHSIZEPREFIXEDFIELDCONTENTSTAGEREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

