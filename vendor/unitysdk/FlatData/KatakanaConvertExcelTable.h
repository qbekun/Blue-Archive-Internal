#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class KatakanaConvertExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_KATAKANACONVERTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4AD00)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_GETROOTASKATAKANACONVERTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4AD10)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_GETROOTASKATAKANACONVERTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4AD70)
#define FLATDATA_KATAKANACONVERTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD4AE00)
#define FLATDATA_KATAKANACONVERTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4ADD0)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD4AE20)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD4AF20)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD4AF70)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_CREATEKATAKANACONVERTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4AFB0)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_STARTKATAKANACONVERTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4B0A0)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD4B020)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4B0C0)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4B150)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_ENDKATAKANACONVERTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4B050)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_FINISHKATAKANACONVERTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4B190)
#define FLATDATA_KATAKANACONVERTEXCELTABLE_FINISHSIZEPREFIXEDKATAKANACONVERTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4B1B0)

namespace FlatData
{
	inline static constexpr unsigned int KatakanaConvertExcelTable_TypeDefinitionIndex = 9296;

	class KatakanaConvertExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::KatakanaConvertExcelTable* GetRootAsKatakanaConvertExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::KatakanaConvertExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_GETROOTASKATAKANACONVERTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::KatakanaConvertExcelTable* GetRootAsKatakanaConvertExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::KatakanaConvertExcelTable* arg2)
		{
			return ((::FlatData::KatakanaConvertExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::KatakanaConvertExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_GETROOTASKATAKANACONVERTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::KatakanaConvertExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::KatakanaConvertExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKatakanaConvertExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_CREATEKATAKANACONVERTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartKatakanaConvertExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_STARTKATAKANACONVERTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndKatakanaConvertExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_ENDKATAKANACONVERTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKatakanaConvertExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_FINISHKATAKANACONVERTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedKatakanaConvertExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCELTABLE_FINISHSIZEPREFIXEDKATAKANACONVERTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

