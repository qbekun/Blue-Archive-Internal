#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerCanvas; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerPersistentCanvas; }
namespace UnityEngine::Rendering { class DebugAction; }
namespace UnityEngine::Rendering { class DebugActionDesc; }
namespace UnityEngine::Rendering { class DebugManager; }
namespace UnityEngine::Rendering { class IDebugData; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9FAA910)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ENABLEINPUTACTIONS_OFFSET UNITYSDK_OFFSET(0x9FAAEE0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x9FAADE0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SAMPLEACTION_OFFSET UNITYSDK_OFFSET(0x9FAB180)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTION_OFFSET UNITYSDK_OFFSET(0x9FAB3A0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTIONS_OFFSET UNITYSDK_OFFSET(0x9FAB640)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTION_OFFSET UNITYSDK_OFFSET(0x9FAB6C0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTIONTOGGLEDEBUGMENUWITHTOUCH_OFFSET UNITYSDK_OFFSET(0x9FAB700)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTIONRELEASESCROLLTARGET_OFFSET UNITYSDK_OFFSET(0x9FAB9C0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERINPUTS_OFFSET UNITYSDK_OFFSET(0x9FABB10)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9FA57F0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEREADONLYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9FAC520)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_PANELS_OFFSET UNITYSDK_OFFSET(0x9FAC5A0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONDISPLAYRUNTIMEUICHANGED_OFFSET UNITYSDK_OFFSET(0x9FAC5D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONDISPLAYRUNTIMEUICHANGED_OFFSET UNITYSDK_OFFSET(0x9FAC670)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x9FAC710)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x9FAC7B0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_RESETDATA_OFFSET UNITYSDK_OFFSET(0x9FAC850)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_RESETDATA_OFFSET UNITYSDK_OFFSET(0x9FAC8F0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYEDITORUI_OFFSET UNITYSDK_OFFSET(0x9FAC990)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEEDITORUI_OFFSET UNITYSDK_OFFSET(0x9FAC9A0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_ENABLERUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x9FAC9B0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SET_ENABLERUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x9FAC9C0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x9FA6F40)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x9FAC9E0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x9FACC00)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x9FACC80)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FACF30)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REFRESHEDITOR_OFFSET UNITYSDK_OFFSET(0x9FAD1D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x9FAD1E0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REDRAWONSCREENDEBUG_OFFSET UNITYSDK_OFFSET(0x9FAD210)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERDATA_OFFSET UNITYSDK_OFFSET(0x9FAD2A0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UNREGISTERDATA_OFFSET UNITYSDK_OFFSET(0x9FAD3D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x9FAD500)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x9FAD690)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_CHANGESELECTION_OFFSET UNITYSDK_OFFSET(0x9FAD6E0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SETSCROLLTARGET_OFFSET UNITYSDK_OFFSET(0x9FAD700)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ENSUREPERSISTENTCANVAS_OFFSET UNITYSDK_OFFSET(0x9FACD20)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEPERSISTENT_OFFSET UNITYSDK_OFFSET(0x9FAD780)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ONPANELDIRTY_OFFSET UNITYSDK_OFFSET(0x9FAD850)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_PANELINDEX_OFFSET UNITYSDK_OFFSET(0x9FAD880)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_PANELDIPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9FAD980)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REQUESTEDITORWINDOWPANELINDEX_OFFSET UNITYSDK_OFFSET(0x9FADA10)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETREQUESTEDEDITORWINDOWPANELINDEX_OFFSET UNITYSDK_OFFSET(0x9FADA70)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETPANEL_OFFSET UNITYSDK_OFFSET(0x9FA5880)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_FINDPANELINDEX_OFFSET UNITYSDK_OFFSET(0x9FADAF0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_OFFSET UNITYSDK_OFFSET(0x9FADBD0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_OFFSET UNITYSDK_OFFSET(0x9FADA80)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_OFFSET UNITYSDK_OFFSET(0x9FADE10)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_OFFSET UNITYSDK_OFFSET(0x9FADFB0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FAE340)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugManager_TypeDefinitionIndex = 33936;

	class DebugManager : public Il2CppObject
	{
	public:
		::System::String* kEnableDebugBtn1; // 0x0
		::System::String* kEnableDebugBtn2; // 0x0
		::System::String* kDebugPreviousBtn; // 0x0
		::System::String* kDebugNextBtn; // 0x0
		::System::String* kValidateBtn; // 0x0
		::System::String* kPersistentBtn; // 0x0
		::System::String* kDPadVertical; // 0x0
		::System::String* kDPadHorizontal; // 0x0
		::System::String* kMultiplierBtn; // 0x0
		::System::String* kResetBtn; // 0x0
		::System::String* kEnableDebug; // 0x0
		::Il2CppArray<::System::Object*>* m_DebugActions; // 0x10
		::Il2CppArray<::System::Object*>* m_DebugActionStates; // 0x18
		::UnityEngine::InputSystem::InputActionMap* debugActionMap; // 0x20
		Il2CppObject* s_Instance; // 0x0
		Il2CppObject* m_ReadOnlyPanels; // 0x28
		Il2CppObject* m_Panels; // 0x30
		Il2CppObject* onDisplayRuntimeUIChanged; // 0x38
		::System::Action* onSetDirty; // 0x40
		::System::Action* resetData; // 0x48
		::System::Boolean refreshEditorRequested; // 0x50
		Il2CppObject* m_RequestedPanelIndex; // 0x54
		::UnityEngine::GameObject* m_Root; // 0x60
		::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* m_RootUICanvas; // 0x68
		::UnityEngine::GameObject* m_PersistentRoot; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas* m_RootUIPersistentCanvas; // 0x78
		::System::Boolean m_EditorOpen; // 0x80
		::System::Boolean m_EnableRuntimeUI; // 0x81

		::System::Void RegisterActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERACTIONS_OFFSET))(nullptr);
		}

		::System::Void EnableInputActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ENABLEINPUTACTIONS_OFFSET))(nullptr);
		}

		::System::Void AddAction(::UnityEngine::Rendering::DebugAction* arg, ::UnityEngine::Rendering::DebugActionDesc* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::DebugAction*, ::UnityEngine::Rendering::DebugActionDesc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADDACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SampleAction(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SAMPLEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAction(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTIONS_OFFSET))(nullptr);
		}

		::System::Single GetAction(::UnityEngine::Rendering::DebugAction* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Rendering::DebugAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetActionToggleDebugMenuWithTouch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTIONTOGGLEDEBUGMENUWITHTOUCH_OFFSET))(nullptr);
		}

		::System::Boolean GetActionReleaseScrollTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTIONRELEASESCROLLTARGET_OFFSET))(nullptr);
		}

		::System::Void RegisterInputs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERINPUTS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::DebugManager* get_instance()
		{
			return (return (::UnityEngine::Rendering::DebugManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void UpdateReadOnlyCollection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEREADONLYCOLLECTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_panels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_PANELS_OFFSET))(nullptr);
		}

		::System::Void add_onDisplayRuntimeUIChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONDISPLAYRUNTIMEUICHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDisplayRuntimeUIChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONDISPLAYRUNTIMEUICHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onSetDirty(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONSETDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onSetDirty(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONSETDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void add_resetData(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_RESETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void remove_resetData(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_RESETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_displayEditorUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYEDITORUI_OFFSET))(nullptr);
		}

		::System::Void ToggleEditorUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEEDITORUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enableRuntimeUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_ENABLERUNTIMEUI_OFFSET))(nullptr);
		}

		::System::Void set_enableRuntimeUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SET_ENABLERUNTIMEUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_displayRuntimeUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYRUNTIMEUI_OFFSET))(nullptr);
		}

		::System::Void set_displayRuntimeUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYRUNTIMEUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_displayPersistentRuntimeUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET))(nullptr);
		}

		::System::Void set_displayPersistentRuntimeUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshEditor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REFRESHEDITOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_RESET_OFFSET))(nullptr);
		}

		::System::Void ReDrawOnScreenDebug()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REDRAWONSCREENDEBUG_OFFSET))(nullptr);
		}

		::System::Void RegisterData(::UnityEngine::Rendering::IDebugData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::IDebugData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterData(::UnityEngine::Rendering::IDebugData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::IDebugData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UNREGISTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetState()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETSTATE_OFFSET))(nullptr);
		}

		::System::Void RegisterRootCanvas(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERROOTCANVAS_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_CHANGESELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SETSCROLLTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void EnsurePersistentCanvas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ENSUREPERSISTENTCANVAS_OFFSET))(nullptr);
		}

		::System::Void TogglePersistent(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEPERSISTENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPanelDirty(Panel* arg)
		{
			((::System::Void(*)(Panel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ONPANELDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Int32 PanelIndex(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_PANELINDEX_OFFSET))(str, nullptr);
		}

		::System::String* PanelDiplayName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_PANELDIPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEditorWindowPanelIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REQUESTEDITORWINDOWPANELINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRequestedEditorWindowPanelIndex()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETREQUESTEDEDITORWINDOWPANELINDEX_OFFSET))(nullptr);
		}

		Panel* GetPanel(::System::String* str, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Panel*(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETPANEL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 FindPanelIndex(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_FINDPANELINDEX_OFFSET))(str, nullptr);
		}

		::System::Void RemovePanel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_OFFSET))(str, nullptr);
		}

		::System::Void RemovePanel(Panel* arg)
		{
			((::System::Void(*)(Panel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_OFFSET))(arg, nullptr);
		}

		Widget* GetItem(::System::String* str)
		{
			return (return (Widget*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_OFFSET))(str, nullptr);
		}

		Widget* GetItem(::System::String* str, IContainer* arg)
		{
			return (return (Widget*(*)(::System::String*, IContainer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

