#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class BossPhaseExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_BOSSPHASEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE40B0)
#define FLATDATA_BOSSPHASEEXCELTABLE_GETROOTASBOSSPHASEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE40C0)
#define FLATDATA_BOSSPHASEEXCELTABLE_GETROOTASBOSSPHASEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE4120)
#define FLATDATA_BOSSPHASEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCE41B0)
#define FLATDATA_BOSSPHASEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE4180)
#define FLATDATA_BOSSPHASEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCE41D0)
#define FLATDATA_BOSSPHASEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCE42D0)
#define FLATDATA_BOSSPHASEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCE4320)
#define FLATDATA_BOSSPHASEEXCELTABLE_CREATEBOSSPHASEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE4360)
#define FLATDATA_BOSSPHASEEXCELTABLE_STARTBOSSPHASEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE4450)
#define FLATDATA_BOSSPHASEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE43D0)
#define FLATDATA_BOSSPHASEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE4470)
#define FLATDATA_BOSSPHASEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE4500)
#define FLATDATA_BOSSPHASEEXCELTABLE_ENDBOSSPHASEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE4400)
#define FLATDATA_BOSSPHASEEXCELTABLE_FINISHBOSSPHASEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE4540)
#define FLATDATA_BOSSPHASEEXCELTABLE_FINISHSIZEPREFIXEDBOSSPHASEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE4560)

namespace FlatData
{
	inline static constexpr unsigned int BossPhaseExcelTable_TypeDefinitionIndex = 9196;

	class BossPhaseExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::BossPhaseExcelTable* GetRootAsBossPhaseExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::BossPhaseExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_GETROOTASBOSSPHASEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::BossPhaseExcelTable* GetRootAsBossPhaseExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::BossPhaseExcelTable* arg2)
		{
			return ((::FlatData::BossPhaseExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::BossPhaseExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_GETROOTASBOSSPHASEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BossPhaseExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::BossPhaseExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBossPhaseExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_CREATEBOSSPHASEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartBossPhaseExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_STARTBOSSPHASEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndBossPhaseExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_ENDBOSSPHASEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBossPhaseExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_FINISHBOSSPHASEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedBossPhaseExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCELTABLE_FINISHSIZEPREFIXEDBOSSPHASEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

