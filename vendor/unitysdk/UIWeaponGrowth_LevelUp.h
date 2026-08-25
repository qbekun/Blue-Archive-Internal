#pragma once
#include "unitysdk.h"

class UICharacterWeaponInfo;
class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIGrid;
class UIScrollView;
class UIWeaponExpExpendables;
namespace UnityEngine { class Animation; }
class WeaponObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIWEAPONGROWTH_LEVELUP_SETUI_OFFSET UNITYSDK_OFFSET(0x22CBAC0)
#define UIWEAPONGROWTH_LEVELUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x22C9360)
#define UIWEAPONGROWTH_LEVELUP_HANDLEWEAPONLEVELUP_OFFSET UNITYSDK_OFFSET(0x22CC800)
#define UIWEAPONGROWTH_LEVELUP_SETDOT_OFFSET UNITYSDK_OFFSET(0x22C9080)
#define UIWEAPONGROWTH_LEVELUP_INITINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x22CC040)
#define UIWEAPONGROWTH_LEVELUP_GET_VIRTUALWEAPON_OFFSET UNITYSDK_OFFSET(0x22CCD00)
#define UIWEAPONGROWTH_LEVELUP_HANDLECLICKEXPENDABLESMESSAGE_OFFSET UNITYSDK_OFFSET(0x22CCD10)
#define UIWEAPONGROWTH_LEVELUP_ONCLICKLEVELUP_OFFSET UNITYSDK_OFFSET(0x22CCED0)
#define UIWEAPONGROWTH_LEVELUP_ISACTIVEAUTOSELECTUI_OFFSET UNITYSDK_OFFSET(0x22CC960)
#define UIWEAPONGROWTH_LEVELUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22CD280)
#define UIWEAPONGROWTH_LEVELUP_ONCLICKAUTOSELECTITEM_OFFSET UNITYSDK_OFFSET(0x22CD440)
#define UIWEAPONGROWTH_LEVELUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x22CDA80)
#define UIWEAPONGROWTH_LEVELUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x22CDB00)
#define UIWEAPONGROWTH_LEVELUP_GET_WEAPON_OFFSET UNITYSDK_OFFSET(0x22CDDC0)
#define UIWEAPONGROWTH_LEVELUP_CO_LEVELUPDIRECTING_OFFSET UNITYSDK_OFFSET(0x22CC8F0)
#define UIWEAPONGROWTH_LEVELUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22CDDF0)

	inline static constexpr unsigned int UIWeaponGrowth_LevelUp_TypeDefinitionIndex = 4825;

	class UIWeaponGrowth_LevelUp : public Il2CppObject
	{
	public:
		UICharacterWeaponInfo* info; // 0x18
		UICharacterWeaponInfo* virtualWeaponInfo; // 0x20
		MXButton* autoSelectItemBtn; // 0x28
		::UnityEngine::GameObject* autoSelectItemDisableBtn; // 0x30
		MXButton* levelUpBtn; // 0x38
		::UnityEngine::GameObject* levelUpDisableButton; // 0x40
		UILabel* emptyMaterialMessage; // 0x48
		UIGrid* grid; // 0x50
		UIScrollView* scrollView; // 0x58
		UIWeaponExpExpendables* expendablePrefab; // 0x60
		UILabel* costText; // 0x68
		UILabel* notEnoughLabel; // 0x70
		::UnityEngine::Animation* effectAnim; // 0x78
		Il2CppObject* effectLevelupIcon; // 0x80
		::UnityEngine::GameObject* levelupDot; // 0x88
		Il2CppObject* consumeTable; // 0x90
		WeaponObject* curWeaponObj; // 0x98
		WeaponObject* virtualWeaponObj; // 0xA0

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_SETUI_OFFSET))(nullptr);
		}

		::System::Void SetData(WeaponObject* arg)
		{
			((::System::Void(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleWeaponLevelUp(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_HANDLEWEAPONLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetDot(WeaponObject* arg)
		{
			((::System::Void(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_SETDOT_OFFSET))(arg, nullptr);
		}

		::System::Void InitIngredients()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_INITINGREDIENTS_OFFSET))(nullptr);
		}

		WeaponObject* get_VirtualWeapon()
		{
			return ((WeaponObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_GET_VIRTUALWEAPON_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickExpendablesMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_HANDLECLICKEXPENDABLESMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickLevelUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_ONCLICKLEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean IsActiveAutoSelectUI(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_ISACTIVEAUTOSELECTUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoSelectItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_ONCLICKAUTOSELECTITEM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_AWAKE_OFFSET))(nullptr);
		}

		WeaponObject* get_Weapon()
		{
			return ((WeaponObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_GET_WEAPON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_LevelupDirecting()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_CO_LEVELUPDIRECTING_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_LEVELUP_ONDISABLE_OFFSET))(nullptr);
		}

	};

