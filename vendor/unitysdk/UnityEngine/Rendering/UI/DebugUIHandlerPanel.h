#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerCanvas; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETFIRSTITEM_OFFSET UNITYSDK_OFFSET(0x9FE8A40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SETSCROLLTARGET_OFFSET UNITYSDK_OFFSET(0x9FED7B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SELECTPREVIOUSITEM_OFFSET UNITYSDK_OFFSET(0x9FED7C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_ONSCROLLBARCLICKED_OFFSET UNITYSDK_OFFSET(0x9FED840)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETYPOSINSCROLL_OFFSET UNITYSDK_OFFSET(0x9FED8C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SETPANEL_OFFSET UNITYSDK_OFFSET(0x9FE9730)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_UPDATESCROLL_OFFSET UNITYSDK_OFFSET(0x9FE98C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEDA50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETPANEL_OFFSET UNITYSDK_OFFSET(0x9FEDA60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_RESETDEBUGMANAGER_OFFSET UNITYSDK_OFFSET(0x9FEDA70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SELECTNEXTITEM_OFFSET UNITYSDK_OFFSET(0x9FEDAF0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FEDB60)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerPanel_TypeDefinitionIndex = 34160;

	class DebugUIHandlerPanel : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x18
		::UnityEngine::UI::ScrollRect* scrollRect; // 0x20
		::UnityEngine::RectTransform* viewport; // 0x28
		::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* Canvas; // 0x30
		::UnityEngine::RectTransform* m_ScrollTransform; // 0x38
		::UnityEngine::RectTransform* m_ContentTransform; // 0x40
		::UnityEngine::RectTransform* m_MaskTransform; // 0x48
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* m_ScrollTarget; // 0x50
		Panel* m_Panel; // 0x58

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetFirstItem()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETFIRSTITEM_OFFSET))(nullptr);
		}

		::System::Void SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SETSCROLLTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SelectPreviousItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SELECTPREVIOUSITEM_OFFSET))(nullptr);
		}

		::System::Void OnScrollbarClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_ONSCROLLBARCLICKED_OFFSET))(nullptr);
		}

		::System::Single GetYPosInScroll(::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETYPOSINSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void SetPanel(Panel* arg)
		{
			((::System::Void(*)(Panel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SETPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_UPDATESCROLL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_.CTOR_OFFSET))(nullptr);
		}

		Panel* GetPanel()
		{
			return (return (Panel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETPANEL_OFFSET))(nullptr);
		}

		::System::Void ResetDebugManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_RESETDEBUGMANAGER_OFFSET))(nullptr);
		}

		::System::Void SelectNextItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SELECTNEXTITEM_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_ONENABLE_OFFSET))(nullptr);
		}

	};
}

