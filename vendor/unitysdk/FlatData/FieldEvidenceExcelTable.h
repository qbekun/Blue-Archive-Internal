#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldEvidenceExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDEVIDENCEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3AE80)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_GETROOTASFIELDEVIDENCEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3AE90)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_GETROOTASFIELDEVIDENCEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3AEF0)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD3AF80)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3AF50)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD3AFA0)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD3B0A0)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD3B0F0)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_CREATEFIELDEVIDENCEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3B130)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_STARTFIELDEVIDENCEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3B220)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD3B1A0)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3B240)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3B2D0)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_ENDFIELDEVIDENCEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3B1D0)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_FINISHFIELDEVIDENCEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3B310)
#define FLATDATA_FIELDEVIDENCEEXCELTABLE_FINISHSIZEPREFIXEDFIELDEVIDENCEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3B330)

namespace FlatData
{
	inline static constexpr unsigned int FieldEvidenceExcelTable_TypeDefinitionIndex = 9266;

	class FieldEvidenceExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldEvidenceExcelTable* GetRootAsFieldEvidenceExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldEvidenceExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_GETROOTASFIELDEVIDENCEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldEvidenceExcelTable* GetRootAsFieldEvidenceExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldEvidenceExcelTable* arg2)
		{
			return ((::FlatData::FieldEvidenceExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldEvidenceExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_GETROOTASFIELDEVIDENCEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldEvidenceExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldEvidenceExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldEvidenceExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_CREATEFIELDEVIDENCEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldEvidenceExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_STARTFIELDEVIDENCEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldEvidenceExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_ENDFIELDEVIDENCEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldEvidenceExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_FINISHFIELDEVIDENCEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldEvidenceExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCELTABLE_FINISHSIZEPREFIXEDFIELDEVIDENCEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

