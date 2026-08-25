#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultFurnitureExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD31330)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_GETROOTASDEFAULTFURNITUREEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD31340)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_GETROOTASDEFAULTFURNITUREEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD313A0)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD31430)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD31400)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD31450)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD31550)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD315A0)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_CREATEDEFAULTFURNITUREEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD315E0)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_STARTDEFAULTFURNITUREEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD316D0)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD31650)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD316F0)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD31780)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_ENDDEFAULTFURNITUREEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD31680)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_FINISHDEFAULTFURNITUREEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD317C0)
#define FLATDATA_DEFAULTFURNITUREEXCELTABLE_FINISHSIZEPREFIXEDDEFAULTFURNITUREEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD317E0)

namespace FlatData
{
	inline static constexpr unsigned int DefaultFurnitureExcelTable_TypeDefinitionIndex = 9246;

	class DefaultFurnitureExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultFurnitureExcelTable* GetRootAsDefaultFurnitureExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultFurnitureExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_GETROOTASDEFAULTFURNITUREEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultFurnitureExcelTable* GetRootAsDefaultFurnitureExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultFurnitureExcelTable* arg2)
		{
			return ((::FlatData::DefaultFurnitureExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultFurnitureExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_GETROOTASDEFAULTFURNITUREEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultFurnitureExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultFurnitureExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultFurnitureExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_CREATEDEFAULTFURNITUREEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDefaultFurnitureExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_STARTDEFAULTFURNITUREEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultFurnitureExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_ENDDEFAULTFURNITUREEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishDefaultFurnitureExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_FINISHDEFAULTFURNITUREEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedDefaultFurnitureExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCELTABLE_FINISHSIZEPREFIXEDDEFAULTFURNITUREEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

