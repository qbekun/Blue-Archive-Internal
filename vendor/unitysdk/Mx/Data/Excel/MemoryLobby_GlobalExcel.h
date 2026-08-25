#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MemoryLobby_GlobalExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B89270)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETROOTASMEMORYLOBBY_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B89280)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETROOTASMEMORYLOBBY_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B892E0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B89370)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B89340)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B89390)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B893E0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMEKR_OFFSET UNITYSDK_OFFSET(0x1B89430)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B89470)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMETW_OFFSET UNITYSDK_OFFSET(0x1B89490)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMETWBYTES_OFFSET UNITYSDK_OFFSET(0x1B894D0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMEASIA_OFFSET UNITYSDK_OFFSET(0x1B894F0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMEASIABYTES_OFFSET UNITYSDK_OFFSET(0x1B89530)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMENA_OFFSET UNITYSDK_OFFSET(0x1B89550)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMENABYTES_OFFSET UNITYSDK_OFFSET(0x1B89590)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1B895B0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMEGLOBALBYTES_OFFSET UNITYSDK_OFFSET(0x1B895F0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMETEEN_OFFSET UNITYSDK_OFFSET(0x1B89610)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMETEENBYTES_OFFSET UNITYSDK_OFFSET(0x1B89650)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_CREATEMEMORYLOBBY_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B89670)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_STARTMEMORYLOBBY_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B899C0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B89820)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B897F0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMEKR_OFFSET UNITYSDK_OFFSET(0x1B89940)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMETW_OFFSET UNITYSDK_OFFSET(0x1B89910)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMEASIA_OFFSET UNITYSDK_OFFSET(0x1B898E0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMENA_OFFSET UNITYSDK_OFFSET(0x1B898B0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1B89880)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMETEEN_OFFSET UNITYSDK_OFFSET(0x1B89850)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ENDMEMORYLOBBY_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B89970)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_FINISHMEMORYLOBBY_GLOBALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B899E0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_FINISHSIZEPREFIXEDMEMORYLOBBY_GLOBALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B89A00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MemoryLobby_GlobalExcel_TypeDefinitionIndex = 18423;

	class MemoryLobby_GlobalExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MemoryLobby_GlobalExcel* GetRootAsMemoryLobby_GlobalExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MemoryLobby_GlobalExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETROOTASMEMORYLOBBY_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MemoryLobby_GlobalExcel* GetRootAsMemoryLobby_GlobalExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MemoryLobby_GlobalExcel* arg)
		{
			return (return (::MX::Data::Excel::MemoryLobby_GlobalExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MemoryLobby_GlobalExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETROOTASMEMORYLOBBY_GLOBALEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MemoryLobby_GlobalExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MemoryLobby_GlobalExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::String* get_PrefabNameKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabNameTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabNameAsia()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMEASIA_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameAsiaBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMEASIABYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabNameNa()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMENA_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameNaBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMENABYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabNameGlobal()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMEGLOBAL_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameGlobalBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMEGLOBALBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabNameTeen()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GET_PREFABNAMETEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameTeenBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_GETPREFABNAMETEENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMemoryLobby_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_CREATEMEMORYLOBBY_GLOBALEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMemoryLobby_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_STARTMEMORYLOBBY_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabNameKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabNameTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabNameAsia(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMEASIA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabNameNa(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMENA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabNameGlobal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMEGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabNameTeen(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ADDPREFABNAMETEEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMemoryLobby_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_ENDMEMORYLOBBY_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMemoryLobby_GlobalExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_FINISHMEMORYLOBBY_GLOBALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMemoryLobby_GlobalExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCEL_FINISHSIZEPREFIXEDMEMORYLOBBY_GLOBALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

