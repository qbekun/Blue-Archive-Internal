#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstCombatExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTCOMBATEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCED830)
#define FLATDATA_CONSTCOMBATEXCELTABLE_GETROOTASCONSTCOMBATEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCED840)
#define FLATDATA_CONSTCOMBATEXCELTABLE_GETROOTASCONSTCOMBATEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCED8A0)
#define FLATDATA_CONSTCOMBATEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCED930)
#define FLATDATA_CONSTCOMBATEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCED900)
#define FLATDATA_CONSTCOMBATEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCED950)
#define FLATDATA_CONSTCOMBATEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCEDA50)
#define FLATDATA_CONSTCOMBATEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCEDAA0)
#define FLATDATA_CONSTCOMBATEXCELTABLE_CREATECONSTCOMBATEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCEDAE0)
#define FLATDATA_CONSTCOMBATEXCELTABLE_STARTCONSTCOMBATEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCEDBD0)
#define FLATDATA_CONSTCOMBATEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCEDB50)
#define FLATDATA_CONSTCOMBATEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCEDBF0)
#define FLATDATA_CONSTCOMBATEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCEDC80)
#define FLATDATA_CONSTCOMBATEXCELTABLE_ENDCONSTCOMBATEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCEDB80)
#define FLATDATA_CONSTCOMBATEXCELTABLE_FINISHCONSTCOMBATEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCEDCC0)
#define FLATDATA_CONSTCOMBATEXCELTABLE_FINISHSIZEPREFIXEDCONSTCOMBATEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCEDCE0)

namespace FlatData
{
	inline static constexpr unsigned int ConstCombatExcelTable_TypeDefinitionIndex = 9212;

	class ConstCombatExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstCombatExcelTable* GetRootAsConstCombatExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstCombatExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_GETROOTASCONSTCOMBATEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstCombatExcelTable* GetRootAsConstCombatExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstCombatExcelTable* arg2)
		{
			return ((::FlatData::ConstCombatExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstCombatExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_GETROOTASCONSTCOMBATEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstCombatExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstCombatExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstCombatExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_CREATECONSTCOMBATEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstCombatExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_STARTCONSTCOMBATEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstCombatExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_ENDCONSTCOMBATEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstCombatExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_FINISHCONSTCOMBATEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstCombatExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMBATEXCELTABLE_FINISHSIZEPREFIXEDCONSTCOMBATEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

