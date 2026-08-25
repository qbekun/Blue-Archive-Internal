#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Selectable; }

#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESLIDER_OFFSET UNITYSDK_OFFSET(0xA2EDD70)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0xA2EECF0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET UNITYSDK_OFFSET(0xA2EEE20)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA2EEFD0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET UNITYSDK_OFFSET(0xA2EE720)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET UNITYSDK_OFFSET(0xA2EFF60)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xA2F0060)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0xA2EEF00)
#define UNITYENGINE_UI_DEFAULTCONTROLS_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA2F0770)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEBUTTON_OFFSET UNITYSDK_OFFSET(0xA2F07C0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0xA2F0C50)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATETOGGLE_OFFSET UNITYSDK_OFFSET(0xA2F25B0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2F2BF0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0xA2EF9E0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATERAWIMAGE_OFFSET UNITYSDK_OFFSET(0xA2F2CF0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET UNITYSDK_OFFSET(0xA2EE590)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0xA2F2E20)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET UNITYSDK_OFFSET(0xA2EECA0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATETEXT_OFFSET UNITYSDK_OFFSET(0xA2F3120)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int DefaultControls_TypeDefinitionIndex = 34757;

	class DefaultControls : public Il2CppObject
	{
	public:
		IFactoryControls* m_CurrentFactory; // 0x0
		::System::Single kWidth; // 0x0
		::System::Single kThickHeight; // 0x0
		::System::Single kThinHeight; // 0x0
		::UnityEngine::Vector2* s_ThickElementSize; // 0x8
		::UnityEngine::Vector2* s_ThinElementSize; // 0x10
		::UnityEngine::Vector2* s_ImageElementSize; // 0x18
		::UnityEngine::Color* s_DefaultSelectableColor; // 0x20
		::UnityEngine::Color* s_PanelColor; // 0x30
		::UnityEngine::Color* s_TextColor; // 0x40

		::UnityEngine::GameObject* CreateSlider(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESLIDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateImage(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetParentAndAlign(::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* CreateScrollView(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLVIEW_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateUIObject(::System::String* str, ::UnityEngine::GameObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SetDefaultTextValues(::UnityEngine::UI::Text* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateInputField(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayerRecursively(::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET))(arg, arg, nullptr);
		}

		IFactoryControls* get_factory()
		{
			return (return (IFactoryControls*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_GET_FACTORY_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* CreateButton(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateDropdown(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateToggle(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATETOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* CreateScrollbar(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateRawImage(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATERAWIMAGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateUIElementRoot(::System::String* str, ::UnityEngine::Vector2* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector2*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* CreatePanel(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateText(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATETEXT_OFFSET))(arg, nullptr);
		}

	};
}

