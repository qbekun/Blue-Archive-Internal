#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstContentsExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTCONTENTSEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD044F0)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_GETROOTASCONSTCONTENTSEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD04500)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_GETROOTASCONSTCONTENTSEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD04560)
#define FLATDATA_CONSTCONTENTSEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD045F0)
#define FLATDATA_CONSTCONTENTSEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD045C0)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD04610)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD04710)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD04760)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_CREATECONSTCONTENTSEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD047A0)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_STARTCONSTCONTENTSEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD04890)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD04810)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD048B0)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD04940)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_ENDCONSTCONTENTSEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD04840)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_FINISHCONSTCONTENTSEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD04980)
#define FLATDATA_CONSTCONTENTSEXCELTABLE_FINISHSIZEPREFIXEDCONSTCONTENTSEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD049A0)

namespace FlatData
{
	inline static constexpr unsigned int ConstContentsExcelTable_TypeDefinitionIndex = 9218;

	class ConstContentsExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstContentsExcelTable* GetRootAsConstContentsExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstContentsExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_GETROOTASCONSTCONTENTSEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstContentsExcelTable* GetRootAsConstContentsExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstContentsExcelTable* arg2)
		{
			return ((::FlatData::ConstContentsExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstContentsExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_GETROOTASCONSTCONTENTSEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstContentsExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstContentsExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstContentsExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_CREATECONSTCONTENTSEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstContentsExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_STARTCONSTCONTENTSEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstContentsExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_ENDCONSTCONTENTSEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstContentsExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_FINISHCONSTCONTENTSEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstContentsExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCELTABLE_FINISHSIZEPREFIXEDCONSTCONTENTSEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

