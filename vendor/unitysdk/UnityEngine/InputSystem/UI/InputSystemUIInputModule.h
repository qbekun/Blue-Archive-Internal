#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionReference; }
namespace UnityEngine::InputSystem::UI { class UIPointerBehavior; }
namespace UnityEngine::InputSystem::UI { class UIPointerType; }
namespace UnityEngine::InputSystem::UI { class NavigationModel; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class RaycastResult; }
namespace UnityEngine::InputSystem::UI { class ExtendedPointerEventData; }
namespace UnityEngine::InputSystem::UI { class PointerModel&; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::InputSystem::UI { class NavigationModel&; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::InputSystem { class InputActionReference&; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_DESELECTONBACKGROUNDCLICK_OFFSET UNITYSDK_OFFSET(0x9F2FB70)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_DESELECTONBACKGROUNDCLICK_OFFSET UNITYSDK_OFFSET(0x9F2FB80)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_POINTERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F2FB90)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_POINTERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F2FBA0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_CURSORLOCKBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F2FBB0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_CURSORLOCKBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F2FBC0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_LOCALMULTIPLAYERROOT_OFFSET UNITYSDK_OFFSET(0x9F2FBD0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_LOCALMULTIPLAYERROOT_OFFSET UNITYSDK_OFFSET(0x9F2FBE0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x9F2FC00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9F2FCB0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETLASTRAYCASTRESULT_OFFSET UNITYSDK_OFFSET(0x9F2FF40)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PERFORMRAYCAST_OFFSET UNITYSDK_OFFSET(0x9F30000)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTER_OFFSET UNITYSDK_OFFSET(0x9F30A90)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_POINTERSHOULDIGNORETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F320A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERMOVEMENT_OFFSET UNITYSDK_OFFSET(0x9F31080)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERMOVEMENT_OFFSET UNITYSDK_OFFSET(0x9F32190)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F310F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERBUTTONDRAG_OFFSET UNITYSDK_OFFSET(0x9F31B50)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERSCROLL_OFFSET UNITYSDK_OFFSET(0x9F31F20)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSNAVIGATION_OFFSET UNITYSDK_OFFSET(0x9F32AE0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ISMOVEALLOWED_OFFSET UNITYSDK_OFFSET(0x9F332B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVEREPEATDELAY_OFFSET UNITYSDK_OFFSET(0x9F334C0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVEREPEATDELAY_OFFSET UNITYSDK_OFFSET(0x9F334D0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVEREPEATRATE_OFFSET UNITYSDK_OFFSET(0x9F334E0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVEREPEATRATE_OFFSET UNITYSDK_OFFSET(0x9F334F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_EXPLICTLYIGNOREFOCUS_OFFSET UNITYSDK_OFFSET(0x9F33500)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SHOULDIGNOREFOCUS_OFFSET UNITYSDK_OFFSET(0x9F33570)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_REPEATRATE_OFFSET UNITYSDK_OFFSET(0x9F336A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_REPEATRATE_OFFSET UNITYSDK_OFFSET(0x9F336B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_REPEATDELAY_OFFSET UNITYSDK_OFFSET(0x9F336C0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_REPEATDELAY_OFFSET UNITYSDK_OFFSET(0x9F336D0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_XRTRACKINGORIGIN_OFFSET UNITYSDK_OFFSET(0x9F336E0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_XRTRACKINGORIGIN_OFFSET UNITYSDK_OFFSET(0x9F336F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEDRAGTHRESHOLDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9F33700)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEDRAGTHRESHOLDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9F33710)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SWAPACTION_OFFSET UNITYSDK_OFFSET(0x9F33720)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_POINT_OFFSET UNITYSDK_OFFSET(0x9F33D30)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_POINT_OFFSET UNITYSDK_OFFSET(0x9F33D40)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x9F33D70)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_SCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x9F33D80)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_LEFTCLICK_OFFSET UNITYSDK_OFFSET(0x9F33DB0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_LEFTCLICK_OFFSET UNITYSDK_OFFSET(0x9F33DC0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MIDDLECLICK_OFFSET UNITYSDK_OFFSET(0x9F33DF0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MIDDLECLICK_OFFSET UNITYSDK_OFFSET(0x9F33E00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_RIGHTCLICK_OFFSET UNITYSDK_OFFSET(0x9F33E30)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_RIGHTCLICK_OFFSET UNITYSDK_OFFSET(0x9F33E40)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVE_OFFSET UNITYSDK_OFFSET(0x9F33E70)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVE_OFFSET UNITYSDK_OFFSET(0x9F33E80)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SUBMIT_OFFSET UNITYSDK_OFFSET(0x9F33EB0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_SUBMIT_OFFSET UNITYSDK_OFFSET(0x9F33EC0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x9F33EF0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_CANCEL_OFFSET UNITYSDK_OFFSET(0x9F33F00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F33F30)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F33F40)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F33F70)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F33F80)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ASSIGNDEFAULTACTIONS_OFFSET UNITYSDK_OFFSET(0x9F33FB0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UNASSIGNACTIONS_OFFSET UNITYSDK_OFFSET(0x9F345B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICESELECT_OFFSET UNITYSDK_OFFSET(0x9F34740)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICESELECT_OFFSET UNITYSDK_OFFSET(0x9F34790)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_AWAKE_OFFSET UNITYSDK_OFFSET(0x9F347E0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F34870)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F348C0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F34FE0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_RESETPOINTERS_OFFSET UNITYSDK_OFFSET(0x9F34B60)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HASNOACTIONS_OFFSET UNITYSDK_OFFSET(0x9F349F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ENABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x9F34F60)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_DISABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x9F350A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ENABLEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9F33BB0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_TRYDISABLEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9F33A30)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_OFFSET UNITYSDK_OFFSET(0x9F2FE20)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEFORINDEX_OFFSET UNITYSDK_OFFSET(0x9F35220)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETDISPLAYINDEXFOR_OFFSET UNITYSDK_OFFSET(0x9F35280)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_OFFSET UNITYSDK_OFFSET(0x9F35320)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_OFFSET UNITYSDK_OFFSET(0x9F35410)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ALLOCATEPOINTER_OFFSET UNITYSDK_OFFSET(0x9F36100)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SENDPOINTEREXITEVENTSANDREMOVEPOINTER_OFFSET UNITYSDK_OFFSET(0x9F35160)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_REMOVEPOINTERATINDEX_OFFSET UNITYSDK_OFFSET(0x9F365C0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PURGESTALEPOINTERS_OFFSET UNITYSDK_OFFSET(0x9F36830)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HAVECONTROLFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F36030)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F369F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_IGNORENEXTCLICK_OFFSET UNITYSDK_OFFSET(0x9F36B30)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONLEFTCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F36CC0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONRIGHTCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F36E00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONMIDDLECLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F36F00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_CHECKFORREMOVEDDEVICE_OFFSET UNITYSDK_OFFSET(0x9F353B0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONSCROLLCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F37000)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9F37150)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONTRACKEDDEVICEORIENTATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F371A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONTRACKEDDEVICEPOSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F37300)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONCONTROLSCHANGED_OFFSET UNITYSDK_OFFSET(0x9F37480)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_FILTERPOINTERSTATESBYTYPE_OFFSET UNITYSDK_OFFSET(0x9F37490)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F37950)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_CONVERTUITOOLKITPOINTERID_OFFSET UNITYSDK_OFFSET(0x9F37BE0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HOOKACTIONS_OFFSET UNITYSDK_OFFSET(0x9F34BB0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UNHOOKACTIONS_OFFSET UNITYSDK_OFFSET(0x9F348A0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SETACTIONCALLBACKS_OFFSET UNITYSDK_OFFSET(0x9F37CA0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SETACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F37DA0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UPDATEREFERENCEFORNEWASSET_OFFSET UNITYSDK_OFFSET(0x9F37E70)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_ACTIONSASSET_OFFSET UNITYSDK_OFFSET(0x9F37F00)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_ACTIONSASSET_OFFSET UNITYSDK_OFFSET(0x9F342F0)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F37F10)
#define UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F37F40)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int InputSystemUIInputModule_TypeDefinitionIndex = 28628;

	class InputSystemUIInputModule : public ::TriInspector::SceneObjectsOnlyAttribute
	{
	public:
		::System::Single kClickSpeed; // 0x0
		::System::Single m_MoveRepeatDelay; // 0x50
		::System::Single m_MoveRepeatRate; // 0x54
		::System::Single m_TrackedDeviceDragThresholdMultiplier; // 0x58
		::UnityEngine::Transform* m_XRTrackingOrigin; // 0x60
		::System::Single kPixelPerLine; // 0x0
		::UnityEngine::InputSystem::InputActionAsset* m_ActionsAsset; // 0x68
		::UnityEngine::InputSystem::InputActionReference* m_PointAction; // 0x70
		::UnityEngine::InputSystem::InputActionReference* m_MoveAction; // 0x78
		::UnityEngine::InputSystem::InputActionReference* m_SubmitAction; // 0x80
		::UnityEngine::InputSystem::InputActionReference* m_CancelAction; // 0x88
		::UnityEngine::InputSystem::InputActionReference* m_LeftClickAction; // 0x90
		::UnityEngine::InputSystem::InputActionReference* m_MiddleClickAction; // 0x98
		::UnityEngine::InputSystem::InputActionReference* m_RightClickAction; // 0xA0
		::UnityEngine::InputSystem::InputActionReference* m_ScrollWheelAction; // 0xA8
		::UnityEngine::InputSystem::InputActionReference* m_TrackedDevicePositionAction; // 0xB0
		::UnityEngine::InputSystem::InputActionReference* m_TrackedDeviceOrientationAction; // 0xB8
		::System::Boolean m_DeselectOnBackgroundClick; // 0xC0
		::UnityEngine::InputSystem::UI::UIPointerBehavior* m_PointerBehavior; // 0xC4
		CursorLockBehavior* m_CursorLockBehavior; // 0xC8
		Il2CppObject* s_InputActionReferenceCounts; // 0x0
		::System::Boolean m_ActionsHooked; // 0xCC
		::System::Boolean m_NeedToPurgeStalePointers; // 0xCD
		Il2CppObject* m_OnPointDelegate; // 0xD0
		Il2CppObject* m_OnMoveDelegate; // 0xD8
		Il2CppObject* m_OnLeftClickDelegate; // 0xE0
		Il2CppObject* m_OnRightClickDelegate; // 0xE8
		Il2CppObject* m_OnMiddleClickDelegate; // 0xF0
		Il2CppObject* m_OnScrollWheelDelegate; // 0xF8
		Il2CppObject* m_OnTrackedDevicePositionDelegate; // 0x100
		Il2CppObject* m_OnTrackedDeviceOrientationDelegate; // 0x108
		Il2CppObject* m_OnControlsChangedDelegate; // 0x110
		::System::Int32 m_CurrentPointerId; // 0x118
		::System::Int32 m_CurrentPointerIndex; // 0x11C
		::UnityEngine::InputSystem::UI::UIPointerType* m_CurrentPointerType; // 0x120
		Il2CppObject* m_PointerIds; // 0x128
		Il2CppObject* m_PointerTouchControls; // 0x138
		Il2CppObject* m_PointerStates; // 0x150
		::UnityEngine::InputSystem::UI::NavigationModel* m_NavigationState; // 0x380
		::UnityEngine::GameObject* m_LocalMultiPlayerRoot; // 0x3A0

		::System::Boolean get_deselectOnBackgroundClick()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_DESELECTONBACKGROUNDCLICK_OFFSET))(nullptr);
		}

		::System::Void set_deselectOnBackgroundClick(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_DESELECTONBACKGROUNDCLICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::UI::UIPointerBehavior* get_pointerBehavior()
		{
			return (return (::UnityEngine::InputSystem::UI::UIPointerBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_POINTERBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_pointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::UIPointerBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_POINTERBEHAVIOR_OFFSET))(arg, nullptr);
		}

		CursorLockBehavior* get_cursorLockBehavior()
		{
			return (return (CursorLockBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_CURSORLOCKBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_cursorLockBehavior(CursorLockBehavior* arg)
		{
			((::System::Void(*)(CursorLockBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_CURSORLOCKBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_localMultiPlayerRoot()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_LOCALMULTIPLAYERROOT_OFFSET))(nullptr);
		}

		::System::Void set_localMultiPlayerRoot(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_LOCALMULTIPLAYERROOT_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ACTIVATEMODULE_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::RaycastResult* GetLastRaycastResult(::System::Int32 arg)
		{
			return (return (::UnityEngine::EventSystems::RaycastResult*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETLASTRAYCASTRESULT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::RaycastResult* PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* arg)
		{
			return (return (::UnityEngine::EventSystems::RaycastResult*(*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PERFORMRAYCAST_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessPointer(::UnityEngine::InputSystem::UI::PointerModel&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::PointerModel&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean PointerShouldIgnoreTransform(::UnityEngine::Transform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_POINTERSHOULDIGNORETRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessPointerMovement(::UnityEngine::InputSystem::UI::PointerModel&* arg, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::PointerModel&*, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERMOVEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessPointerMovement(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* arg, ::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERMOVEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessPointerButton(ButtonState&* arg, ::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(ButtonState&*, ::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessPointerButtonDrag(ButtonState&* arg, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* arg)
		{
			((::System::Void(*)(ButtonState&*, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERBUTTONDRAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessPointerScroll(::UnityEngine::InputSystem::UI::PointerModel&* arg, ::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::PointerModel&*, ::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSPOINTERSCROLL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessNavigation(::UnityEngine::InputSystem::UI::NavigationModel&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::NavigationModel&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESSNAVIGATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMoveAllowed(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ISMOVEALLOWED_OFFSET))(arg, nullptr);
		}

		::System::Single get_moveRepeatDelay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVEREPEATDELAY_OFFSET))(nullptr);
		}

		::System::Void set_moveRepeatDelay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVEREPEATDELAY_OFFSET))(arg, nullptr);
		}

		::System::Single get_moveRepeatRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVEREPEATRATE_OFFSET))(nullptr);
		}

		::System::Void set_moveRepeatRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVEREPEATRATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_explictlyIgnoreFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_EXPLICTLYIGNOREFOCUS_OFFSET))(nullptr);
		}

		::System::Boolean get_shouldIgnoreFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SHOULDIGNOREFOCUS_OFFSET))(nullptr);
		}

		::System::Single get_repeatRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_REPEATRATE_OFFSET))(nullptr);
		}

		::System::Void set_repeatRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_REPEATRATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_repeatDelay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_REPEATDELAY_OFFSET))(nullptr);
		}

		::System::Void set_repeatDelay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_REPEATDELAY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_xrTrackingOrigin()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_XRTRACKINGORIGIN_OFFSET))(nullptr);
		}

		::System::Void set_xrTrackingOrigin(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_XRTRACKINGORIGIN_OFFSET))(arg, nullptr);
		}

		::System::Single get_trackedDeviceDragThresholdMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEDRAGTHRESHOLDMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_trackedDeviceDragThresholdMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEDRAGTHRESHOLDMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void SwapAction(::UnityEngine::InputSystem::InputActionReference&* arg, ::UnityEngine::InputSystem::InputActionReference* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference&*, ::UnityEngine::InputSystem::InputActionReference*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SWAPACTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_point()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_POINT_OFFSET))(nullptr);
		}

		::System::Void set_point(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_POINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_scrollWheel()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SCROLLWHEEL_OFFSET))(nullptr);
		}

		::System::Void set_scrollWheel(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_SCROLLWHEEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_leftClick()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_LEFTCLICK_OFFSET))(nullptr);
		}

		::System::Void set_leftClick(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_LEFTCLICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_middleClick()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MIDDLECLICK_OFFSET))(nullptr);
		}

