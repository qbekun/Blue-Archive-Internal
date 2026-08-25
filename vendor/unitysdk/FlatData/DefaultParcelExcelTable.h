#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultParcelExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_DEFAULTPARCELEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD33320)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_GETROOTASDEFAULTPARCELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD33330)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_GETROOTASDEFAULTPARCELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD33390)
#define FLATDATA_DEFAULTPARCELEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD33420)
#define FLATDATA_DEFAULTPARCELEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD333F0)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD33440)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD33540)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD33590)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_CREATEDEFAULTPARCELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD335D0)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_STARTDEFAULTPARCELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD336C0)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD33640)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD336E0)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD33770)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_ENDDEFAULTPARCELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD33670)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_FINISHDEFAULTPARCELEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD337B0)
#define FLATDATA_DEFAULTPARCELEXCELTABLE_FINISHSIZEPREFIXEDDEFAULTPARCELEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD337D0)

namespace FlatData
{
	inline static constexpr unsigned int DefaultParcelExcelTable_TypeDefinitionIndex = 9250;

	class DefaultParcelExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultParcelExcelTable* GetRootAsDefaultParcelExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultParcelExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_GETROOTASDEFAULTPARCELEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultParcelExcelTable* GetRootAsDefaultParcelExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultParcelExcelTable* arg2)
		{
			return ((::FlatData::DefaultParcelExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultParcelExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_GETROOTASDEFAULTPARCELEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultParcelExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultParcelExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultParcelExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_CREATEDEFAULTPARCELEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDefaultParcelExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_STARTDEFAULTPARCELEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultParcelExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_ENDDEFAULTPARCELEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishDefaultParcelExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_FINISHDEFAULTPARCELEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedDefaultParcelExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCELTABLE_FINISHSIZEPREFIXEDDEFAULTPARCELEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

