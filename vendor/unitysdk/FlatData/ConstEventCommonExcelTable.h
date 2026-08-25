#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstEventCommonExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD04FD0)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_GETROOTASCONSTEVENTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD04FE0)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_GETROOTASCONSTEVENTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD05040)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD050D0)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD050A0)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD050F0)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD051F0)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD05240)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_CREATECONSTEVENTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD05280)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_STARTCONSTEVENTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD05370)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD052F0)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD05390)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD05420)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_ENDCONSTEVENTCOMMONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD05320)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_FINISHCONSTEVENTCOMMONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD05460)
#define FLATDATA_CONSTEVENTCOMMONEXCELTABLE_FINISHSIZEPREFIXEDCONSTEVENTCOMMONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD05480)

namespace FlatData
{
	inline static constexpr unsigned int ConstEventCommonExcelTable_TypeDefinitionIndex = 9220;

	class ConstEventCommonExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstEventCommonExcelTable* GetRootAsConstEventCommonExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstEventCommonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_GETROOTASCONSTEVENTCOMMONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstEventCommonExcelTable* GetRootAsConstEventCommonExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstEventCommonExcelTable* arg2)
		{
			return ((::FlatData::ConstEventCommonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstEventCommonExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_GETROOTASCONSTEVENTCOMMONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstEventCommonExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstEventCommonExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstEventCommonExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_CREATECONSTEVENTCOMMONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstEventCommonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_STARTCONSTEVENTCOMMONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstEventCommonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_ENDCONSTEVENTCOMMONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstEventCommonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_FINISHCONSTEVENTCOMMONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstEventCommonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCELTABLE_FINISHSIZEPREFIXEDCONSTEVENTCOMMONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