		::System::Void set_middleClick(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MIDDLECLICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_rightClick()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_RIGHTCLICK_OFFSET))(nullptr);
		}

		::System::Void set_rightClick(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_RIGHTCLICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_move()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_MOVE_OFFSET))(nullptr);
		}

		::System::Void set_move(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_MOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_submit()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_SUBMIT_OFFSET))(nullptr);
		}

		::System::Void set_submit(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_SUBMIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_cancel()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_CANCEL_OFFSET))(nullptr);
		}

		::System::Void set_cancel(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_CANCEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_trackedDeviceOrientation()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEORIENTATION_OFFSET))(nullptr);
		}

		::System::Void set_trackedDeviceOrientation(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEORIENTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_trackedDevicePosition()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_trackedDevicePosition(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void AssignDefaultActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ASSIGNDEFAULTACTIONS_OFFSET))(nullptr);
		}

		::System::Void UnassignActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UNASSIGNACTIONS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_trackedDeviceSelect()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_TRACKEDDEVICESELECT_OFFSET))(nullptr);
		}

		::System::Void set_trackedDeviceSelect(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_TRACKEDDEVICESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ResetPointers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_RESETPOINTERS_OFFSET))(nullptr);
		}

		::System::Boolean HasNoActions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HASNOACTIONS_OFFSET))(nullptr);
		}

		::System::Void EnableAllActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ENABLEALLACTIONS_OFFSET))(nullptr);
		}

		::System::Void DisableAllActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_DISABLEALLACTIONS_OFFSET))(nullptr);
		}

		::System::Void EnableInputAction(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ENABLEINPUTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void TryDisableInputAction(::UnityEngine::InputSystem::InputActionReference* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_TRYDISABLEINPUTACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPointerStateIndexFor(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::UI::PointerModel&* GetPointerStateForIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::UI::PointerModel&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEFORINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDisplayIndexFor(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETDISPLAYINDEXFOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPointerStateIndexFor(CallbackContext&* arg)
		{
			return (return (::System::Int32(*)(CallbackContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPointerStateIndexFor(::UnityEngine::InputSystem::InputControl* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputControl*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GETPOINTERSTATEINDEXFOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AllocatePointer(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::InputSystem::UI::UIPointerType* arg, ::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::InputSystem::UI::UIPointerType*, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ALLOCATEPOINTER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SendPointerExitEventsAndRemovePointer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SENDPOINTEREXITEVENTSANDREMOVEPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Void RemovePointerAtIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_REMOVEPOINTERATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void PurgeStalePointers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PURGESTALEPOINTERS_OFFSET))(nullptr);
		}

		::System::Boolean HaveControlForDevice(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputActionReference* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HAVECONTROLFORDEVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPointCallback(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONPOINTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean IgnoreNextClick(CallbackContext&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(CallbackContext&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_IGNORENEXTCLICK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnLeftClickCallback(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONLEFTCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnRightClickCallback(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONRIGHTCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnMiddleClickCallback(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONMIDDLECLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckForRemovedDevice(CallbackContext&* arg)
		{
			return (return (::System::Boolean(*)(CallbackContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_CHECKFORREMOVEDDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void OnScrollCallback(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONSCROLLCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnMoveCallback(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONMOVECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnTrackedDeviceOrientationCallback(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONTRACKEDDEVICEORIENTATIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnTrackedDevicePositionCallback(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONTRACKEDDEVICEPOSITIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnControlsChanged(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_ONCONTROLSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void FilterPointerStatesByType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_FILTERPOINTERSTATESBYTYPE_OFFSET))(nullptr);
		}

		::System::Void Process()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_PROCESS_OFFSET))(nullptr);
		}

		::System::Int32 ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_CONVERTUITOOLKITPOINTERID_OFFSET))(arg, nullptr);
		}

		::System::Void HookActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_HOOKACTIONS_OFFSET))(nullptr);
		}

		::System::Void UnhookActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UNHOOKACTIONS_OFFSET))(nullptr);
		}

		::System::Void SetActionCallbacks(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SETACTIONCALLBACKS_OFFSET))(arg, nullptr);
		}

		::System::Void SetActionCallback(::UnityEngine::InputSystem::InputActionReference* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SETACTIONCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* UpdateReferenceForNewAsset(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_UPDATEREFERENCEFORNEWASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_actionsAsset()
		{
			return (return (::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_GET_ACTIONSASSET_OFFSET))(nullptr);
		}

		::System::Void set_actionsAsset(::UnityEngine::InputSystem::InputActionAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_SET_ACTIONSASSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_INPUTSYSTEMUIINPUTMODULE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

