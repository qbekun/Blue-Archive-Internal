#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGEnemyExcel; }
namespace FlatData { class CCGCharacterType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B91250)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GETROOTASMINIGAMECCGENEMYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B91260)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GETROOTASMINIGAMECCGENEMYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B912C0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B91350)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B91320)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B91370)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B913C0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x1B91410)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B91460)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B914B0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_CREATEMINIGAMECCGENEMYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B91500)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_STARTMINIGAMECCGENEMYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B91740)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B91660)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B91630)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDCHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x1B916C0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0x1B91690)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B91600)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ENDMINIGAMECCGENEMYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B916F0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_FINISHMINIGAMECCGENEMYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B91760)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGENEMYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B91780)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGEnemyExcel_TypeDefinitionIndex = 18458;

	class MinigameCCGEnemyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGEnemyExcel* GetRootAsMinigameCCGEnemyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGEnemyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GETROOTASMINIGAMECCGENEMYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGEnemyExcel* GetRootAsMinigameCCGEnemyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGEnemyExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGEnemyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGEnemyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GETROOTASMINIGAMECCGENEMYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGEnemyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGEnemyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::CCGCharacterType* get_CharacterType()
		{
			return (return (::FlatData::CCGCharacterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_CHARACTERTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGEnemyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::CCGCharacterType* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::CCGCharacterType*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_CREATEMINIGAMECCGENEMYEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGEnemyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_STARTMINIGAMECCGENEMYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CCGCharacterType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDCHARACTERTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGEnemyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_ENDMINIGAMECCGENEMYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGEnemyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_FINISHMINIGAMECCGENEMYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGEnemyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGENEMYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

