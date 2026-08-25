#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class ObjectGUIState; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::UIElements { class ContextType; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class IMGUIContainer; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class MeshGenerationContext; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine { class Rect&; }

#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0xA31A350)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0xA31A360)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_GUISTATE_OFFSET UNITYSDK_OFFSET(0xA31A3D0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LASTWORLDCLIP_OFFSET UNITYSDK_OFFSET(0xA31A480)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_LASTWORLDCLIP_OFFSET UNITYSDK_OFFSET(0xA31A490)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CULLINGENABLED_OFFSET UNITYSDK_OFFSET(0xA31A4A0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CACHE_OFFSET UNITYSDK_OFFSET(0xA31A4B0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDWIDTH_OFFSET UNITYSDK_OFFSET(0xA31A530)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA31A5D0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0xA31A670)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0xA31A680)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_FOCUSONLYIFHASFOCUSABLECONTROLS_OFFSET UNITYSDK_OFFSET(0xA31A690)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CANGRABFOCUS_OFFSET UNITYSDK_OFFSET(0xA31A6A0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA31A6D0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31AB70)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31AB80)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ONGENERATEVISUALCONTENT_OFFSET UNITYSDK_OFFSET(0xA31AE90)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SAVEGLOBALS_OFFSET UNITYSDK_OFFSET(0xA31AFC0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_RESTOREGLOBALS_OFFSET UNITYSDK_OFFSET(0xA31B0C0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOONGUI_OFFSET UNITYSDK_OFFSET(0xA31B210)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_MARKDIRTYLAYOUT_OFFSET UNITYSDK_OFFSET(0xA31C5E0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0xA31C600)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOIMGUIREPAINT_OFFSET UNITYSDK_OFFSET(0xA31C960)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUI_OFFSET UNITYSDK_OFFSET(0xA31C6B0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUIRAW_OFFSET UNITYSDK_OFFSET(0xA31D270)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_VERIFYBOUNDS_OFFSET UNITYSDK_OFFSET(0xA31D460)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ISCONTAINERCAPTURINGTHEMOUSE_OFFSET UNITYSDK_OFFSET(0xA31D5C0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ISLOCALEVENT_OFFSET UNITYSDK_OFFSET(0xA31D6F0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ISEVENTINSIDELOCALWINDOW_OFFSET UNITYSDK_OFFSET(0xA31D8E0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ISDOCKAREAMOUSEUP_OFFSET UNITYSDK_OFFSET(0xA31DAB0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET UNITYSDK_OFFSET(0xA31D4E0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET UNITYSDK_OFFSET(0xA31DC70)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET UNITYSDK_OFFSET(0xA31CDF0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0xA31E030)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SETFOLDOUTDEPTHCLASS_OFFSET UNITYSDK_OFFSET(0xA31E340)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOMEASURE_OFFSET UNITYSDK_OFFSET(0xA31E4A0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTCLIPRECT_OFFSET UNITYSDK_OFFSET(0xA31DBF0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTTRANSFORMANDCLIP_OFFSET UNITYSDK_OFFSET(0xA31DD40)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA31E7B0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA31E810)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER__DOONGUI_B__57_0_OFFSET UNITYSDK_OFFSET(0xA31E830)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIContainer_TypeDefinitionIndex = 30110;

	class IMGUIContainer : public Il2CppObject
	{
	public:
		::System::Action* m_OnGUIHandler; // 0x3B0
		::UnityEngine::ObjectGUIState* m_ObjectGUIState; // 0x3B8
		::System::Boolean useOwnerObjectGUIState; // 0x3C0
		::UnityEngine::Rect* _lastWorldClip_k__BackingField; // 0x3C4
		::System::Boolean m_CullingEnabled; // 0x3D4
		::System::Boolean m_IsFocusDelegated; // 0x3D5
		::System::Boolean m_RefreshCachedLayout; // 0x3D6
		LayoutCache* m_Cache; // 0x3D8
		::UnityEngine::Rect* m_CachedClippingRect; // 0x3E0
		::UnityEngine::Matrix4x4* m_CachedTransform; // 0x3F0
		::UnityEngine::UIElements::ContextType* _contextType_k__BackingField; // 0x430
		::System::Boolean lostFocus; // 0x434
		::System::Boolean receivedFocus; // 0x435
		::UnityEngine::UIElements::FocusChangeDirection* focusChangeDirection; // 0x438
		::System::Boolean hasFocusableControls; // 0x440
		::System::Int32 newKeyboardFocusControlID; // 0x444
		::System::Boolean _focusOnlyIfHasFocusableControls_k__BackingField; // 0x448
		::System::String* ussClassName; // 0x0
		::System::String* ussFoldoutChildDepthClassName; // 0x8
		Il2CppObject* ussFoldoutChildDepthClassNames; // 0x10
		::UnityEngine::UIElements::IMGUIContainer* current; // 0x18
		GUIGlobals* m_GUIGlobals; // 0x44C
		::Unity::Profiling::ProfilerMarker* k_OnGUIMarker; // 0x20
		::Unity::Profiling::ProfilerMarker* k_ImmediateCallbackMarker; // 0x28
		::UnityEngine::Event* s_DefaultMeasureEvent; // 0x30
		::UnityEngine::Event* s_MeasureEvent; // 0x38
		::UnityEngine::Event* s_CurrentEvent; // 0x40

		::System::Action* get_onGUIHandler()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_ONGUIHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_onGUIHandler(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_ONGUIHANDLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ObjectGUIState* get_guiState()
		{
			return (return (::UnityEngine::ObjectGUIState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_GUISTATE_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_lastWorldClip()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LASTWORLDCLIP_OFFSET))(nullptr);
		}

		::System::Void set_lastWorldClip(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_LASTWORLDCLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_cullingEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CULLINGENABLED_OFFSET))(nullptr);
		}

		LayoutCache* get_cache()
		{
			return (return (LayoutCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CACHE_OFFSET))(nullptr);
		}

		::System::Single get_layoutMeasuredWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_layoutMeasuredHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ContextType* get_contextType()
		{
			return (return (::UnityEngine::UIElements::ContextType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CONTEXTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_contextType(::UnityEngine::UIElements::ContextType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_CONTEXTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_focusOnlyIfHasFocusableControls()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_FOCUSONLYIFHASFOCUSABLECONTROLS_OFFSET))(nullptr);
		}

		::System::Boolean get_canGrabFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CANGRABFOCUS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MeshGenerationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ONGENERATEVISUALCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void SaveGlobals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SAVEGLOBALS_OFFSET))(nullptr);
		}

		::System::Void RestoreGlobals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_RESTOREGLOBALS_OFFSET))(nullptr);
		}

		::System::Void DoOnGUI(::UnityEngine::Event* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rect* arg, ::System::Boolean arg, ::UnityEngine::Rect* arg, ::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Rect*, ::System::Boolean, ::UnityEngine::Rect*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOONGUI_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MarkDirtyLayout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_MARKDIRTYLAYOUT_OFFSET))(nullptr);
		}

		::System::Void HandleEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DoIMGUIRepaint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOIMGUIREPAINT_OFFSET))(nullptr);
		}

		::System::Boolean SendEventToIMGUI(::UnityEngine::UIElements::EventBase* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUI_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SendEventToIMGUIRaw(::UnityEngine::UIElements::EventBase* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUIRAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyBounds(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_VERIFYBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContainerCapturingTheMouse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ISCONTAINERCAPTURINGTHEMOUSE_OFFSET))(nullptr);
		}

		::System::Boolean IsLocalEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ISLOCALEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEventInsideLocalWindow(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ISEVENTINSIDELOCALWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDockAreaMouseUp(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ISDOCKAREAMOUSEUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleIMGUIEvent(::UnityEngine::Event* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Event*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HandleIMGUIEvent(::UnityEngine::Event* arg, ::System::Action* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Event*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HandleIMGUIEvent(::UnityEngine::Event* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rect* arg, ::System::Action* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Event*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Rect*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetFoldoutDepthClass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SETFOLDOUTDEPTHCLASS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* DoMeasure(::System::Single arg, MeasureMode* arg, ::System::Single arg, MeasureMode* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, MeasureMode*, ::System::Single, MeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOMEASURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* GetCurrentClipRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTCLIPRECT_OFFSET))(nullptr);
		}

		::System::Void GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer* arg, ::UnityEngine::Event* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::Event*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTTRANSFORMANDCLIP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void _DoOnGUI_b__57_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER__DOONGUI_B__57_0_OFFSET))(nullptr);
		}

	};
}

