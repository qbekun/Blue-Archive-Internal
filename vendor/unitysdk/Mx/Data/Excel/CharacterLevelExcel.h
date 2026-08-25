#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2BDA0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GETROOTASCHARACTERLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2BDB0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GETROOTASCHARACTERLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2BE10)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A2BEA0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A2BE70)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2BEC0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1A2BF10)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A2BF60)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_CREATECHARACTERLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2BFB0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_STARTCHARACTERLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2C140)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A2C0C0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_ADDEXP_OFFSET UNITYSDK_OFFSET(0x1A2C090)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_ADDTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A2C060)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_ENDCHARACTERLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2C0F0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_FINISHCHARACTERLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2C160)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCEL_FINISHSIZEPREFIXEDCHARACTERLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2C180)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterLevelExcel_TypeDefinitionIndex = 17034;

	class CharacterLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterLevelExcel* GetRootAsCharacterLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GETROOTASCHARACTERLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterLevelExcel* GetRootAsCharacterLevelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterLevelExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GETROOTASCHARACTERLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_Exp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GET_EXP_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_GET_TOTALEXP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_CREATECHARACTERLEVELEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_STARTCHARACTERLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_ADDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTotalExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_ADDTOTALEXP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_ENDCHARACTERLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_FINISHCHARACTERLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCEL_FINISHSIZEPREFIXEDCHARACTERLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

