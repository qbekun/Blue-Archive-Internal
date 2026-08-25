#pragma once
#include "unitysdk.h"

class UIPanel;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIInteractiveWorldRaidReplayElement;

#define UIINTERACTIVEWORLDRAIDREPLAYUI_UPDATE_OFFSET UNITYSDK_OFFSET(0x262DD60)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_ONBACK_OFFSET UNITYSDK_OFFSET(0x262DE70)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x262DF30)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_ONELEMENTSELECTED_OFFSET UNITYSDK_OFFSET(0x262E420)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x262E4E0)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_ONOKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x262E4F0)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_ONNOWPLAYINGELEMENTHIDDEN_OFFSET UNITYSDK_OFFSET(0x262E740)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_ONNOWPLAYINGELEMENTSHOWN_OFFSET UNITYSDK_OFFSET(0x262E7B0)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_ONOPENED_OFFSET UNITYSDK_OFFSET(0x262E7F0)
#define UIINTERACTIVEWORLDRAIDREPLAYUI_SETSEASONID_OFFSET UNITYSDK_OFFSET(0x262E990)
#define UIINTERACTIVEWORLDRAIDREPLAYUI__ONELEMENTSELECTED_B__13_0_OFFSET UNITYSDK_OFFSET(0x262E9A0)

	inline static constexpr unsigned int UIInteractiveWorldRaidReplayUI_TypeDefinitionIndex = 6561;

	class UIInteractiveWorldRaidReplayUI : public Il2CppObject
	{
	public:
		UIPanel* scrollViewPanel; // 0xD8
		::Il2CppArray<::System::Object*>* elements; // 0xE0
		::Il2CppArray<::System::Object*>* decorations; // 0xE8
		::UnityEngine::GameObject* nowPlayingLabelLeft; // 0xF0
		::UnityEngine::GameObject* nowPlayingLabelRight; // 0xF8
		MXButton* backButton; // 0x100
		MXButton* okButton; // 0x108
		::System::Int64 _seasonId; // 0x110
		::System::Int64 _selectedGroupId; // 0x118

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnElementSelected(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_ONELEMENTSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOkButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_ONOKBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnNowPlayingElementHidden(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_ONNOWPLAYINGELEMENTHIDDEN_OFFSET))(arg, nullptr);
		}

		::System::Void OnNowPlayingElementShown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_ONNOWPLAYINGELEMENTSHOWN_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI_SETSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnElementSelected_b__13_0(UIInteractiveWorldRaidReplayElement* arg)
		{
			return ((::System::Boolean(*)(UIInteractiveWorldRaidReplayElement*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYUI__ONELEMENTSELECTED_B__13_0_OFFSET))(arg, nullptr);
		}

	};

