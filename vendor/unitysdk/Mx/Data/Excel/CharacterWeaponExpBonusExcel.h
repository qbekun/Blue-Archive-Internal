#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterWeaponExpBonusExcel; }
namespace FlatData { class WeaponType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4A5F0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GETROOTASCHARACTERWEAPONEXPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4A600)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GETROOTASCHARACTERWEAPONEXPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4A660)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A4A6F0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A4A6C0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4A710)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONEXPGROWTHA_OFFSET UNITYSDK_OFFSET(0x1A4A760)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONEXPGROWTHB_OFFSET UNITYSDK_OFFSET(0x1A4A7B0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONEXPGROWTHC_OFFSET UNITYSDK_OFFSET(0x1A4A800)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONEXPGROWTHZ_OFFSET UNITYSDK_OFFSET(0x1A4A850)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_CREATECHARACTERWEAPONEXPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4A8A0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_STARTCHARACTERWEAPONEXPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4AAE0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4AA60)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONEXPGROWTHA_OFFSET UNITYSDK_OFFSET(0x1A4AA30)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONEXPGROWTHB_OFFSET UNITYSDK_OFFSET(0x1A4AA00)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONEXPGROWTHC_OFFSET UNITYSDK_OFFSET(0x1A4A9D0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONEXPGROWTHZ_OFFSET UNITYSDK_OFFSET(0x1A4A9A0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ENDCHARACTERWEAPONEXPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4AA90)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_FINISHCHARACTERWEAPONEXPBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4AB00)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_FINISHSIZEPREFIXEDCHARACTERWEAPONEXPBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4AB20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterWeaponExpBonusExcel_TypeDefinitionIndex = 17148;

	class CharacterWeaponExpBonusExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterWeaponExpBonusExcel* GetRootAsCharacterWeaponExpBonusExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponExpBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GETROOTASCHARACTERWEAPONEXPBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterWeaponExpBonusExcel* GetRootAsCharacterWeaponExpBonusExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterWeaponExpBonusExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponExpBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterWeaponExpBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GETROOTASCHARACTERWEAPONEXPBONUSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterWeaponExpBonusExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponExpBonusExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return (return (::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_WeaponExpGrowthA()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONEXPGROWTHA_OFFSET))(nullptr);
		}

		::System::Int32 get_WeaponExpGrowthB()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONEXPGROWTHB_OFFSET))(nullptr);
		}

		::System::Int32 get_WeaponExpGrowthC()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONEXPGROWTHC_OFFSET))(nullptr);
		}

		::System::Int32 get_WeaponExpGrowthZ()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_GET_WEAPONEXPGROWTHZ_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterWeaponExpBonusExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeaponType* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeaponType*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_CREATECHARACTERWEAPONEXPBONUSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterWeaponExpBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_STARTCHARACTERWEAPONEXPBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddWeaponType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeaponType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeaponExpGrowthA(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONEXPGROWTHA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeaponExpGrowthB(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONEXPGROWTHB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeaponExpGrowthC(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONEXPGROWTHC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeaponExpGrowthZ(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ADDWEAPONEXPGROWTHZ_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterWeaponExpBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_ENDCHARACTERWEAPONEXPBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterWeaponExpBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_FINISHCHARACTERWEAPONEXPBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterWeaponExpBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCEL_FINISHSIZEPREFIXEDCHARACTERWEAPONEXPBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

