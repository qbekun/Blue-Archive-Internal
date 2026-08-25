#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class EmoticonSpecialExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_EMOTICONSPECIALEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD33D00)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_GETROOTASEMOTICONSPECIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD33D10)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_GETROOTASEMOTICONSPECIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD33D70)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD33E00)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD33DD0)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD33E20)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD33F20)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_CREATEEMOTICONSPECIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD33F60)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_STARTEMOTICONSPECIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD34050)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD33FD0)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD34070)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD34100)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_ENDEMOTICONSPECIALEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD34000)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_FINISHEMOTICONSPECIALEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD34140)
#define FLATDATA_EMOTICONSPECIALEXCELTABLE_FINISHSIZEPREFIXEDEMOTICONSPECIALEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD34160)

namespace FlatData
{
	inline static constexpr unsigned int EmoticonSpecialExcelTable_TypeDefinitionIndex = 9252;

	class EmoticonSpecialExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::EmoticonSpecialExcelTable* GetRootAsEmoticonSpecialExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::EmoticonSpecialExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_GETROOTASEMOTICONSPECIALEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::EmoticonSpecialExcelTable* GetRootAsEmoticonSpecialExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::EmoticonSpecialExcelTable* arg2)
		{
			return ((::FlatData::EmoticonSpecialExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::EmoticonSpecialExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_GETROOTASEMOTICONSPECIALEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::EmoticonSpecialExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::EmoticonSpecialExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEmoticonSpecialExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_CREATEEMOTICONSPECIALEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEmoticonSpecialExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_STARTEMOTICONSPECIALEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndEmoticonSpecialExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_ENDEMOTICONSPECIALEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEmoticonSpecialExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_FINISHEMOTICONSPECIALEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedEmoticonSpecialExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCELTABLE_FINISHSIZEPREFIXEDEMOTICONSPECIALEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

