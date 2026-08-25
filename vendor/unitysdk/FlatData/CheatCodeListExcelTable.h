#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class CheatCodeListExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CHEATCODELISTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE6BA0)
#define FLATDATA_CHEATCODELISTEXCELTABLE_GETROOTASCHEATCODELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE6BB0)
#define FLATDATA_CHEATCODELISTEXCELTABLE_GETROOTASCHEATCODELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE6C10)
#define FLATDATA_CHEATCODELISTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCE6CA0)
#define FLATDATA_CHEATCODELISTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE6C70)
#define FLATDATA_CHEATCODELISTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCE6CC0)
#define FLATDATA_CHEATCODELISTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCE6DC0)
#define FLATDATA_CHEATCODELISTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCE6E10)
#define FLATDATA_CHEATCODELISTEXCELTABLE_CREATECHEATCODELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE6E50)
#define FLATDATA_CHEATCODELISTEXCELTABLE_STARTCHEATCODELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE6F40)
#define FLATDATA_CHEATCODELISTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE6EC0)
#define FLATDATA_CHEATCODELISTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE6F60)
#define FLATDATA_CHEATCODELISTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE6FF0)
#define FLATDATA_CHEATCODELISTEXCELTABLE_ENDCHEATCODELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE6EF0)
#define FLATDATA_CHEATCODELISTEXCELTABLE_FINISHCHEATCODELISTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE7030)
#define FLATDATA_CHEATCODELISTEXCELTABLE_FINISHSIZEPREFIXEDCHEATCODELISTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE7050)

namespace FlatData
{
	inline static constexpr unsigned int CheatCodeListExcelTable_TypeDefinitionIndex = 9202;

	class CheatCodeListExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::CheatCodeListExcelTable* GetRootAsCheatCodeListExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::CheatCodeListExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_GETROOTASCHEATCODELISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::CheatCodeListExcelTable* GetRootAsCheatCodeListExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::CheatCodeListExcelTable* arg2)
		{
			return ((::FlatData::CheatCodeListExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::CheatCodeListExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_GETROOTASCHEATCODELISTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CheatCodeListExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::CheatCodeListExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCheatCodeListExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_CREATECHEATCODELISTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartCheatCodeListExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_STARTCHEATCODELISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndCheatCodeListExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_ENDCHEATCODELISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCheatCodeListExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_FINISHCHEATCODELISTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedCheatCodeListExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCELTABLE_FINISHSIZEPREFIXEDCHEATCODELISTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

