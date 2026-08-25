#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldSeasonExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDSEASONEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD45000)
#define FLATDATA_FIELDSEASONEXCELTABLE_GETROOTASFIELDSEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD45010)
#define FLATDATA_FIELDSEASONEXCELTABLE_GETROOTASFIELDSEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD45070)
#define FLATDATA_FIELDSEASONEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD45100)
#define FLATDATA_FIELDSEASONEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD450D0)
#define FLATDATA_FIELDSEASONEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD45120)
#define FLATDATA_FIELDSEASONEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD45220)
#define FLATDATA_FIELDSEASONEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD45270)
#define FLATDATA_FIELDSEASONEXCELTABLE_CREATEFIELDSEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD452B0)
#define FLATDATA_FIELDSEASONEXCELTABLE_STARTFIELDSEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD453A0)
#define FLATDATA_FIELDSEASONEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD45320)
#define FLATDATA_FIELDSEASONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD453C0)
#define FLATDATA_FIELDSEASONEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD45450)
#define FLATDATA_FIELDSEASONEXCELTABLE_ENDFIELDSEASONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD45350)
#define FLATDATA_FIELDSEASONEXCELTABLE_FINISHFIELDSEASONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD45490)
#define FLATDATA_FIELDSEASONEXCELTABLE_FINISHSIZEPREFIXEDFIELDSEASONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD454B0)

namespace FlatData
{
	inline static constexpr unsigned int FieldSeasonExcelTable_TypeDefinitionIndex = 9284;

	class FieldSeasonExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldSeasonExcelTable* GetRootAsFieldSeasonExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldSeasonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_GETROOTASFIELDSEASONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldSeasonExcelTable* GetRootAsFieldSeasonExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldSeasonExcelTable* arg2)
		{
			return ((::FlatData::FieldSeasonExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldSeasonExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_GETROOTASFIELDSEASONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldSeasonExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldSeasonExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldSeasonExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_CREATEFIELDSEASONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldSeasonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_STARTFIELDSEASONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldSeasonExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_ENDFIELDSEASONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldSeasonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_FINISHFIELDSEASONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldSeasonExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCELTABLE_FINISHSIZEPREFIXEDFIELDSEASONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

