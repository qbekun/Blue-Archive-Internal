#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class CumulativeTimeRewardExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2DB50)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_GETROOTASCUMULATIVETIMEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2DB60)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_GETROOTASCUMULATIVETIMEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2DBC0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD2DC50)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD2DC20)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD2DC70)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD2DD70)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD2DDC0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_CREATECUMULATIVETIMEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2DE00)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_STARTCUMULATIVETIMEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2DEF0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD2DE70)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2DF10)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2DFA0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_ENDCUMULATIVETIMEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2DEA0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_FINISHCUMULATIVETIMEREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2DFE0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_FINISHSIZEPREFIXEDCUMULATIVETIMEREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2E000)

namespace FlatData
{
	inline static constexpr unsigned int CumulativeTimeRewardExcelTable_TypeDefinitionIndex = 9240;

	class CumulativeTimeRewardExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::CumulativeTimeRewardExcelTable* GetRootAsCumulativeTimeRewardExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::CumulativeTimeRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_GETROOTASCUMULATIVETIMEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::CumulativeTimeRewardExcelTable* GetRootAsCumulativeTimeRewardExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::CumulativeTimeRewardExcelTable* arg2)
		{
			return ((::FlatData::CumulativeTimeRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::CumulativeTimeRewardExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_GETROOTASCUMULATIVETIMEREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CumulativeTimeRewardExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::CumulativeTimeRewardExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCumulativeTimeRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_CREATECUMULATIVETIMEREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartCumulativeTimeRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_STARTCUMULATIVETIMEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndCumulativeTimeRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_ENDCUMULATIVETIMEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCumulativeTimeRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_FINISHCUMULATIVETIMEREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedCumulativeTimeRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCELTABLE_FINISHSIZEPREFIXEDCUMULATIVETIMEREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

