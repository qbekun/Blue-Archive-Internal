#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Data::Excel { class CharacterGearExcel; }

#define COMBATSTYLEGEARSTATS_GET_CHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1E4CEB0)
#define COMBATSTYLEGEARSTATS_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E4CEC0)
#define COMBATSTYLEGEARSTATS_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1E4CED0)
#define COMBATSTYLEGEARSTATS_SET_STATS_OFFSET UNITYSDK_OFFSET(0x1E4CEF0)
#define COMBATSTYLEGEARSTATS_GET_GEAREXCEL_OFFSET UNITYSDK_OFFSET(0x1E4CF00)
#define COMBATSTYLEGEARSTATS_GET_STATS_OFFSET UNITYSDK_OFFSET(0x1E4CF10)
#define COMBATSTYLEGEARSTATS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CF20)
#define COMBATSTYLEGEARSTATS_SETSTAT_OFFSET UNITYSDK_OFFSET(0x1E4D010)
#define COMBATSTYLEGEARSTATS_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1E4D4B0)

	inline static constexpr unsigned int CombatStyleGearStats_TypeDefinitionIndex = 1694;

	class CombatStyleGearStats : public Il2CppObject
	{
	public:
		::MX::Data::Excel::CharacterExcel* _CharacterExcel_k__BackingField; // 0x10
		::MX::Data::Excel::CharacterGearExcel* _GearExcel_k__BackingField; // 0x20
		::System::Int64 _Tier_k__BackingField; // 0x30
		::System::Int64 _Level_k__BackingField; // 0x38
		Il2CppObject* _Stats_k__BackingField; // 0x40

		::MX::Data::Excel::CharacterExcel* get_CharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_GET_CHARACTEREXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		::System::Void set_Stats(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_SET_STATS_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterGearExcel* get_GearExcel()
		{
			return ((::MX::Data::Excel::CharacterGearExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_GET_GEAREXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Stats()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_GET_STATS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterExcel* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetStat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_SETSTAT_OFFSET))(nullptr);
		}

		::System::Int64 get_Tier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEGEARSTATS_GET_TIER_OFFSET))(nullptr);
		}

	};

