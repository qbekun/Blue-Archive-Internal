#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class MinigameCardExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_MINIGAMECARDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD50780)
#define FLATDATA_MINIGAMECARDEXCELTABLE_GETROOTASMINIGAMECARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD50790)
#define FLATDATA_MINIGAMECARDEXCELTABLE_GETROOTASMINIGAMECARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD507F0)
#define FLATDATA_MINIGAMECARDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD50880)
#define FLATDATA_MINIGAMECARDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD50850)
#define FLATDATA_MINIGAMECARDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD508A0)
#define FLATDATA_MINIGAMECARDEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD509A0)
#define FLATDATA_MINIGAMECARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD509F0)
#define FLATDATA_MINIGAMECARDEXCELTABLE_CREATEMINIGAMECARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD50A30)
#define FLATDATA_MINIGAMECARDEXCELTABLE_STARTMINIGAMECARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD50B20)
#define FLATDATA_MINIGAMECARDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD50AA0)
#define FLATDATA_MINIGAMECARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD50B40)
#define FLATDATA_MINIGAMECARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD50BD0)
#define FLATDATA_MINIGAMECARDEXCELTABLE_ENDMINIGAMECARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD50AD0)
#define FLATDATA_MINIGAMECARDEXCELTABLE_FINISHMINIGAMECARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD50C10)
#define FLATDATA_MINIGAMECARDEXCELTABLE_FINISHSIZEPREFIXEDMINIGAMECARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD50C30)

namespace FlatData
{
	inline static constexpr unsigned int MinigameCardExcelTable_TypeDefinitionIndex = 9306;

	class MinigameCardExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::MinigameCardExcelTable* GetRootAsMinigameCardExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::MinigameCardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_GETROOTASMINIGAMECARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::MinigameCardExcelTable* GetRootAsMinigameCardExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::MinigameCardExcelTable* arg2)
		{
			return ((::FlatData::MinigameCardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::MinigameCardExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_GETROOTASMINIGAMECARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::MinigameCardExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::MinigameCardExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCardExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_CREATEMINIGAMECARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartMinigameCardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_STARTMINIGAMECARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndMinigameCardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_ENDMINIGAMECARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_FINISHMINIGAMECARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCELTABLE_FINISHSIZEPREFIXEDMINIGAMECARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

