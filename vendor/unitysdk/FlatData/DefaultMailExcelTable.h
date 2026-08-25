#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultMailExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_DEFAULTMAILEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD31F80)
#define FLATDATA_DEFAULTMAILEXCELTABLE_GETROOTASDEFAULTMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD31F90)
#define FLATDATA_DEFAULTMAILEXCELTABLE_GETROOTASDEFAULTMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD31FF0)
#define FLATDATA_DEFAULTMAILEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD32080)
#define FLATDATA_DEFAULTMAILEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD32050)
#define FLATDATA_DEFAULTMAILEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD320A0)
#define FLATDATA_DEFAULTMAILEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD321A0)
#define FLATDATA_DEFAULTMAILEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD321F0)
#define FLATDATA_DEFAULTMAILEXCELTABLE_CREATEDEFAULTMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD32230)
#define FLATDATA_DEFAULTMAILEXCELTABLE_STARTDEFAULTMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD32320)
#define FLATDATA_DEFAULTMAILEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD322A0)
#define FLATDATA_DEFAULTMAILEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD32340)
#define FLATDATA_DEFAULTMAILEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD323D0)
#define FLATDATA_DEFAULTMAILEXCELTABLE_ENDDEFAULTMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD322D0)
#define FLATDATA_DEFAULTMAILEXCELTABLE_FINISHDEFAULTMAILEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD32410)
#define FLATDATA_DEFAULTMAILEXCELTABLE_FINISHSIZEPREFIXEDDEFAULTMAILEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD32430)

namespace FlatData
{
	inline static constexpr unsigned int DefaultMailExcelTable_TypeDefinitionIndex = 9248;

	class DefaultMailExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultMailExcelTable* GetRootAsDefaultMailExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultMailExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_GETROOTASDEFAULTMAILEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultMailExcelTable* GetRootAsDefaultMailExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultMailExcelTable* arg2)
		{
			return ((::FlatData::DefaultMailExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultMailExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_GETROOTASDEFAULTMAILEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultMailExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultMailExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultMailExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_CREATEDEFAULTMAILEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDefaultMailExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_STARTDEFAULTMAILEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultMailExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_ENDDEFAULTMAILEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishDefaultMailExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_FINISHDEFAULTMAILEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedDefaultMailExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCELTABLE_FINISHSIZEPREFIXEDDEFAULTMAILEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

