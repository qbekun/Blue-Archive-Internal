#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterWeaponLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4B8E0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GETROOTASCHARACTERWEAPONLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4B8F0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GETROOTASCHARACTERWEAPONLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4B950)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A4B9E0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A4B9B0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A4BA00)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1A4BA50)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A4BAA0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_CREATECHARACTERWEAPONLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4BAF0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_STARTCHARACTERWEAPONLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4BC80)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A4BC00)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_ADDEXP_OFFSET UNITYSDK_OFFSET(0x1A4BBD0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_ADDTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A4BBA0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_ENDCHARACTERWEAPONLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4BC30)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_FINISHCHARACTERWEAPONLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4BCA0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_FINISHSIZEPREFIXEDCHARACTERWEAPONLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4BCC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterWeaponLevelExcel_TypeDefinitionIndex = 17155;

	class CharacterWeaponLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterWeaponLevelExcel* GetRootAsCharacterWeaponLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GETROOTASCHARACTERWEAPONLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterWeaponLevelExcel* GetRootAsCharacterWeaponLevelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterWeaponLevelExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterWeaponLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GETROOTASCHARACTERWEAPONLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterWeaponLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_Exp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GET_EXP_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_GET_TOTALEXP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterWeaponLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_CREATECHARACTERWEAPONLEVELEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterWeaponLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_STARTCHARACTERWEAPONLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_ADDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTotalExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_ADDTOTALEXP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterWeaponLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_ENDCHARACTERWEAPONLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterWeaponLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_FINISHCHARACTERWEAPONLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterWeaponLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCEL_FINISHSIZEPREFIXEDCHARACTERWEAPONLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

