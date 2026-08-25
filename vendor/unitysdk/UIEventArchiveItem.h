#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Data { class EventContentSeasonInfo; }

#define UIEVENTARCHIVEITEM_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x2472A60)
#define UIEVENTARCHIVEITEM_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x2472A80)
#define UIEVENTARCHIVEITEM_ADD_CLICKED_OFFSET UNITYSDK_OFFSET(0x2472A90)
#define UIEVENTARCHIVEITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x2472B30)
#define UIEVENTARCHIVEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2473BC0)
#define UIEVENTARCHIVEITEM_REMOVE_CLICKED_OFFSET UNITYSDK_OFFSET(0x2473CE0)
#define UIEVENTARCHIVEITEM_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x2473D80)
#define UIEVENTARCHIVEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2473D90)

	inline static constexpr unsigned int UIEventArchiveItem_TypeDefinitionIndex = 5649;

	class UIEventArchiveItem : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		UITexture* bannerTexture; // 0x20
		::UnityEngine::GameObject* clearStampRoot; // 0x28
		::UnityEngine::GameObject* yellowDotRoot; // 0x30
		::UnityEngine::GameObject* characterRewardRoot; // 0x38
		UITexture* characterPortraitTexture; // 0x40
		UILabel* characterNameLabel; // 0x48
		::UnityEngine::GameObject* characterRewardCheckRoot; // 0x50
		::UnityEngine::GameObject* lockRoot; // 0x58
		UILabel* lockDescriptionLabel; // 0x60
		::MX::Data::EventContentSeasonInfo* _SeasonInfo_k__BackingField; // 0x68
		Il2CppObject* Clicked; // 0x70

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEM_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEM_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void add_Clicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEM_ADD_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void remove_Clicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEM_REMOVE_CLICKED_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEM_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEM_.CTOR_OFFSET))(nullptr);
		}

	};

