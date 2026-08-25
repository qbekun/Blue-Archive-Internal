#pragma once
#include "unitysdk.h"

class MXButton;
class UIArenaSetting;
class ArenaObject;
class UIPopup_ArenaMapSelect;

#define UIPOPUP_ARENAFORMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x21FE770)
#define UIPOPUP_ARENAFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x21FEB30)
#define UIPOPUP_ARENAFORMATION_ONCLICKECHELON_OFFSET UNITYSDK_OFFSET(0x21FEB40)
#define UIPOPUP_ARENAFORMATION_GET_ARENAOBJECT_OFFSET UNITYSDK_OFFSET(0x21FEE00)
#define UIPOPUP_ARENAFORMATION___N__0_OFFSET UNITYSDK_OFFSET(0x21FEE80)
#define UIPOPUP_ARENAFORMATION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x21FEE90)
#define UIPOPUP_ARENAFORMATION_ONCLICKMAP_OFFSET UNITYSDK_OFFSET(0x21FEF20)
#define UIPOPUP_ARENAFORMATION_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x21FF000)
#define UIPOPUP_ARENAFORMATION_CHANGEMAP_OFFSET UNITYSDK_OFFSET(0x21FF250)
#define UIPOPUP_ARENAFORMATION__ONCLICKMAP_B__12_0_OFFSET UNITYSDK_OFFSET(0x21FF390)

	inline static constexpr unsigned int UIPopup_ArenaFormation_TypeDefinitionIndex = 4289;

	class UIPopup_ArenaFormation : public Il2CppObject
	{
	public:
		MXButton* echelonButton; // 0xD8
		MXButton* mapButton; // 0xE0
		MXButton* closeButton; // 0xE8
		MXButton* confirmButton; // 0xF0
		UIArenaSetting* uiArenaSetting; // 0xF8
		::System::Boolean settingChanged; // 0x100

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION_ONCLICKECHELON_OFFSET))(nullptr);
		}

		ArenaObject* get_ArenaObject()
		{
			return ((ArenaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION_GET_ARENAOBJECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION_ONCLICKMAP_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void ChangeMap(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION_CHANGEMAP_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickMap_b__12_0(UIPopup_ArenaMapSelect* arg)
		{
			((::System::Void(*)(UIPopup_ArenaMapSelect*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAFORMATION__ONCLICKMAP_B__12_0_OFFSET))(arg, nullptr);
		}

	};

