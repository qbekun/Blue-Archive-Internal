#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldTutorialExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDTUTORIALEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD47750)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_GETROOTASFIELDTUTORIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD47760)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_GETROOTASFIELDTUTORIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD477C0)
#define FLATDATA_FIELDTUTORIALEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD47850)
#define FLATDATA_FIELDTUTORIALEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD47820)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD47870)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD47970)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD479C0)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_CREATEFIELDTUTORIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD47A00)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_STARTFIELDTUTORIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD47AF0)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD47A70)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD47B10)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD47BA0)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_ENDFIELDTUTORIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD47AA0)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_FINISHFIELDTUTORIALEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD47BE0)
#define FLATDATA_FIELDTUTORIALEXCELTABLE_FINISHSIZEPREFIXEDFIELDTUTORIALEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD47C00)

namespace FlatData
{
	inline static constexpr unsigned int FieldTutorialExcelTable_TypeDefinitionIndex = 9288;

	class FieldTutorialExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldTutorialExcelTable* GetRootAsFieldTutorialExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldTutorialExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_GETROOTASFIELDTUTORIALEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldTutorialExcelTable* GetRootAsFieldTutorialExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldTutorialExcelTable* arg2)
		{
			return ((::FlatData::FieldTutorialExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldTutorialExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_GETROOTASFIELDTUTORIALEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldTutorialExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldTutorialExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldTutorialExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_CREATEFIELDTUTORIALEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldTutorialExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_STARTFIELDTUTORIALEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldTutorialExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_ENDFIELDTUTORIALEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldTutorialExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_FINISHFIELDTUTORIALEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldTutorialExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCELTABLE_FINISHSIZEPREFIXEDFIELDTUTORIALEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

