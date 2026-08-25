#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGStartDeckCharacterExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA4BA0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GETROOTASMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BA4BB0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GETROOTASMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BA4C10)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA4CA0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA4C70)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA4CC0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1BA4D10)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_CREATEMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BA4D60)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_STARTMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BA4EA0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_ADDCCGID_OFFSET UNITYSDK_OFFSET(0x1BA4E20)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1BA4DF0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_ENDMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BA4E50)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_FINISHMINIGAMECCGSTARTDECKCHARACTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA4EC0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_FINISHSIZEPREFIXEDMINIGAMECCGSTARTDECKCHARACTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA4EE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGStartDeckCharacterExcel_TypeDefinitionIndex = 18565;

	class MinigameCCGStartDeckCharacterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGStartDeckCharacterExcel* GetRootAsMinigameCCGStartDeckCharacterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGStartDeckCharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GETROOTASMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGStartDeckCharacterExcel* GetRootAsMinigameCCGStartDeckCharacterExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGStartDeckCharacterExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGStartDeckCharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGStartDeckCharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GETROOTASMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGStartDeckCharacterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGStartDeckCharacterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGStartDeckCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_CREATEMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGStartDeckCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_STARTMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCCGId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_ADDCCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGStartDeckCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_ENDMINIGAMECCGSTARTDECKCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGStartDeckCharacterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_FINISHMINIGAMECCGSTARTDECKCHARACTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGStartDeckCharacterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCEL_FINISHSIZEPREFIXEDMINIGAMECCGSTARTDECKCHARACTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

