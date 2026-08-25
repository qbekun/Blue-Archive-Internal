#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TranscendenceRecipeExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD61A20)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_GETROOTASTRANSCENDENCERECIPEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD61A30)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_GETROOTASTRANSCENDENCERECIPEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD61A90)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD61B20)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD61AF0)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD61B40)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD61C40)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_CREATETRANSCENDENCERECIPEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD61C80)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_STARTTRANSCENDENCERECIPEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD61D70)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD61CF0)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD61D90)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD61E20)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_ENDTRANSCENDENCERECIPEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD61D20)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_FINISHTRANSCENDENCERECIPEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD61E60)
#define FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_FINISHSIZEPREFIXEDTRANSCENDENCERECIPEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD61E80)

namespace FlatData
{
	inline static constexpr unsigned int TranscendenceRecipeExcelTable_TypeDefinitionIndex = 9346;

	class TranscendenceRecipeExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TranscendenceRecipeExcelTable* GetRootAsTranscendenceRecipeExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TranscendenceRecipeExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_GETROOTASTRANSCENDENCERECIPEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::TranscendenceRecipeExcelTable* GetRootAsTranscendenceRecipeExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::TranscendenceRecipeExcelTable* arg2)
		{
			return ((::FlatData::TranscendenceRecipeExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TranscendenceRecipeExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_GETROOTASTRANSCENDENCERECIPEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TranscendenceRecipeExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TranscendenceRecipeExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTranscendenceRecipeExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_CREATETRANSCENDENCERECIPEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTranscendenceRecipeExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_STARTTRANSCENDENCERECIPEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTranscendenceRecipeExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_ENDTRANSCENDENCERECIPEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTranscendenceRecipeExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_FINISHTRANSCENDENCERECIPEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedTranscendenceRecipeExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCELTABLE_FINISHSIZEPREFIXEDTRANSCENDENCERECIPEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

