#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class BattleExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_BATTLEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE0EC0)
#define FLATDATA_BATTLEEXCELTABLE_GETROOTASBATTLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE0ED0)
#define FLATDATA_BATTLEEXCELTABLE_GETROOTASBATTLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE0F30)
#define FLATDATA_BATTLEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCE0FC0)
#define FLATDATA_BATTLEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE0F90)
#define FLATDATA_BATTLEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCE0FE0)
#define FLATDATA_BATTLEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCE10E0)
#define FLATDATA_BATTLEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCE1130)
#define FLATDATA_BATTLEEXCELTABLE_CREATEBATTLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE1170)
#define FLATDATA_BATTLEEXCELTABLE_STARTBATTLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE1260)
#define FLATDATA_BATTLEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE11E0)
#define FLATDATA_BATTLEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE1280)
#define FLATDATA_BATTLEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE1310)
#define FLATDATA_BATTLEEXCELTABLE_ENDBATTLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE1210)
#define FLATDATA_BATTLEEXCELTABLE_FINISHBATTLEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE1350)
#define FLATDATA_BATTLEEXCELTABLE_FINISHSIZEPREFIXEDBATTLEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE1370)

namespace FlatData
{
	inline static constexpr unsigned int BattleExcelTable_TypeDefinitionIndex = 9194;

	class BattleExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::BattleExcelTable* GetRootAsBattleExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::BattleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_GETROOTASBATTLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::BattleExcelTable* GetRootAsBattleExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::BattleExcelTable* arg2)
		{
			return ((::FlatData::BattleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::BattleExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_GETROOTASBATTLEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BattleExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::BattleExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattleExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_CREATEBATTLEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartBattleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_STARTBATTLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndBattleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_ENDBATTLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBattleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_FINISHBATTLEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedBattleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCELTABLE_FINISHSIZEPREFIXEDBATTLEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

