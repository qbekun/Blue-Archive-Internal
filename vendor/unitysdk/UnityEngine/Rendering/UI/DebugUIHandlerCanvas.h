#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget&; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTNEXTPANEL_OFFSET UNITYSDK_OFFSET(0x9FE7800)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x9FE7AC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTPREVIOUSITEM_OFFSET UNITYSDK_OFFSET(0x9FE8190)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SETSCROLLTARGET_OFFSET UNITYSDK_OFFSET(0x9FE8400)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_TRAVERSE_OFFSET UNITYSDK_OFFSET(0x9FE84D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ACTIVATESELECTION_OFFSET UNITYSDK_OFFSET(0x9FE7F50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_CHANGESELECTION_OFFSET UNITYSDK_OFFSET(0x9FE8250)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_REQUESTHIERARCHYRESET_OFFSET UNITYSDK_OFFSET(0x9FE8A30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ACTIVATEPANEL_OFFSET UNITYSDK_OFFSET(0x9FE7870)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE8A90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_RESETALLHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9FE8AA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_CHANGESELECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x9FE7FD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTPREVIOUSPANEL_OFFSET UNITYSDK_OFFSET(0x9FE7ED0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_REBUILD_OFFSET UNITYSDK_OFFSET(0x9FE8DD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTNEXTITEM_OFFSET UNITYSDK_OFFSET(0x9FE80D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FE9780)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_GETWIDGETFROMPATH_OFFSET UNITYSDK_OFFSET(0x9FE9AB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FE9C00)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerCanvas_TypeDefinitionIndex = 34145;

	class DebugUIHandlerCanvas : public Il2CppObject
	{
	public:
		::System::Int32 m_DebugTreeState; // 0x18
		Il2CppObject* m_PrefabsMap; // 0x20
		::UnityEngine::Transform* panelPrefab; // 0x28
		Il2CppObject* prefabs; // 0x30
		Il2CppObject* m_UIPanels; // 0x38
		::System::Int32 m_SelectedPanel; // 0x40
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* m_SelectedWidget; // 0x48
		::System::String* m_CurrentQueryPath; // 0x50

		::System::Void SelectNextPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTNEXTPANEL_OFFSET))(nullptr);
		}

		::System::Void HandleInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_HANDLEINPUT_OFFSET))(nullptr);
		}

		::System::Void SelectPreviousItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTPREVIOUSITEM_OFFSET))(nullptr);
		}

		::System::Void SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SETSCROLLTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void Traverse(IContainer* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget&* arg)
		{
			((::System::Void(*)(IContainer*, ::UnityEngine::Transform*, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_TRAVERSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ActivateSelection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ACTIVATESELECTION_OFFSET))(nullptr);
		}

		::System::Void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_CHANGESELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RequestHierarchyReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_REQUESTHIERARCHYRESET_OFFSET))(nullptr);
		}

		::System::Void ActivatePanel(::System::Int32 arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ACTIVATEPANEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetAllHierarchy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_RESETALLHIERARCHY_OFFSET))(nullptr);
		}

		::System::Void ChangeSelectionValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_CHANGESELECTIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SelectPreviousPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTPREVIOUSPANEL_OFFSET))(nullptr);
		}

		::System::Void Rebuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_REBUILD_OFFSET))(nullptr);
		}

		::System::Void SelectNextItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTNEXTITEM_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetWidgetFromPath(::System::String* str)
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_GETWIDGETFROMPATH_OFFSET))(str, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ONENABLE_OFFSET))(nullptr);
		}

	};
}

