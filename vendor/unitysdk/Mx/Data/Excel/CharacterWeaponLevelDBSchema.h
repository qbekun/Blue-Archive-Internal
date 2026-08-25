#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BCE0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A4BCF0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A4BD00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterWeaponLevelDBSchema_TypeDefinitionIndex = 17156;

	class CharacterWeaponLevelDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

	};
}

