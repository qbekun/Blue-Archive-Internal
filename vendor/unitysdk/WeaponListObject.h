#pragma once
#include "unitysdk.h"

class InventoryFilterBase;
namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::Logic::Data { class WeaponSetting; }
class CharacterObject;
class WeaponObject;

#define WEAPONLISTOBJECT_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x1E52910)
#define WEAPONLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E52960)
#define WEAPONLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E529F0)
#define WEAPONLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E52BD0)
#define WEAPONLISTOBJECT_HASWEAPON_OFFSET UNITYSDK_OFFSET(0x1E52E70)
#define WEAPONLISTOBJECT_GETWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x1E52EC0)
#define WEAPONLISTOBJECT_GETWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x1E52F10)
#define WEAPONLISTOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1E52D90)
#define WEAPONLISTOBJECT_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1E52FF0)
#define WEAPONLISTOBJECT_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1E53080)
#define WEAPONLISTOBJECT_FINDCOMBATSTYLEWEAPON_OFFSET UNITYSDK_OFFSET(0x1E53110)
#define WEAPONLISTOBJECT_FINDWITHCOMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x1E53220)
#define WEAPONLISTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E53580)

	inline static constexpr unsigned int WeaponListObject_TypeDefinitionIndex = 1705;

	class WeaponListObject : public <OnState>d__3
	{
	public:
		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasWeapon(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_HASWEAPON_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::WeaponSetting* GetWeaponSetting(CharacterObject* arg)
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_GETWEAPONSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::WeaponSetting* GetWeaponSetting(CharacterObject* arg, ::System::Int32 arg2)
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(CharacterObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_GETWEAPONSETTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		WeaponObject* FindCombatStyleWeapon(::System::Int64 arg)
		{
			return ((WeaponObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_FINDCOMBATSTYLEWEAPON_OFFSET))(arg, nullptr);
		}

		WeaponObject* FindWithCombatStyleIndex(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((WeaponObject*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_FINDWITHCOMBATSTYLEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONLISTOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

