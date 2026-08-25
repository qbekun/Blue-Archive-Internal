#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class RecipeCraftExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_RECIPECRAFTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD55530)
#define FLATDATA_RECIPECRAFTEXCELTABLE_GETROOTASRECIPECRAFTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD55540)
#define FLATDATA_RECIPECRAFTEXCELTABLE_GETROOTASRECIPECRAFTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD555A0)
#define FLATDATA_RECIPECRAFTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD55630)
#define FLATDATA_RECIPECRAFTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD55600)
#define FLATDATA_RECIPECRAFTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD55650)
#define FLATDATA_RECIPECRAFTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD55750)
#define FLATDATA_RECIPECRAFTEXCELTABLE_CREATERECIPECRAFTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD55790)
#define FLATDATA_RECIPECRAFTEXCELTABLE_STARTRECIPECRAFTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD55880)
#define FLATDATA_RECIPECRAFTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD55800)
#define FLATDATA_RECIPECRAFTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD558A0)
#define FLATDATA_RECIPECRAFTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD55930)
#define FLATDATA_RECIPECRAFTEXCELTABLE_ENDRECIPECRAFTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD55830)
#define FLATDATA_RECIPECRAFTEXCELTABLE_FINISHRECIPECRAFTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD55970)
#define FLATDATA_RECIPECRAFTEXCELTABLE_FINISHSIZEPREFIXEDRECIPECRAFTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD55990)

namespace FlatData
{
	inline static constexpr unsigned int RecipeCraftExcelTable_TypeDefinitionIndex = 9319;

	class RecipeCraftExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::RecipeCraftExcelTable* GetRootAsRecipeCraftExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::RecipeCraftExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_GETROOTASRECIPECRAFTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::RecipeCraftExcelTable* GetRootAsRecipeCraftExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::RecipeCraftExcelTable* arg2)
		{
			return ((::FlatData::RecipeCraftExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::RecipeCraftExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_GETROOTASRECIPECRAFTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::RecipeCraftExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::RecipeCraftExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRecipeCraftExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_CREATERECIPECRAFTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRecipeCraftExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_STARTRECIPECRAFTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndRecipeCraftExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_ENDRECIPECRAFTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRecipeCraftExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_FINISHRECIPECRAFTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedRecipeCraftExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCELTABLE_FINISHSIZEPREFIXEDRECIPECRAFTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

