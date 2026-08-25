#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstConquestExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTCONQUESTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD03790)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_GETROOTASCONSTCONQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD037A0)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_GETROOTASCONSTCONQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD03800)
#define FLATDATA_CONSTCONQUESTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD03890)
#define FLATDATA_CONSTCONQUESTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD03860)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD038B0)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD039B0)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD03A00)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_CREATECONSTCONQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD03A40)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_STARTCONSTCONQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD03B30)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD03AB0)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD03B50)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD03BE0)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_ENDCONSTCONQUESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD03AE0)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_FINISHCONSTCONQUESTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD03C20)
#define FLATDATA_CONSTCONQUESTEXCELTABLE_FINISHSIZEPREFIXEDCONSTCONQUESTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD03C40)

namespace FlatData
{
	inline static constexpr unsigned int ConstConquestExcelTable_TypeDefinitionIndex = 9216;

	class ConstConquestExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstConquestExcelTable* GetRootAsConstConquestExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstConquestExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_GETROOTASCONSTCONQUESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstConquestExcelTable* GetRootAsConstConquestExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstConquestExcelTable* arg2)
		{
			return ((::FlatData::ConstConquestExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstConquestExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_GETROOTASCONSTCONQUESTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstConquestExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstConquestExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstConquestExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_CREATECONSTCONQUESTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstConquestExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_STARTCONSTCONQUESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstConquestExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_ENDCONSTCONQUESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstConquestExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_FINISHCONSTCONQUESTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstConquestExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCELTABLE_FINISHSIZEPREFIXEDCONSTCONQUESTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

