#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstKeyMappingExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD07270)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_GETROOTASCONSTKEYMAPPINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD07280)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_GETROOTASCONSTKEYMAPPINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD072E0)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD07370)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD07340)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD07390)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD07490)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD074E0)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_CREATECONSTKEYMAPPINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD07520)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_STARTCONSTKEYMAPPINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD07610)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD07590)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD07630)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD076C0)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_ENDCONSTKEYMAPPINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD075C0)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_FINISHCONSTKEYMAPPINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD07700)
#define FLATDATA_CONSTKEYMAPPINGEXCELTABLE_FINISHSIZEPREFIXEDCONSTKEYMAPPINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD07720)

namespace FlatData
{
	inline static constexpr unsigned int ConstKeyMappingExcelTable_TypeDefinitionIndex = 9224;

	class ConstKeyMappingExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstKeyMappingExcelTable* GetRootAsConstKeyMappingExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstKeyMappingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_GETROOTASCONSTKEYMAPPINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstKeyMappingExcelTable* GetRootAsConstKeyMappingExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstKeyMappingExcelTable* arg2)
		{
			return ((::FlatData::ConstKeyMappingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstKeyMappingExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_GETROOTASCONSTKEYMAPPINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstKeyMappingExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstKeyMappingExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstKeyMappingExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_CREATECONSTKEYMAPPINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstKeyMappingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_STARTCONSTKEYMAPPINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstKeyMappingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_ENDCONSTKEYMAPPINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstKeyMappingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_FINISHCONSTKEYMAPPINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstKeyMappingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCELTABLE_FINISHSIZEPREFIXEDCONSTKEYMAPPINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

