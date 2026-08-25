#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FocusType; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class ObjectGUIState; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class IMECompositionMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class GUISkin; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_GUIUTILITY_GET_PIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0xA27DD20)
#define UNITYENGINE_GUIUTILITY_GET_GUIDEPTH_OFFSET UNITYSDK_OFFSET(0xA284090)
#define UNITYENGINE_GUIUTILITY_GET_TEXTFIELDINPUT_OFFSET UNITYSDK_OFFSET(0xA2776F0)
#define UNITYENGINE_GUIUTILITY_GET_SYSTEMCOPYBUFFER_OFFSET UNITYSDK_OFFSET(0xA2840D0)
#define UNITYENGINE_GUIUTILITY_SET_SYSTEMCOPYBUFFER_OFFSET UNITYSDK_OFFSET(0xA284110)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETCONTROLID_OFFSET UNITYSDK_OFFSET(0xA284150)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_OFFSET UNITYSDK_OFFSET(0xA27AB50)
#define UNITYENGINE_GUIUTILITY_BEGINCONTAINERFROMOWNER_OFFSET UNITYSDK_OFFSET(0xA2841F0)
#define UNITYENGINE_GUIUTILITY_BEGINCONTAINER_OFFSET UNITYSDK_OFFSET(0xA284230)
#define UNITYENGINE_GUIUTILITY_INTERNAL_ENDCONTAINER_OFFSET UNITYSDK_OFFSET(0xA284270)
#define UNITYENGINE_GUIUTILITY_CHECKFORTABEVENT_OFFSET UNITYSDK_OFFSET(0xA2842B0)
#define UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOFIRSTCONTROLID_OFFSET UNITYSDK_OFFSET(0xA2842F0)
#define UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOLASTCONTROLID_OFFSET UNITYSDK_OFFSET(0xA284330)
#define UNITYENGINE_GUIUTILITY_HASFOCUSABLECONTROLS_OFFSET UNITYSDK_OFFSET(0xA284370)
#define UNITYENGINE_GUIUTILITY_OWNSID_OFFSET UNITYSDK_OFFSET(0xA2843B0)
#define UNITYENGINE_GUIUTILITY_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0xA2843F0)
#define UNITYENGINE_GUIUTILITY_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0xA284430)
#define UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0xA284470)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETHOTCONTROL_OFFSET UNITYSDK_OFFSET(0xA2844F0)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0xA284530)
#define UNITYENGINE_GUIUTILITY_INTERNAL_SETHOTCONTROL_OFFSET UNITYSDK_OFFSET(0xA284570)
#define UNITYENGINE_GUIUTILITY_INTERNAL_SETKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0xA2845B0)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETDEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0xA2845F0)
#define UNITYENGINE_GUIUTILITY_INTERNAL_EXITGUI_OFFSET UNITYSDK_OFFSET(0xA284630)
#define UNITYENGINE_GUIUTILITY_MARKGUICHANGED_OFFSET UNITYSDK_OFFSET(0xA284670)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_OFFSET UNITYSDK_OFFSET(0xA27A6E0)
#define UNITYENGINE_GUIUTILITY_SET_GUIISEXITING_OFFSET UNITYSDK_OFFSET(0xA2846C0)
#define UNITYENGINE_GUIUTILITY_GET_HOTCONTROL_OFFSET UNITYSDK_OFFSET(0xA283BB0)
#define UNITYENGINE_GUIUTILITY_SET_HOTCONTROL_OFFSET UNITYSDK_OFFSET(0xA284700)
#define UNITYENGINE_GUIUTILITY_TAKECAPTURE_OFFSET UNITYSDK_OFFSET(0xA284740)
#define UNITYENGINE_GUIUTILITY_REMOVECAPTURE_OFFSET UNITYSDK_OFFSET(0xA284790)
#define UNITYENGINE_GUIUTILITY_GET_KEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0xA27B320)
#define UNITYENGINE_GUIUTILITY_SET_KEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0xA2847E0)
#define UNITYENGINE_GUIUTILITY_HASKEYFOCUS_OFFSET UNITYSDK_OFFSET(0xA283BF0)
#define UNITYENGINE_GUIUTILITY_EXITGUI_OFFSET UNITYSDK_OFFSET(0xA284820)
#define UNITYENGINE_GUIUTILITY_GETDEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0xA2785D0)
#define UNITYENGINE_GUIUTILITY_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xA2848F0)
#define UNITYENGINE_GUIUTILITY_ENDCONTAINER_OFFSET UNITYSDK_OFFSET(0xA284950)
#define UNITYENGINE_GUIUTILITY_BEGINGUI_OFFSET UNITYSDK_OFFSET(0xA2849B0)
#define UNITYENGINE_GUIUTILITY_DESTROYGUI_OFFSET UNITYSDK_OFFSET(0xA284C20)
#define UNITYENGINE_GUIUTILITY_ENDGUI_OFFSET UNITYSDK_OFFSET(0xA284C70)
#define UNITYENGINE_GUIUTILITY_ENDGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA284E50)
#define UNITYENGINE_GUIUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA284F80)
#define UNITYENGINE_GUIUTILITY_RESETGLOBALSTATE_OFFSET UNITYSDK_OFFSET(0xA284A40)
#define UNITYENGINE_GUIUTILITY_ISEXITGUIEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA284FE0)
#define UNITYENGINE_GUIUTILITY_SHOULDRETHROWEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA284F00)
#define UNITYENGINE_GUIUTILITY_CHECKONGUI_OFFSET UNITYSDK_OFFSET(0xA2783A0)
#define UNITYENGINE_GUIUTILITY_ROUNDTOPIXELGRID_OFFSET UNITYSDK_OFFSET(0xA285060)
#define UNITYENGINE_GUIUTILITY_HITTEST_OFFSET UNITYSDK_OFFSET(0xA2850E0)
#define UNITYENGINE_GUIUTILITY_HITTEST_OFFSET UNITYSDK_OFFSET(0xA285180)
#define UNITYENGINE_GUIUTILITY_HITTEST_OFFSET UNITYSDK_OFFSET(0xA27B1E0)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETCONTROLID_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2841A0)
#define UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2844B0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIUtility_TypeDefinitionIndex = 36550;

	class GUIUtility : public Il2CppObject
	{
	public:
		::System::Int32 s_ControlCount; // 0x0
		::System::Int32 s_SkinMode; // 0x4
		::System::Int32 s_OriginalID; // 0x8
		::System::Action* takeCapture; // 0x10
		::System::Action* releaseCapture; // 0x18
		Il2CppObject* processEvent; // 0x20
		::System::Action* cleanupRoots; // 0x28
		Il2CppObject* endContainerGUIFromException; // 0x30
		::System::Action* guiChanged; // 0x38
		::System::Boolean _guiIsExiting_k__BackingField; // 0x40
		Il2CppObject* s_HasCurrentWindowKeyFocusFunc; // 0x48

		::System::Single get_pixelsPerPoint()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_PIXELSPERPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_guiDepth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_GUIDEPTH_OFFSET))(nullptr);
		}

		::System::Boolean get_textFieldInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_TEXTFIELDINPUT_OFFSET))(nullptr);
		}

		::System::String* get_systemCopyBuffer()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_SYSTEMCOPYBUFFER_OFFSET))(nullptr);
		}

		::System::Void set_systemCopyBuffer(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_SYSTEMCOPYBUFFER_OFFSET))(str, nullptr);
		}

		::System::Int32 Internal_GetControlID(::System::Int32 arg, ::UnityEngine::FocusType* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETCONTROLID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetControlID(::System::Int32 arg, ::UnityEngine::FocusType* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BeginContainerFromOwner(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINCONTAINERFROMOWNER_OFFSET))(arg, nullptr);
		}

		::System::Void BeginContainer(::UnityEngine::ObjectGUIState* arg)
		{
			((::System::Void(*)(::UnityEngine::ObjectGUIState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_EndContainer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_ENDCONTAINER_OFFSET))(nullptr);
		}

		::System::Int32 CheckForTabEvent(::UnityEngine::Event* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_CHECKFORTABEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetKeyboardControlToFirstControlId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOFIRSTCONTROLID_OFFSET))(nullptr);
		}

		::System::Void SetKeyboardControlToLastControlId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOLASTCONTROLID_OFFSET))(nullptr);
		}

		::System::Boolean HasFocusableControls()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HASFOCUSABLECONTROLS_OFFSET))(nullptr);
		}

		::System::Boolean OwnsId(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_OWNSID_OFFSET))(arg, nullptr);
		}

		::System::String* get_compositionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_COMPOSITIONSTRING_OFFSET))(nullptr);
		}

		::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode* arg)
		{
			((::System::Void(*)(::UnityEngine::IMECompositionMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_IMECOMPOSITIONMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_compositionCursorPos(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Internal_GetHotControl()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETHOTCONTROL_OFFSET))(nullptr);
		}

		::System::Int32 Internal_GetKeyboardControl()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETKEYBOARDCONTROL_OFFSET))(nullptr);
		}

		::System::Void Internal_SetHotControl(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_SETHOTCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_SetKeyboardControl(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_SETKEYBOARDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Object* Internal_GetDefaultSkin(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETDEFAULTSKIN_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_ExitGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_EXITGUI_OFFSET))(nullptr);
		}

		::System::Void MarkGUIChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_MARKGUICHANGED_OFFSET))(nullptr);
		}

		::System::Int32 GetControlID(::System::Int32 arg, ::UnityEngine::FocusType* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_guiIsExiting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_GUIISEXITING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_hotControl()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_HOTCONTROL_OFFSET))(nullptr);
		}

		::System::Void set_hotControl(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_HOTCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void TakeCapture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_TAKECAPTURE_OFFSET))(nullptr);
		}

		::System::Void RemoveCapture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_REMOVECAPTURE_OFFSET))(nullptr);
		}

		::System::Int32 get_keyboardControl()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_KEYBOARDCONTROL_OFFSET))(nullptr);
		}

		::System::Void set_keyboardControl(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_KEYBOARDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasKeyFocus(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HASKEYFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void ExitGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_EXITGUI_OFFSET))(nullptr);
		}

		::UnityEngine::GUISkin* GetDefaultSkin()
		{
			return (return (::UnityEngine::GUISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETDEFAULTSKIN_OFFSET))(nullptr);
		}

		::System::Void ProcessEvent(::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_PROCESSEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndContainer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDCONTAINER_OFFSET))(nullptr);
		}

		::System::Void BeginGUI(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINGUI_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DestroyGUI(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_DESTROYGUI_OFFSET))(arg, nullptr);
		}

		::System::Void EndGUI(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDGUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndGUIFromException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDGUIFROMEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndContainerGUIFromException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void ResetGlobalState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_RESETGLOBALSTATE_OFFSET))(nullptr);
		}

		::System::Boolean IsExitGUIException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ISEXITGUIEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldRethrowException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SHOULDRETHROWEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckOnGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_CHECKONGUI_OFFSET))(nullptr);
		}

		::System::Single RoundToPixelGrid(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ROUNDTOPIXELGRID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HitTest(::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HitTest(::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HitTest(::UnityEngine::Rect* arg, ::UnityEngine::Event* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Internal_GetControlID_Injected(::System::Int32 arg, ::UnityEngine::FocusType* arg, ::UnityEngine::Rect&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETCONTROLID_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_compositionCursorPos_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

