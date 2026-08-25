#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldWorldMapZoneExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD48650)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_GETROOTASFIELDWORLDMAPZONEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD48660)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_GETROOTASFIELDWORLDMAPZONEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD486C0)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD48750)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD48720)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD48770)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD48870)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD488C0)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_CREATEFIELDWORLDMAPZONEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD48900)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_STARTFIELDWORLDMAPZONEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD489F0)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD48970)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD48A10)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD48AA0)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_ENDFIELDWORLDMAPZONEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD489A0)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_FINISHFIELDWORLDMAPZONEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD48AE0)
#define FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_FINISHSIZEPREFIXEDFIELDWORLDMAPZONEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD48B00)

namespace FlatData
{
	inline static constexpr unsigned int FieldWorldMapZoneExcelTable_TypeDefinitionIndex = 9290;

	class FieldWorldMapZoneExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldWorldMapZoneExcelTable* GetRootAsFieldWorldMapZoneExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldWorldMapZoneExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_GETROOTASFIELDWORLDMAPZONEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldWorldMapZoneExcelTable* GetRootAsFieldWorldMapZoneExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldWorldMapZoneExcelTable* arg2)
		{
			return ((::FlatData::FieldWorldMapZoneExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldWorldMapZoneExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_GETROOTASFIELDWORLDMAPZONEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldWorldMapZoneExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldWorldMapZoneExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldWorldMapZoneExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_CREATEFIELDWORLDMAPZONEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldWorldMapZoneExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_STARTFIELDWORLDMAPZONEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldWorldMapZoneExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_ENDFIELDWORLDMAPZONEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldWorldMapZoneExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_FINISHFIELDWORLDMAPZONEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldWorldMapZoneExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCELTABLE_FINISHSIZEPREFIXEDFIELDWORLDMAPZONEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

