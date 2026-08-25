#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstAudioExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTAUDIOEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCECD20)
#define FLATDATA_CONSTAUDIOEXCELTABLE_GETROOTASCONSTAUDIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCECD30)
#define FLATDATA_CONSTAUDIOEXCELTABLE_GETROOTASCONSTAUDIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCECD90)
#define FLATDATA_CONSTAUDIOEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCECE20)
#define FLATDATA_CONSTAUDIOEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCECDF0)
#define FLATDATA_CONSTAUDIOEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCECE40)
#define FLATDATA_CONSTAUDIOEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCECF40)
#define FLATDATA_CONSTAUDIOEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCECF90)
#define FLATDATA_CONSTAUDIOEXCELTABLE_CREATECONSTAUDIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCECFD0)
#define FLATDATA_CONSTAUDIOEXCELTABLE_STARTCONSTAUDIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCED0C0)
#define FLATDATA_CONSTAUDIOEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCED040)
#define FLATDATA_CONSTAUDIOEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCED0E0)
#define FLATDATA_CONSTAUDIOEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCED170)
#define FLATDATA_CONSTAUDIOEXCELTABLE_ENDCONSTAUDIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCED070)
#define FLATDATA_CONSTAUDIOEXCELTABLE_FINISHCONSTAUDIOEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCED1B0)
#define FLATDATA_CONSTAUDIOEXCELTABLE_FINISHSIZEPREFIXEDCONSTAUDIOEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCED1D0)

namespace FlatData
{
	inline static constexpr unsigned int ConstAudioExcelTable_TypeDefinitionIndex = 9210;

	class ConstAudioExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstAudioExcelTable* GetRootAsConstAudioExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstAudioExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_GETROOTASCONSTAUDIOEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstAudioExcelTable* GetRootAsConstAudioExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstAudioExcelTable* arg2)
		{
			return ((::FlatData::ConstAudioExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstAudioExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_GETROOTASCONSTAUDIOEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstAudioExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstAudioExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstAudioExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_CREATECONSTAUDIOEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstAudioExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_STARTCONSTAUDIOEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstAudioExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_ENDCONSTAUDIOEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstAudioExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_FINISHCONSTAUDIOEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstAudioExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCELTABLE_FINISHSIZEPREFIXEDCONSTAUDIOEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

