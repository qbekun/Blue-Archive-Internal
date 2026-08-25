#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstCommonExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTCOMMONEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCF59D0)
#define FLATDATA_CONSTCOMMONEXCELTABLE_GETROOTASCONSTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCF59E0)
#define FLATDATA_CONSTCOMMONEXCELTABLE_GETROOTASCONSTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCF5A40)
#define FLATDATA_CONSTCOMMONEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCF5AD0)
#define FLATDATA_CONSTCOMMONEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCF5AA0)
#define FLATDATA_CONSTCOMMONEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCF5AF0)
#define FLATDATA_CONSTCOMMONEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCF5BF0)
#define FLATDATA_CONSTCOMMONEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCF5C40)
#define FLATDATA_CONSTCOMMONEXCELTABLE_CREATECONSTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCF5C80)
#define FLATDATA_CONSTCOMMONEXCELTABLE_STARTCONSTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCF5D70)
#define FLATDATA_CONSTCOMMONEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCF5CF0)
#define FLATDATA_CONSTCOMMONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCF5D90)
#define FLATDATA_CONSTCOMMONEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCF5E20)
#define FLATDATA_CONSTCOMMONEXCELTABLE_ENDCONSTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCF5D20)
#define FLATDATA_CONSTCOMMONEXCELTABLE_FINISHCONSTCOMMONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCF5E60)
#define FLATDATA_CONSTCOMMONEXCELTABLE_FINISHSIZEPREFIXEDCONSTCOMMONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCF5E80)

namespace FlatData
{
	inline static constexpr unsigned int ConstCommonExcelTable_TypeDefinitionIndex = 9214;

	class ConstCommonExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstCommonExcelTable* GetRootAsConstCommonExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstCommonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_GETROOTASCONSTCOMMONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstCommonExcelTable* GetRootAsConstCommonExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstCommonExcelTable* arg2)
		{
			return ((::FlatData::ConstCommonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstCommonExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_GETROOTASCONSTCOMMONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstCommonExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstCommonExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstCommonExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_CREATECONSTCOMMONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstCommonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_STARTCONSTCOMMONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstCommonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_ENDCONSTCOMMONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstCommonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_FINISHCONSTCOMMONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstCommonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCOMMONEXCELTABLE_FINISHSIZEPREFIXEDCONSTCOMMONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

