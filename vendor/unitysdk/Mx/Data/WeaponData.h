#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterWeaponExcel&; }
namespace FlatData { class EquipmentCategory; }
namespace FlatData { class WeaponType; }
namespace MX::Data::Excel { class CharacterWeaponExcel; }
namespace MX::Data::Excel { class CharacterWeaponExpBonusExcel&; }

#define MX_DATA_WEAPONDATA_TRYGETWEAPONEXCEL_OFFSET UNITYSDK_OFFSET(0x1965A70)
#define MX_DATA_WEAPONDATA_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1965AD0)
#define MX_DATA_WEAPONDATA_GETLEVELANDEXPFROMTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1965B20)
#define MX_DATA_WEAPONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1965E20)
#define MX_DATA_WEAPONDATA_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1965F40)
#define MX_DATA_WEAPONDATA_SET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1965F50)
#define MX_DATA_WEAPONDATA_GETMAXLEVELBYSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1965F60)
#define MX_DATA_WEAPONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1965FF0)
#define MX_DATA_WEAPONDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x19660C0)
#define MX_DATA_WEAPONDATA_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1966C50)
#define MX_DATA_WEAPONDATA_GETBONUSCATEGORYWEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1966C60)
#define MX_DATA_WEAPONDATA_GETWEAPONDATA_OFFSET UNITYSDK_OFFSET(0x1966FE0)
#define MX_DATA_WEAPONDATA_TRYGETWEAPONEXPBONUS_OFFSET UNITYSDK_OFFSET(0x1967040)
#define MX_DATA_WEAPONDATA_GETTOTALEXPBASELEVELTOTARGETLEVEL_OFFSET UNITYSDK_OFFSET(0x1965D90)
#define MX_DATA_WEAPONDATA_TRYGETTRANSCENDENCERECIPEID_OFFSET UNITYSDK_OFFSET(0x19670A0)
#define MX_DATA_WEAPONDATA_GETREQUIREDEXPTOLEVELUP_OFFSET UNITYSDK_OFFSET(0x1967150)

namespace MX::Data
{
	inline static constexpr unsigned int WeaponData_TypeDefinitionIndex = 16447;

	class WeaponData : public Il2CppObject
	{
	public:
		Il2CppObject* weaponDic; // 0x28
		Il2CppObject* weaponLevelTable; // 0x30
		Il2CppObject* weaponExpBonusDic; // 0x38
		::System::Int64 _MaxStarGrade_k__BackingField; // 0x40

		::System::Boolean TryGetWeaponExcel(::System::Int64 arg, ::MX::Data::Excel::CharacterWeaponExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterWeaponExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_TRYGETWEAPONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_HASLEVELDATA_OFFSET))(arg, nullptr);
		}

		::System::Void GetLevelAndExpFromTotalExp(::System::Int64 arg, int32_t&* arg, int64_t&* arg)
		{
			((::System::Void(*)(::System::Int64, int32_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_GETLEVELANDEXPFROMTOTALEXP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_GETMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_MaxStarGrade(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_SET_MAXSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxLevelByStarGrade(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_GETMAXLEVELBYSTARGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxStarGrade()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::FlatData::EquipmentCategory* GetBonusCategoryWeaponType(::FlatData::WeaponType* arg)
		{
			return (return (::FlatData::EquipmentCategory*(*)(::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_GETBONUSCATEGORYWEAPONTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterWeaponExcel* GetWeaponData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_GETWEAPONDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetWeaponExpBonus(::FlatData::WeaponType* arg, ::MX::Data::Excel::CharacterWeaponExpBonusExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::WeaponType*, ::MX::Data::Excel::CharacterWeaponExpBonusExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_TRYGETWEAPONEXPBONUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToTargetLevel(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_GETTOTALEXPBASELEVELTOTARGETLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTranscendenceRecipeId(::System::Int64 arg, ::System::Int32 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_TRYGETTRANSCENDENCERECIPEID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 GetRequiredExpToLevelUp(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEAPONDATA_GETREQUIREDEXPTOLEVELUP_OFFSET))(arg, nullptr);
		}

	};
}

