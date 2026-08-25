#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_DROPDOWN_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0xA2F33A0)
#define UNITYENGINE_UI_DROPDOWN_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0xA2F22A0)
#define UNITYENGINE_UI_DROPDOWN_GET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xA2F33B0)
#define UNITYENGINE_UI_DROPDOWN_SET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xA2F22D0)
#define UNITYENGINE_UI_DROPDOWN_GET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0xA2F33C0)
#define UNITYENGINE_UI_DROPDOWN_SET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0xA2F33D0)
#define UNITYENGINE_UI_DROPDOWN_GET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0xA2F3400)
#define UNITYENGINE_UI_DROPDOWN_SET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0xA2F2300)
#define UNITYENGINE_UI_DROPDOWN_GET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0xA2F3410)
#define UNITYENGINE_UI_DROPDOWN_SET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0xA2F3420)
#define UNITYENGINE_UI_DROPDOWN_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0xA2F2330)
#define UNITYENGINE_UI_DROPDOWN_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0xA2F3450)
#define UNITYENGINE_UI_DROPDOWN_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA2F3490)
#define UNITYENGINE_UI_DROPDOWN_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA2F34A0)
#define UNITYENGINE_UI_DROPDOWN_GET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0xA2F34C0)
#define UNITYENGINE_UI_DROPDOWN_SET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0xA2F34D0)
#define UNITYENGINE_UI_DROPDOWN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA2F34E0)
#define UNITYENGINE_UI_DROPDOWN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA2F34F0)
#define UNITYENGINE_UI_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA2F3610)
#define UNITYENGINE_UI_DROPDOWN_SET_OFFSET UNITYSDK_OFFSET(0xA2F3500)
#define UNITYENGINE_UI_DROPDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F3620)
#define UNITYENGINE_UI_DROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0xA2F3840)
#define UNITYENGINE_UI_DROPDOWN_START_OFFSET UNITYSDK_OFFSET(0xA2F3940)
#define UNITYENGINE_UI_DROPDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA2F39F0)
#define UNITYENGINE_UI_DROPDOWN_REFRESHSHOWNVALUE_OFFSET UNITYSDK_OFFSET(0xA2F2360)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0xA2F3C60)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0xA2F3CC0)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0xA2F3E60)
#define UNITYENGINE_UI_DROPDOWN_CLEAROPTIONS_OFFSET UNITYSDK_OFFSET(0xA2F4000)
#define UNITYENGINE_UI_DROPDOWN_SETUPTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA2F4080)
#define UNITYENGINE_UI_DROPDOWN_GETORADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_DROPDOWN_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA2F4770)
#define UNITYENGINE_UI_DROPDOWN_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA2F5990)
#define UNITYENGINE_UI_DROPDOWN_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xA2F59A0)
#define UNITYENGINE_UI_DROPDOWN_SHOW_OFFSET UNITYSDK_OFFSET(0xA2F4780)
#define UNITYENGINE_UI_DROPDOWN_CREATEBLOCKER_OFFSET UNITYSDK_OFFSET(0xA2F5FF0)
#define UNITYENGINE_UI_DROPDOWN_DESTROYBLOCKER_OFFSET UNITYSDK_OFFSET(0xA2F64B0)
#define UNITYENGINE_UI_DROPDOWN_CREATEDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0xA2F6500)
#define UNITYENGINE_UI_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0xA2F6560)
#define UNITYENGINE_UI_DROPDOWN_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xA2F65B0)
#define UNITYENGINE_UI_DROPDOWN_DESTROYITEM_OFFSET UNITYSDK_OFFSET(0xA2F6610)
#define UNITYENGINE_UI_DROPDOWN_ADDITEM_OFFSET UNITYSDK_OFFSET(0xA2F5BA0)
#define UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_OFFSET UNITYSDK_OFFSET(0xA2F6620)
#define UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_OFFSET UNITYSDK_OFFSET(0xA2F5EC0)
#define UNITYENGINE_UI_DROPDOWN_SETALPHA_OFFSET UNITYSDK_OFFSET(0xA2F66B0)
#define UNITYENGINE_UI_DROPDOWN_HIDE_OFFSET UNITYSDK_OFFSET(0xA2F59B0)
#define UNITYENGINE_UI_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0xA2F6760)
#define UNITYENGINE_UI_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0xA2F3AA0)
#define UNITYENGINE_UI_DROPDOWN_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xA2F6800)
#define UNITYENGINE_UI_DROPDOWN_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2F6930)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_TypeDefinitionIndex = 34764;

	class Dropdown : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* m_Template; // 0xF8
		::UnityEngine::UI::Text* m_CaptionText; // 0x100
		::UnityEngine::UI::Image* m_CaptionImage; // 0x108
		::UnityEngine::UI::Text* m_ItemText; // 0x110
		::UnityEngine::UI::Image* m_ItemImage; // 0x118
		::System::Int32 m_Value; // 0x120
		OptionDataList* m_Options; // 0x128
		DropdownEvent* m_OnValueChanged; // 0x130
		::System::Single m_AlphaFadeSpeed; // 0x138
		::UnityEngine::GameObject* m_Dropdown; // 0x140
		::UnityEngine::GameObject* m_Blocker; // 0x148
		Il2CppObject* m_Items; // 0x150
		Il2CppObject* m_AlphaTweenRunner; // 0x158
		::System::Boolean validTemplate; // 0x160
		::System::Int32 kHighSortingLayer; // 0x0
		OptionData* s_NoOptionData; // 0x0

		::UnityEngine::RectTransform* get_template()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_TEMPLATE_OFFSET))(nullptr);
		}

		::System::Void set_template(::UnityEngine::RectTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_TEMPLATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Text* get_captionText()
		{
			return (return (::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_CAPTIONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_captionText(::UnityEngine::UI::Text* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_CAPTIONTEXT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Image* get_captionImage()
		{
			return (return (::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_CAPTIONIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_captionImage(::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_CAPTIONIMAGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Text* get_itemText()
		{
			return (return (::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ITEMTEXT_OFFSET))(nullptr);
		}

		::System::Void set_itemText(::UnityEngine::UI::Text* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ITEMTEXT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Image* get_itemImage()
		{
			return (return (::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ITEMIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_itemImage(::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ITEMIMAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_options()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_options(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		DropdownEvent* get_onValueChanged()
		{
			return (return (DropdownEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ONVALUECHANGED_OFFSET))(nullptr);
		}

		::System::Void set_onValueChanged(DropdownEvent* arg)
		{
			((::System::Void(*)(DropdownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ONVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Single get_alphaFadeSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ALPHAFADESPEED_OFFSET))(nullptr);
		}

		::System::Void set_alphaFadeSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ALPHAFADESPEED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_START_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshShownValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_REFRESHSHOWNVALUE_OFFSET))(nullptr);
		}

		::System::Void AddOptions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void AddOptions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void AddOptions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ClearOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CLEAROPTIONS_OFFSET))(nullptr);
		}

		::System::Void SetupTemplate(::UnityEngine::Canvas* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETUPTEMPLATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrAddComponent(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GETORADDCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SHOW_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEBLOCKER_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyBlocker(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYBLOCKER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateDropdownList(::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEDROPDOWNLIST_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyDropdownList(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET))(arg, nullptr);
		}

		DropdownItem* CreateItem(DropdownItem* arg)
		{
			return (return (DropdownItem*(*)(DropdownItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyItem(DropdownItem* arg)
		{
			((::System::Void(*)(DropdownItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYITEM_OFFSET))(arg, nullptr);
		}

		DropdownItem* AddItem(OptionData* arg, ::System::Boolean arg, DropdownItem* arg, Il2CppObject* arg)
		{
			return (return (DropdownItem*(*)(OptionData*, ::System::Boolean, DropdownItem*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDITEM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AlphaFadeList(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AlphaFadeList(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetAlpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_HIDE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DelayedDestroyDropdownList(::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET))(arg, nullptr);
		}

		::System::Void ImmediateDestroyDropdownList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET))(nullptr);
		}

		::System::Void OnSelectItem(::UnityEngine::UI::Toggle* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Toggle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONSELECTITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

