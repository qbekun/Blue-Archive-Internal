#pragma once
#include "unitysdk.h"

class UIWeaponGrowth_LevelUp;
class CharacterObject;
class EquipmentObject;
class UIEquipmentCard;
class AssetObjectBase;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define UIWEAPONEXPEXPENDABLES_GETFEEDEXP_OFFSET UNITYSDK_OFFSET(0x22F14A0)
#define UIWEAPONEXPEXPENDABLES_GET_GROWTH_LEVELUP_OFFSET UNITYSDK_OFFSET(0x22F1550)
#define UIWEAPONEXPEXPENDABLES_ISCANNOTINPUT_OFFSET UNITYSDK_OFFSET(0x22F1560)
#define UIWEAPONEXPEXPENDABLES_SET_GROWTH_LEVELUP_OFFSET UNITYSDK_OFFSET(0x22F15F0)
#define UIWEAPONEXPEXPENDABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F1610)
#define UIWEAPONEXPEXPENDABLES_GET_CARD_OFFSET UNITYSDK_OFFSET(0x22F1620)
#define UIWEAPONEXPEXPENDABLES_SETDATA_OFFSET UNITYSDK_OFFSET(0x22F16D0)
#define UIWEAPONEXPEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x22F1A90)

	inline static constexpr unsigned int UIWeaponExpExpendables_TypeDefinitionIndex = 4893;

	class UIWeaponExpExpendables : public Il2CppObject
	{
	public:
		UIWeaponGrowth_LevelUp* weaponGrowth_LevelUp; // 0x98
		CharacterObject* boundCharacter; // 0xA0
		EquipmentObject* equipmentObject; // 0xA8
		UIEquipmentCard* card; // 0xB0

		::System::Int64 GetFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONEXPEXPENDABLES_GETFEEDEXP_OFFSET))(nullptr);
		}

		UIWeaponGrowth_LevelUp* get_Growth_LevelUp()
		{
			return ((UIWeaponGrowth_LevelUp*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONEXPEXPENDABLES_GET_GROWTH_LEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean IsCanNotInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONEXPEXPENDABLES_ISCANNOTINPUT_OFFSET))(nullptr);
		}

		::System::Void set_Growth_LevelUp(UIWeaponGrowth_LevelUp* arg)
		{
			((::System::Void(*)(UIWeaponGrowth_LevelUp*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONEXPEXPENDABLES_SET_GROWTH_LEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONEXPEXPENDABLES_.CTOR_OFFSET))(nullptr);
		}

		UIEquipmentCard* get_Card()
		{
			return ((UIEquipmentCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONEXPEXPENDABLES_GET_CARD_OFFSET))(nullptr);
		}

		::System::Void SetData(AssetObjectBase* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, AssetObjectBase* arg3)
		{
			((::System::Void(*)(AssetObjectBase*, ::MX::GameLogic::Parcel::ParcelKeyPair*, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONEXPEXPENDABLES_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickAddIngredient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONEXPEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET))(nullptr);
		}

	};

