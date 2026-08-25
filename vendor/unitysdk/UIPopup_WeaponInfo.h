#pragma once
#include "unitysdk.h"

class UICharacterWeaponInfo;
class IntTabController;
class MXToggle;
namespace UnityEngine { class GameObject; }
class UICharacterInfo;
class MXButton;
class ChatDialog;
class WeaponObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_WEAPONINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22C9610)
#define UIPOPUP_WEAPONINFO_ONCHANGEDTAB_OFFSET UNITYSDK_OFFSET(0x22C96D0)
#define UIPOPUP_WEAPONINFO_CO_DIRECTING_OFFSET UNITYSDK_OFFSET(0x22C9750)
#define UIPOPUP_WEAPONINFO_ONMAXSTATTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x22C97E0)
#define UIPOPUP_WEAPONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x22C9800)
#define UIPOPUP_WEAPONINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22CA1C0)
#define UIPOPUP_WEAPONINFO_ONCLICKCLOSEDIRECTING_OFFSET UNITYSDK_OFFSET(0x22CA2D0)
#define UIPOPUP_WEAPONINFO_CREATEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0x22C9E50)
#define UIPOPUP_WEAPONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x22CA360)
#define UIPOPUP_WEAPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x22CA790)
#define UIPOPUP_WEAPONINFO_ONCLOSEPOPUP_OFFSET UNITYSDK_OFFSET(0x22CA7A0)
#define UIPOPUP_WEAPONINFO_HANDLECHARACTERUNLOCKWEAPON_OFFSET UNITYSDK_OFFSET(0x22CA830)
#define UIPOPUP_WEAPONINFO_ONCLICKMOUNT_OFFSET UNITYSDK_OFFSET(0x22CA940)
#define UIPOPUP_WEAPONINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22CAC50)

	inline static constexpr unsigned int UIPopup_WeaponInfo_TypeDefinitionIndex = 4819;

	class UIPopup_WeaponInfo : public Il2CppObject
	{
	public:
		UICharacterWeaponInfo* weaponInfo; // 0xD8
		IntTabController* tabController; // 0xE0
		MXToggle* statToggle; // 0xE8
		::UnityEngine::GameObject* info; // 0xF0
		::UnityEngine::GameObject* profile; // 0xF8
		::UnityEngine::GameObject* weaponDisplay; // 0x100
		UICharacterWeaponInfo* effectDisplay; // 0x108
		UICharacterInfo* characterInfo; // 0x110
		Il2CppObject* NoMountDisplay; // 0x118
		Il2CppObject* MountDisplay; // 0x120
		Il2CppObject* cannotMountedDisplay; // 0x128
		MXButton* mountBtn; // 0x130
		MXButton* closeEffectBtn; // 0x138
		Il2CppObject* reinforcementOptions; // 0x140
		ChatDialog* chatDialog; // 0x148
		::System::Int64 characterServerId; // 0x150
		::System::Boolean isShowMaxStatInfo; // 0x158

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_ONCHANGEDTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* co_Directing()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_CO_DIRECTING_OFFSET))(nullptr);
		}

		::System::Void OnMaxStatToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_ONMAXSTATTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseDirecting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_ONCLICKCLOSEDIRECTING_OFFSET))(nullptr);
		}

		WeaponObject* CreateWeaponData()
		{
			return ((WeaponObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_CREATEWEAPONDATA_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_ONCLOSEPOPUP_OFFSET))(nullptr);
		}

		::System::Boolean HandleCharacterUnlockWeapon(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_HANDLECHARACTERUNLOCKWEAPON_OFFSET))(arg, nullptr);
		}

		::System::Void OnCliCkMount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_ONCLICKMOUNT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WEAPONINFO_ONDISABLE_OFFSET))(nullptr);
		}

	};

