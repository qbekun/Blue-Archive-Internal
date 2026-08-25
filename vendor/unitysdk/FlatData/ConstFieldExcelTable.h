#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstFieldExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTFIELDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD06640)
#define FLATDATA_CONSTFIELDEXCELTABLE_GETROOTASCONSTFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD06650)
#define FLATDATA_CONSTFIELDEXCELTABLE_GETROOTASCONSTFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD066B0)
#define FLATDATA_CONSTFIELDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD06740)
#define FLATDATA_CONSTFIELDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD06710)
#define FLATDATA_CONSTFIELDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD06760)
#define FLATDATA_CONSTFIELDEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD06860)
#define FLATDATA_CONSTFIELDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD068B0)
#define FLATDATA_CONSTFIELDEXCELTABLE_CREATECONSTFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD068F0)
#define FLATDATA_CONSTFIELDEXCELTABLE_STARTCONSTFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD069E0)
#define FLATDATA_CONSTFIELDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD06960)
#define FLATDATA_CONSTFIELDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD06A00)
#define FLATDATA_CONSTFIELDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD06A90)
#define FLATDATA_CONSTFIELDEXCELTABLE_ENDCONSTFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD06990)
#define FLATDATA_CONSTFIELDEXCELTABLE_FINISHCONSTFIELDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD06AD0)
#define FLATDATA_CONSTFIELDEXCELTABLE_FINISHSIZEPREFIXEDCONSTFIELDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD06AF0)

namespace FlatData
{
	inline static constexpr unsigned int ConstFieldExcelTable_TypeDefinitionIndex = 9222;

	class ConstFieldExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstFieldExcelTable* GetRootAsConstFieldExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstFieldExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_GETROOTASCONSTFIELDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstFieldExcelTable* GetRootAsConstFieldExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstFieldExcelTable* arg2)
		{
			return ((::FlatData::ConstFieldExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstFieldExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_GETROOTASCONSTFIELDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstFieldExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstFieldExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstFieldExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_CREATECONSTFIELDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstFieldExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_STARTCONSTFIELDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstFieldExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_ENDCONSTFIELDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstFieldExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_FINISHCONSTFIELDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstFieldExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCELTABLE_FINISHSIZEPREFIXEDCONSTFIELDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

