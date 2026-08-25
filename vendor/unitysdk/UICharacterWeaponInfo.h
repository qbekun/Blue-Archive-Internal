#pragma once
#include "unitysdk.h"

class UILabel;
class UISlider;
class UISprite;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Color; }
class WeaponObject;

#define UICHARACTERWEAPONINFO_COMPAREGAGEVALUE_OFFSET UNITYSDK_OFFSET(0x231D5A0)
#define UICHARACTERWEAPONINFO_COMPARESTATVALUE_OFFSET UNITYSDK_OFFSET(0x231D630)
#define UICHARACTERWEAPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x231D890)
#define UICHARACTERWEAPONINFO_SETSTAR_OFFSET UNITYSDK_OFFSET(0x231D910)
#define UICHARACTERWEAPONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x231DAC0)
#define UICHARACTERWEAPONINFO_SETSTATDISPLAYS_OFFSET UNITYSDK_OFFSET(0x231E250)
#define UICHARACTERWEAPONINFO_DEFAULTIMAGESETDATA_OFFSET UNITYSDK_OFFSET(0x231E4A0)

	inline static constexpr unsigned int UICharacterWeaponInfo_TypeDefinitionIndex = 4913;

	class UICharacterWeaponInfo : public Il2CppObject
	{
	public:
		Il2CppObject* weaponTextures; // 0x18
		UILabel* weaponType; // 0x20
		Il2CppObject* weaponLevels; // 0x28
		UILabel* weaponName; // 0x30
		::System::Boolean changeWeaponName; // 0x38
		UILabel* weaponDescription; // 0x40
		UILabel* expLabel; // 0x48
		UISlider* LevelGauge; // 0x50
		UISprite* LevelGaugeBg; // 0x58
		::UnityEngine::GameObject* canMountRedDot; // 0x60
		::UnityEngine::GameObject* notEquipCover; // 0x68
		::UnityEngine::GameObject* activeEquipCover; // 0x70
		::UnityEngine::GameObject* lockCover; // 0x78
		::UnityEngine::GameObject* maxLevelGage; // 0x80
		Il2CppObject* stars; // 0x88
		::Il2CppArray<::System::Object*>* statDisplays; // 0x90
		::UnityEngine::Color* originGageColor; // 0x98
		::UnityEngine::Color* overGageColor; // 0xA8
		WeaponObject* weapon; // 0xB8

		::System::Void CompareGageValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERWEAPONINFO_COMPAREGAGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void CompareStatValue(WeaponObject* arg)
		{
			((::System::Void(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERWEAPONINFO_COMPARESTATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERWEAPONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetStar(WeaponObject* arg)
		{
			((::System::Void(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERWEAPONINFO_SETSTAR_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(WeaponObject* arg)
		{
			((::System::Void(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERWEAPONINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetStatDisplays(WeaponObject* arg)
		{
			((::System::Void(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERWEAPONINFO_SETSTATDISPLAYS_OFFSET))(arg, nullptr);
		}

		::System::Void DefaultImageSetData(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERWEAPONINFO_DEFAULTIMAGESETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

