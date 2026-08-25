#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class KnockBackExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_KNOCKBACKEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4B5C0)
#define FLATDATA_KNOCKBACKEXCELTABLE_GETROOTASKNOCKBACKEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4B5D0)
#define FLATDATA_KNOCKBACKEXCELTABLE_GETROOTASKNOCKBACKEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4B630)
#define FLATDATA_KNOCKBACKEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD4B6C0)
#define FLATDATA_KNOCKBACKEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4B690)
#define FLATDATA_KNOCKBACKEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD4B6E0)
#define FLATDATA_KNOCKBACKEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD4B7E0)
#define FLATDATA_KNOCKBACKEXCELTABLE_CREATEKNOCKBACKEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4B820)
#define FLATDATA_KNOCKBACKEXCELTABLE_STARTKNOCKBACKEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4B910)
#define FLATDATA_KNOCKBACKEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD4B890)
#define FLATDATA_KNOCKBACKEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4B930)
#define FLATDATA_KNOCKBACKEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4B9C0)
#define FLATDATA_KNOCKBACKEXCELTABLE_ENDKNOCKBACKEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4B8C0)
#define FLATDATA_KNOCKBACKEXCELTABLE_FINISHKNOCKBACKEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4BA00)
#define FLATDATA_KNOCKBACKEXCELTABLE_FINISHSIZEPREFIXEDKNOCKBACKEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4BA20)

namespace FlatData
{
	inline static constexpr unsigned int KnockBackExcelTable_TypeDefinitionIndex = 9298;

	class KnockBackExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::KnockBackExcelTable* GetRootAsKnockBackExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::KnockBackExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_GETROOTASKNOCKBACKEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::KnockBackExcelTable* GetRootAsKnockBackExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::KnockBackExcelTable* arg2)
		{
			return ((::FlatData::KnockBackExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::KnockBackExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_GETROOTASKNOCKBACKEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::KnockBackExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::KnockBackExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKnockBackExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_CREATEKNOCKBACKEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartKnockBackExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_STARTKNOCKBACKEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndKnockBackExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_ENDKNOCKBACKEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKnockBackExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_FINISHKNOCKBACKEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedKnockBackExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCELTABLE_FINISHSIZEPREFIXEDKNOCKBACKEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

