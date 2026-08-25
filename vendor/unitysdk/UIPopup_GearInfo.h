#pragma once
#include "unitysdk.h"

class UIGearInfo;
class IntTabController;
namespace UnityEngine { class GameObject; }
class MXButton;
class GearInfoScrollController;
class CharacterObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class GearObject;

#define UIPOPUP_GEARINFO_REFRESHSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x22C68C0)
#define UIPOPUP_GEARINFO_ONCHANGEDTAB_OFFSET UNITYSDK_OFFSET(0x22C6960)
#define UIPOPUP_GEARINFO_ONCLOSEPOPUP_OFFSET UNITYSDK_OFFSET(0x22C69E0)
#define UIPOPUP_GEARINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22C6A70)
#define UIPOPUP_GEARINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22C6B70)
#define UIPOPUP_GEARINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C6BD0)
#define UIPOPUP_GEARINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x22C6BE0)
#define UIPOPUP_GEARINFO_HANDLECHARACTERUNLOCKGEAR_OFFSET UNITYSDK_OFFSET(0x22C6E10)
#define UIPOPUP_GEARINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22C6F90)
#define UIPOPUP_GEARINFO_ONCLICKMOUNT_OFFSET UNITYSDK_OFFSET(0x22C7110)
#define UIPOPUP_GEARINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x22C7230)

	inline static constexpr unsigned int UIPopup_GearInfo_TypeDefinitionIndex = 4811;

	class UIPopup_GearInfo : public Il2CppObject
	{
	public:
		UIGearInfo* gearInfo; // 0xD8
		IntTabController* tabController; // 0xE0
		::UnityEngine::GameObject* info; // 0xE8
		::UnityEngine::GameObject* profile; // 0xF0
		::UnityEngine::GameObject* btnType1; // 0xF8
		::UnityEngine::GameObject* btnType2; // 0x100
		MXButton* mountBtn; // 0x108
		GearInfoScrollController* scrollController; // 0x110
		CharacterObject* characterObj; // 0x118

		::System::Void RefreshScrollItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_REFRESHSCROLLITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_ONCHANGEDTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClosePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_ONCLOSEPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCharacterUnlockGear(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_HANDLECHARACTERUNLOCKGEAR_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnCliCkMount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_ONCLICKMOUNT_OFFSET))(nullptr);
		}

		::System::Void SetData(GearObject* arg, CharacterObject* arg2)
		{
			((::System::Void(*)(GearObject*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEARINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

