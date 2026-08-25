#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldSceneExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDSCENEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD433D0)
#define FLATDATA_FIELDSCENEEXCELTABLE_GETROOTASFIELDSCENEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD433E0)
#define FLATDATA_FIELDSCENEEXCELTABLE_GETROOTASFIELDSCENEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD43440)
#define FLATDATA_FIELDSCENEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD434D0)
#define FLATDATA_FIELDSCENEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD434A0)
#define FLATDATA_FIELDSCENEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD434F0)
#define FLATDATA_FIELDSCENEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD435F0)
#define FLATDATA_FIELDSCENEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD43640)
#define FLATDATA_FIELDSCENEEXCELTABLE_CREATEFIELDSCENEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD43680)
#define FLATDATA_FIELDSCENEEXCELTABLE_STARTFIELDSCENEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD43770)
#define FLATDATA_FIELDSCENEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD436F0)
#define FLATDATA_FIELDSCENEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD43790)
#define FLATDATA_FIELDSCENEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD43820)
#define FLATDATA_FIELDSCENEEXCELTABLE_ENDFIELDSCENEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD43720)
#define FLATDATA_FIELDSCENEEXCELTABLE_FINISHFIELDSCENEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD43860)
#define FLATDATA_FIELDSCENEEXCELTABLE_FINISHSIZEPREFIXEDFIELDSCENEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD43880)

namespace FlatData
{
	inline static constexpr unsigned int FieldSceneExcelTable_TypeDefinitionIndex = 9282;

	class FieldSceneExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldSceneExcelTable* GetRootAsFieldSceneExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldSceneExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_GETROOTASFIELDSCENEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldSceneExcelTable* GetRootAsFieldSceneExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldSceneExcelTable* arg2)
		{
			return ((::FlatData::FieldSceneExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldSceneExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_GETROOTASFIELDSCENEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldSceneExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldSceneExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldSceneExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_CREATEFIELDSCENEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldSceneExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_STARTFIELDSCENEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldSceneExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_ENDFIELDSCENEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldSceneExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_FINISHFIELDSCENEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldSceneExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCELTABLE_FINISHSIZEPREFIXEDFIELDSCENEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

