#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldCurtainCallFreeModeExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD38A70)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_GETROOTASFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD38A80)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_GETROOTASFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD38AE0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD38B70)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD38B40)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD38B90)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD38C90)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD38CE0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_CREATEFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD38D20)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_STARTFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD38E10)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD38D90)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD38E30)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD38EC0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_ENDFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD38DC0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_FINISHFIELDCURTAINCALLFREEMODEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD38F00)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_FINISHSIZEPREFIXEDFIELDCURTAINCALLFREEMODEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD38F20)

namespace FlatData
{
	inline static constexpr unsigned int FieldCurtainCallFreeModeExcelTable_TypeDefinitionIndex = 9262;

	class FieldCurtainCallFreeModeExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldCurtainCallFreeModeExcelTable* GetRootAsFieldCurtainCallFreeModeExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldCurtainCallFreeModeExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_GETROOTASFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldCurtainCallFreeModeExcelTable* GetRootAsFieldCurtainCallFreeModeExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldCurtainCallFreeModeExcelTable* arg2)
		{
			return ((::FlatData::FieldCurtainCallFreeModeExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldCurtainCallFreeModeExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_GETROOTASFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldCurtainCallFreeModeExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldCurtainCallFreeModeExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldCurtainCallFreeModeExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_CREATEFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldCurtainCallFreeModeExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_STARTFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldCurtainCallFreeModeExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_ENDFIELDCURTAINCALLFREEMODEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldCurtainCallFreeModeExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_FINISHFIELDCURTAINCALLFREEMODEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldCurtainCallFreeModeExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCELTABLE_FINISHSIZEPREFIXEDFIELDCURTAINCALLFREEMODEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

