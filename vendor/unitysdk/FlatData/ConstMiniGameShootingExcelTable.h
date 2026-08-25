#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstMiniGameShootingExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD267D0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_GETROOTASCONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD267E0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_GETROOTASCONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD26840)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD268D0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD268A0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD268F0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD269F0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD26A40)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_CREATECONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD26A80)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_STARTCONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD26B70)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD26AF0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD26B90)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD26C20)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_ENDCONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD26B20)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_FINISHCONSTMINIGAMESHOOTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD26C60)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_FINISHSIZEPREFIXEDCONSTMINIGAMESHOOTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD26C80)

namespace FlatData
{
	inline static constexpr unsigned int ConstMiniGameShootingExcelTable_TypeDefinitionIndex = 9230;

	class ConstMiniGameShootingExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstMiniGameShootingExcelTable* GetRootAsConstMiniGameShootingExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstMiniGameShootingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_GETROOTASCONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMiniGameShootingExcelTable* GetRootAsConstMiniGameShootingExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstMiniGameShootingExcelTable* arg2)
		{
			return ((::FlatData::ConstMiniGameShootingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstMiniGameShootingExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_GETROOTASCONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstMiniGameShootingExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstMiniGameShootingExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstMiniGameShootingExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_CREATECONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstMiniGameShootingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_STARTCONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstMiniGameShootingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_ENDCONSTMINIGAMESHOOTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstMiniGameShootingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_FINISHCONSTMINIGAMESHOOTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstMiniGameShootingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCELTABLE_FINISHSIZEPREFIXEDCONSTMINIGAMESHOOTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

