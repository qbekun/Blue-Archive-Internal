#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class LimitedStageRewardExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4EBD0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_GETROOTASLIMITEDSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4EBE0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_GETROOTASLIMITEDSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4EC40)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD4ECD0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4ECA0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD4ECF0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD4EDF0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD4EE40)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_CREATELIMITEDSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4EE80)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_STARTLIMITEDSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4EF70)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD4EEF0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4EF90)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4F020)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_ENDLIMITEDSTAGEREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4EF20)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_FINISHLIMITEDSTAGEREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4F060)
#define FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_FINISHSIZEPREFIXEDLIMITEDSTAGEREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4F080)

namespace FlatData
{
	inline static constexpr unsigned int LimitedStageRewardExcelTable_TypeDefinitionIndex = 9302;

	class LimitedStageRewardExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::LimitedStageRewardExcelTable* GetRootAsLimitedStageRewardExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::LimitedStageRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_GETROOTASLIMITEDSTAGEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::LimitedStageRewardExcelTable* GetRootAsLimitedStageRewardExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::LimitedStageRewardExcelTable* arg2)
		{
			return ((::FlatData::LimitedStageRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::LimitedStageRewardExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_GETROOTASLIMITEDSTAGEREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::LimitedStageRewardExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::LimitedStageRewardExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLimitedStageRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_CREATELIMITEDSTAGEREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartLimitedStageRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_STARTLIMITEDSTAGEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndLimitedStageRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_ENDLIMITEDSTAGEREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLimitedStageRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_FINISHLIMITEDSTAGEREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedLimitedStageRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCELTABLE_FINISHSIZEPREFIXEDLIMITEDSTAGEREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

