#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class SpecialLobbyIllustExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5A830)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_GETROOTASSPECIALLOBBYILLUSTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5A840)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_GETROOTASSPECIALLOBBYILLUSTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5A8A0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD5A930)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5A900)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD5A950)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD5AA50)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_CREATESPECIALLOBBYILLUSTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5AA90)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_STARTSPECIALLOBBYILLUSTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5AB80)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD5AB00)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5ABA0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5AC30)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_ENDSPECIALLOBBYILLUSTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5AB30)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_FINISHSPECIALLOBBYILLUSTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5AC70)
#define FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_FINISHSIZEPREFIXEDSPECIALLOBBYILLUSTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5AC90)

namespace FlatData
{
	inline static constexpr unsigned int SpecialLobbyIllustExcelTable_TypeDefinitionIndex = 9330;

	class SpecialLobbyIllustExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::SpecialLobbyIllustExcelTable* GetRootAsSpecialLobbyIllustExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::SpecialLobbyIllustExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_GETROOTASSPECIALLOBBYILLUSTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::SpecialLobbyIllustExcelTable* GetRootAsSpecialLobbyIllustExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::SpecialLobbyIllustExcelTable* arg2)
		{
			return ((::FlatData::SpecialLobbyIllustExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::SpecialLobbyIllustExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_GETROOTASSPECIALLOBBYILLUSTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::SpecialLobbyIllustExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::SpecialLobbyIllustExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSpecialLobbyIllustExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_CREATESPECIALLOBBYILLUSTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartSpecialLobbyIllustExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_STARTSPECIALLOBBYILLUSTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndSpecialLobbyIllustExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_ENDSPECIALLOBBYILLUSTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSpecialLobbyIllustExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_FINISHSPECIALLOBBYILLUSTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedSpecialLobbyIllustExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCELTABLE_FINISHSIZEPREFIXEDSPECIALLOBBYILLUSTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

