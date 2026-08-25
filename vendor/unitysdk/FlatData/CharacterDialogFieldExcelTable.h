#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class CharacterDialogFieldExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE5680)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_GETROOTASCHARACTERDIALOGFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE5690)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_GETROOTASCHARACTERDIALOGFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE56F0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCE5780)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE5750)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCE57A0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCE58A0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCE58F0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_CREATECHARACTERDIALOGFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE5930)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_STARTCHARACTERDIALOGFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE5A20)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE59A0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE5A40)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE5AD0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_ENDCHARACTERDIALOGFIELDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE59D0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_FINISHCHARACTERDIALOGFIELDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE5B10)
#define FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_FINISHSIZEPREFIXEDCHARACTERDIALOGFIELDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE5B30)

namespace FlatData
{
	inline static constexpr unsigned int CharacterDialogFieldExcelTable_TypeDefinitionIndex = 9200;

	class CharacterDialogFieldExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::CharacterDialogFieldExcelTable* GetRootAsCharacterDialogFieldExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::CharacterDialogFieldExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_GETROOTASCHARACTERDIALOGFIELDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::CharacterDialogFieldExcelTable* GetRootAsCharacterDialogFieldExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::CharacterDialogFieldExcelTable* arg2)
		{
			return ((::FlatData::CharacterDialogFieldExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::CharacterDialogFieldExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_GETROOTASCHARACTERDIALOGFIELDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CharacterDialogFieldExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::CharacterDialogFieldExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterDialogFieldExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_CREATECHARACTERDIALOGFIELDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartCharacterDialogFieldExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_STARTCHARACTERDIALOGFIELDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndCharacterDialogFieldExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_ENDCHARACTERDIALOGFIELDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterDialogFieldExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_FINISHCHARACTERDIALOGFIELDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterDialogFieldExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCELTABLE_FINISHSIZEPREFIXEDCHARACTERDIALOGFIELDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

