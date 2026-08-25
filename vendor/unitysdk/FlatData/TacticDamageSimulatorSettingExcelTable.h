#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TacticDamageSimulatorSettingExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5E090)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_GETROOTASTACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5E0A0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_GETROOTASTACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5E100)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD5E190)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5E160)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD5E1B0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD5E2B0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD5E300)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_CREATETACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5E340)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_STARTTACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5E430)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD5E3B0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5E450)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5E4E0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_ENDTACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5E3E0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_FINISHTACTICDAMAGESIMULATORSETTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5E520)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_FINISHSIZEPREFIXEDTACTICDAMAGESIMULATORSETTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5E540)

namespace FlatData
{
	inline static constexpr unsigned int TacticDamageSimulatorSettingExcelTable_TypeDefinitionIndex = 9338;

	class TacticDamageSimulatorSettingExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TacticDamageSimulatorSettingExcelTable* GetRootAsTacticDamageSimulatorSettingExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TacticDamageSimulatorSettingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_GETROOTASTACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::TacticDamageSimulatorSettingExcelTable* GetRootAsTacticDamageSimulatorSettingExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::TacticDamageSimulatorSettingExcelTable* arg2)
		{
			return ((::FlatData::TacticDamageSimulatorSettingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TacticDamageSimulatorSettingExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_GETROOTASTACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TacticDamageSimulatorSettingExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TacticDamageSimulatorSettingExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticDamageSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_CREATETACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTacticDamageSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_STARTTACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTacticDamageSimulatorSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_ENDTACTICDAMAGESIMULATORSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTacticDamageSimulatorSettingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_FINISHTACTICDAMAGESIMULATORSETTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedTacticDamageSimulatorSettingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCELTABLE_FINISHSIZEPREFIXEDTACTICDAMAGESIMULATORSETTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

