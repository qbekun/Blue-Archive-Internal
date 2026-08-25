#pragma once
#include "unitysdk.h"

class IntTabController;
class UIWeaponGrowth_LevelUp;
class UIWeaponGrowth_Transcendence;
class MXButton;
class CharacterObject;
class WeaponObject;

#define UIPOPUP_WEAPONGROWTH_GET_TARGETWEAPONOBJ_OFFSET UNITYSDK_OFFSET(0x22C8AF0)
#define UIPOPUP_WEAPONGROWTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x22C8BC0)
#define UIPOPUP_WEAPONGROWTH_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x22C8DF0)
#define UIPOPUP_WEAPONGROWTH_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x22C8EF0)
#define UIPOPUP_WEAPONGROWTH_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22C8F20)
#define UIPOPUP_WEAPONGROWTH_ONCHANGEDTAB_OFFSET UNITYSDK_OFFSET(0x22C9230)
#define UIPOPUP_WEAPONGROWTH_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x22C9570)
#define UIPOPUP_WEAPONGROWTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C9600)

	inline static constexpr unsigned int UIPopup_WeaponGrowth_TypeDefinitionIndex = 4814;

	class UIPopup_WeaponGrowth : public Il2CppObject
	{
	public:
		IntTabController* tabController; // 0xD8
		UIWeaponGrowth_LevelUp* levelUpGrowth; // 0xE0
		UIWeaponGrowth_Transcendence* transcendenceGrowth; // 0xE8
		MXButton* closeButton; // 0xF0
		::System::Int32 LEVEL_UP; // 0x0
		::System::Int32 TRANSCENDENCE; // 0x0
		CharacterObject* OwnedCharacterObject; // 0xF8
		::System::Boolean isRefreshTabSetting; // 0x100

		WeaponObject* get_TargetWeaponObj()
		{
			return ((WeaponObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONGROWTH_GET_TARGETWEAPONOBJ_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONGROWTH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialized(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONGROWTH_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialized(CharacterObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(CharacterObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONGROWTH_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONGROWTH_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONGROWTH_ONCHANGEDTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONGROWTH_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONGROWTH_.CTOR_OFFSET))(nullptr);
		}

	};

