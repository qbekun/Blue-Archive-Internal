#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class LimitedStageSeasonExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4FA20)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_GETROOTASLIMITEDSTAGESEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4FA30)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_GETROOTASLIMITEDSTAGESEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4FA90)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD4FB20)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4FAF0)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD4FB40)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD4FC10)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD4FC60)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_CREATELIMITEDSTAGESEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4FCA0)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_STARTLIMITEDSTAGESEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4FD90)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD4FD10)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4FDB0)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4FE40)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_ENDLIMITEDSTAGESEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4FD40)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_FINISHLIMITEDSTAGESEASONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4FE80)
#define FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_FINISHSIZEPREFIXEDLIMITEDSTAGESEASONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4FEA0)

namespace FlatData
{
	inline static constexpr unsigned int LimitedStageSeasonExcelTable_TypeDefinitionIndex = 9304;

	class LimitedStageSeasonExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::LimitedStageSeasonExcelTable* GetRootAsLimitedStageSeasonExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::LimitedStageSeasonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_GETROOTASLIMITEDSTAGESEASONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::LimitedStageSeasonExcelTable* GetRootAsLimitedStageSeasonExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::LimitedStageSeasonExcelTable* arg2)
		{
			return ((::FlatData::LimitedStageSeasonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::LimitedStageSeasonExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_GETROOTASLIMITEDSTAGESEASONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::LimitedStageSeasonExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::LimitedStageSeasonExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLimitedStageSeasonExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_CREATELIMITEDSTAGESEASONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartLimitedStageSeasonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_STARTLIMITEDSTAGESEASONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndLimitedStageSeasonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_ENDLIMITEDSTAGESEASONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLimitedStageSeasonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_FINISHLIMITEDSTAGESEASONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedLimitedStageSeasonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCELTABLE_FINISHSIZEPREFIXEDLIMITEDSTAGESEASONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

