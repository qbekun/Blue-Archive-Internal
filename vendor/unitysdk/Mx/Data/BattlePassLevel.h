#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class BattlePassLevelExcel; }

#define MX_DATA_BATTLEPASSLEVEL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x182FF50)
#define MX_DATA_BATTLEPASSLEVEL_GET_ISPICKUPREWARD_OFFSET UNITYSDK_OFFSET(0x182FF60)
#define MX_DATA_BATTLEPASSLEVEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x182FF70)
#define MX_DATA_BATTLEPASSLEVEL_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x18300D0)
#define MX_DATA_BATTLEPASSLEVEL_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x18300E0)
#define MX_DATA_BATTLEPASSLEVEL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18300F0)
#define MX_DATA_BATTLEPASSLEVEL_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1830100)
#define MX_DATA_BATTLEPASSLEVEL_SET_ISPICKUPREWARD_OFFSET UNITYSDK_OFFSET(0x1830110)
#define MX_DATA_BATTLEPASSLEVEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1830120)
#define MX_DATA_BATTLEPASSLEVEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1830130)

namespace MX::Data
{
	inline static constexpr unsigned int BattlePassLevel_TypeDefinitionIndex = 15720;

	class BattlePassLevel : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x10
		Il2CppObject* _Level_k__BackingField; // 0x18
		Il2CppObject* _IsPickupReward_k__BackingField; // 0x20
		::System::Int64 _MaxLevel_k__BackingField; // 0x28

		::System::Void set_Level(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IsPickupReward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_GET_ISPICKUPREWARD_OFFSET))(nullptr);
		}

		::System::Void AddLevel(::MX::Data::Excel::BattlePassLevelExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BattlePassLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_ADDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_GET_MAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_MaxLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_SET_MAXLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPickupReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_SET_ISPICKUPREWARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Level()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::BattlePassLevelExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BattlePassLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSLEVEL_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

