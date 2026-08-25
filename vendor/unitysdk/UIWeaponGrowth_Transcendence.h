#pragma once
#include "unitysdk.h"

class UICharacterWeaponInfo;
class UIWeaponReinforcementOption;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UIGrid;
class WeaponObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIWEAPONGROWTH_TRANSCENDENCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22CE860)
#define UIWEAPONGROWTH_TRANSCENDENCE_SETDOT_OFFSET UNITYSDK_OFFSET(0x22C91A0)
#define UIWEAPONGROWTH_TRANSCENDENCE_ONCLICKTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x22CE9E0)
#define UIWEAPONGROWTH_TRANSCENDENCE_HANDLEWEAPONTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x22CEA90)
#define UIWEAPONGROWTH_TRANSCENDENCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22CEBF0)
#define UIWEAPONGROWTH_TRANSCENDENCE__RECIPELOAD_B__30_1_OFFSET UNITYSDK_OFFSET(0x22CECF0)
#define UIWEAPONGROWTH_TRANSCENDENCE_SETDATA_OFFSET UNITYSDK_OFFSET(0x22C9490)
#define UIWEAPONGROWTH_TRANSCENDENCE_AWAKE_OFFSET UNITYSDK_OFFSET(0x22CF9C0)
#define UIWEAPONGROWTH_TRANSCENDENCE_RECIPELOAD_OFFSET UNITYSDK_OFFSET(0x22CF060)
#define UIWEAPONGROWTH_TRANSCENDENCE_CO_PLAYDIRECTING_OFFSET UNITYSDK_OFFSET(0x22CEB80)
#define UIWEAPONGROWTH_TRANSCENDENCE_SETREINFORCEMENTOPTIONINFO_OFFSET UNITYSDK_OFFSET(0x22CEFA0)
#define UIWEAPONGROWTH_TRANSCENDENCE_SETGROWTHINFO_OFFSET UNITYSDK_OFFSET(0x22CED40)
#define UIWEAPONGROWTH_TRANSCENDENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22CFB50)
#define UIWEAPONGROWTH_TRANSCENDENCE__RECIPELOAD_B__30_2_OFFSET UNITYSDK_OFFSET(0x22CFB60)

	inline static constexpr unsigned int UIWeaponGrowth_Transcendence_TypeDefinitionIndex = 4828;

	class UIWeaponGrowth_Transcendence : public Il2CppObject
	{
	public:
		UICharacterWeaponInfo* info; // 0x18
		UIWeaponReinforcementOption* reinforcementOptionInfo; // 0x20
		UILabel* notEnoughLabel; // 0x28
		UILabel* costText; // 0x30
		MXButton* transcendenceBtn; // 0x38
		::UnityEngine::GameObject* transcendenceDisableBtn; // 0x40
		Il2CppObject* materialList; // 0x48
		UILabel* curMaxLevelLabel; // 0x50
		Il2CppObject* curStarGrade; // 0x58
		UILabel* nextMaxLevelLabel; // 0x60
		Il2CppObject* nextStarGrade; // 0x68
		Il2CppObject* hasNextDataDisplays; // 0x70
		Il2CppObject* noHasNextDataEmptyDisplays; // 0x78
		::UnityEngine::Animation* effectAnim; // 0x80
		UICharacterWeaponInfo* effectWeaponInfo; // 0x88
		Il2CppObject* pointStarEffects; // 0x90
		UIGrid* effectStarGrid; // 0x98
		UIWeaponReinforcementOption* effectReinforcementOptionInfo; // 0xA0
		::UnityEngine::GameObject* skillDisplay; // 0xA8
		::UnityEngine::GameObject* terrarianDisplay; // 0xB0
		::UnityEngine::GameObject* statDisplay; // 0xB8
		::UnityEngine::GameObject* transcendenceDot; // 0xC0
		::System::Int32 TerrainAdaptationIndex; // 0x0
		::System::Int32 FourStarEnhanceRateIndex; // 0x0
		WeaponObject* weaponObj; // 0xC8

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetDot(WeaponObject* arg)
		{
			((::System::Void(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_SETDOT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickTranscendence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_ONCLICKTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Boolean HandleWeaponTranscendence(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_HANDLEWEAPONTRANSCENDENCE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _RecipeLoad_b__30_1(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE__RECIPELOAD_B__30_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(WeaponObject* arg)
		{
			((::System::Void(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RecipeLoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_RECIPELOAD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_PlayDirecting()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_CO_PLAYDIRECTING_OFFSET))(nullptr);
		}

		::System::Void SetReinforcementOptionInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_SETREINFORCEMENTOPTIONINFO_OFFSET))(nullptr);
		}

		::System::Void SetGrowthInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_SETGROWTHINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RecipeLoad_b__30_2(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONGROWTH_TRANSCENDENCE__RECIPELOAD_B__30_2_OFFSET))(arg, nullptr);
		}

	};

