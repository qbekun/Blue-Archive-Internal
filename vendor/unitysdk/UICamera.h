#pragma once
#include "unitysdk.h"

class GetKeyStateFunc;
class GetAxisFunc;
class GetAnyKeyFunc;
class GetMouseDelegate;
class GetTouchDelegate;
class RemoveTouchDelegate;
class OnScreenResize;
class EventType;
namespace UnityEngine { class LayerMask; }
class ProcessEventsIn;
namespace UnityEngine { class KeyCode; }
class OnCustomInput;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class RaycastHit; }
class UICamera;
namespace UnityEngine { class Camera; }
class OnSchemeChange;
class ControlScheme;
class MouseOrTouch;
namespace UnityEngine { class GameObject; }
class VoidDelegate;
class BoolDelegate;
class FloatDelegate;
class VectorDelegate;
class ObjectDelegate;
class KeyCodeDelegate;
class MoveDelegate;
class DepthEntry;
namespace UnityEngine { class Plane; }
class GetTouchCountCallback;
class GetTouchCallback;
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Rigidbody2D; }

#define UICAMERA_GET_STICKYPRESS_OFFSET UNITYSDK_OFFSET(0x21CE350)
#define UICAMERA_GET_DISABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x21CE360)
#define UICAMERA_SET_DISABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x21CE3E0)
#define UICAMERA_GET_LASTTOUCHPOSITION_OFFSET UNITYSDK_OFFSET(0x21CE430)
#define UICAMERA_SET_LASTTOUCHPOSITION_OFFSET UNITYSDK_OFFSET(0x21CE480)
#define UICAMERA_GET_LASTEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0x21CE4E0)
#define UICAMERA_SET_LASTEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0x21CEA50)
#define UICAMERA_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x21CEAB0)
#define UICAMERA_GET_CURRENTSCHEME_OFFSET UNITYSDK_OFFSET(0x21CE690)
#define UICAMERA_SET_CURRENTSCHEME_OFFSET UNITYSDK_OFFSET(0x21CEBA0)
#define UICAMERA_GET_CURRENTKEY_OFFSET UNITYSDK_OFFSET(0x21CEF70)
#define UICAMERA_SET_CURRENTKEY_OFFSET UNITYSDK_OFFSET(0x21CEC90)
#define UICAMERA_GET_CURRENTRAY_OFFSET UNITYSDK_OFFSET(0x21CF020)
#define UICAMERA_GET_INPUTHASFOCUS_OFFSET UNITYSDK_OFFSET(0x21CF180)
#define UICAMERA_GET_GENERICEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x21CF2B0)
#define UICAMERA_SET_GENERICEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x21CF300)
#define UICAMERA_GET_MOUSE0_OFFSET UNITYSDK_OFFSET(0x21CF370)
#define UICAMERA_GET_MOUSE1_OFFSET UNITYSDK_OFFSET(0x21CF400)
#define UICAMERA_GET_MOUSE2_OFFSET UNITYSDK_OFFSET(0x21CF490)
#define UICAMERA_GET_HANDLESEVENTS_OFFSET UNITYSDK_OFFSET(0x21CF520)
#define UICAMERA_GET_CACHEDCAMERA_OFFSET UNITYSDK_OFFSET(0x21CF710)
#define UICAMERA_GET_TOOLTIPOBJECT_OFFSET UNITYSDK_OFFSET(0x21CF7B0)
#define UICAMERA_SET_TOOLTIPOBJECT_OFFSET UNITYSDK_OFFSET(0x21CF800)
#define UICAMERA_ISPARTOFUI_OFFSET UNITYSDK_OFFSET(0x21CFBE0)
#define UICAMERA_GET_ISOVERUI_OFFSET UNITYSDK_OFFSET(0x21CFD00)
#define UICAMERA_GET_UIHASFOCUS_OFFSET UNITYSDK_OFFSET(0x21D0210)
#define UICAMERA_GET_INTERACTINGWITHUI_OFFSET UNITYSDK_OFFSET(0x21D0640)
#define UICAMERA_GET_HOVEREDOBJECT_OFFSET UNITYSDK_OFFSET(0x21CE820)
#define UICAMERA_SET_HOVEREDOBJECT_OFFSET UNITYSDK_OFFSET(0x21D0970)
#define UICAMERA_GET_CONTROLLERNAVIGATIONOBJECT_OFFSET UNITYSDK_OFFSET(0x21D1780)
#define UICAMERA_SET_CONTROLLERNAVIGATIONOBJECT_OFFSET UNITYSDK_OFFSET(0x21D1CE0)
#define UICAMERA_GET_SELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x21D1F40)
#define UICAMERA_SET_SELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x21D2080)
#define UICAMERA_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x21D2940)
#define UICAMERA_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x21D2CB0)
#define UICAMERA_COUNTINPUTSOURCES_OFFSET UNITYSDK_OFFSET(0x21D2D10)
#define UICAMERA_GET_DRAGCOUNT_OFFSET UNITYSDK_OFFSET(0x21D2FA0)
#define UICAMERA_GET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0x21D3230)
#define UICAMERA_GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x21CF5A0)
#define UICAMERA_COMPAREFUNC_OFFSET UNITYSDK_OFFSET(0x21D32C0)
#define UICAMERA_FINDROOTRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x21D3370)
#define UICAMERA_FINDROOTRIGIDBODY2D_OFFSET UNITYSDK_OFFSET(0x21D34A0)
#define UICAMERA_RAYCAST_OFFSET UNITYSDK_OFFSET(0x21D35D0)
#define UICAMERA_RAYCAST_OFFSET UNITYSDK_OFFSET(0x21D37B0)
#define UICAMERA_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x21D5930)
#define UICAMERA_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x21D5830)
#define UICAMERA_ISHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x21D5A30)
#define UICAMERA_FINDCAMERAFORLAYER_OFFSET UNITYSDK_OFFSET(0x21D1630)
#define UICAMERA_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x21D5AB0)
#define UICAMERA_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x21D5BC0)
#define UICAMERA_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x21D5D90)
#define UICAMERA_NOTIFY_OFFSET UNITYSDK_OFFSET(0x21D1340)
#define UICAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x21D5EF0)
#define UICAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21D6380)
#define UICAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21D6490)
#define UICAMERA_START_OFFSET UNITYSDK_OFFSET(0x21D6530)
#define UICAMERA_STARTIGNORING_OFFSET UNITYSDK_OFFSET(0x21D6A00)
#define UICAMERA_STOPIGNORING_OFFSET UNITYSDK_OFFSET(0x21D6A50)
#define UICAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x21D6AA0)
#define UICAMERA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x21D7370)
#define UICAMERA_PROCESSEVENTS_OFFSET UNITYSDK_OFFSET(0x21D6BA0)
#define UICAMERA_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x21D9AC0)
#define UICAMERA_PROCESSMOUSE_OFFSET UNITYSDK_OFFSET(0x21D7C20)
#define UICAMERA_PROCESSTOUCHES_OFFSET UNITYSDK_OFFSET(0x21D75A0)
#define UICAMERA_PROCESSFAKETOUCHES_OFFSET UNITYSDK_OFFSET(0x21D9EF0)
#define UICAMERA_PROCESSOTHERS_OFFSET UNITYSDK_OFFSET(0x21D8AE0)
#define UICAMERA_PROCESSPRESS_OFFSET UNITYSDK_OFFSET(0x21DA330)
#define UICAMERA_PROCESSRELEASE_OFFSET UNITYSDK_OFFSET(0x21DB870)
#define UICAMERA_HASCOLLIDER_OFFSET UNITYSDK_OFFSET(0x21DC410)
#define UICAMERA_PROCESSTOUCH_OFFSET UNITYSDK_OFFSET(0x21D9AD0)
#define UICAMERA_CANCELNEXTTOOLTIP_OFFSET UNITYSDK_OFFSET(0x21DC540)
#define UICAMERA_SHOWTOOLTIP_OFFSET UNITYSDK_OFFSET(0x21CF850)
#define UICAMERA_HIDETOOLTIP_OFFSET UNITYSDK_OFFSET(0x21CEFC0)
#define UICAMERA_RESETTOOLTIP_OFFSET UNITYSDK_OFFSET(0x21DC5A0)
#define UICAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x21DC610)
#define UICAMERA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x21DC6F0)

	inline static constexpr unsigned int UICamera_TypeDefinitionIndex = 221;

	class UICamera : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x0
		GetKeyStateFunc* GetKeyDown; // 0x8
		GetKeyStateFunc* GetKeyUp; // 0x10
		GetKeyStateFunc* GetKey; // 0x18
		GetAxisFunc* GetAxis; // 0x20
		GetAnyKeyFunc* GetAnyKeyDown; // 0x28
		GetMouseDelegate* GetMouse; // 0x30
		GetTouchDelegate* GetTouch; // 0x38
		RemoveTouchDelegate* RemoveTouch; // 0x40
		OnScreenResize* onScreenResize; // 0x48
		EventType* eventType; // 0x18
		::System::Boolean eventsGoToColliders; // 0x1C
		::UnityEngine::LayerMask* eventReceiverMask; // 0x20
		ProcessEventsIn* processEventsIn; // 0x24
		::System::Boolean debug; // 0x28
		::System::Boolean useMouse; // 0x29
		::System::Boolean useTouch; // 0x2A
		::System::Boolean allowMultiTouch; // 0x2B
		::System::Boolean useKeyboard; // 0x2C
		::System::Boolean useController; // 0x2D
		::System::Boolean stickyTooltip; // 0x2E
		::System::Single tooltipDelay; // 0x30
		::System::Boolean longPressTooltip; // 0x34
		::System::Single mouseDragThreshold; // 0x38
		::System::Single mouseClickThreshold; // 0x3C
		::System::Single touchDragThreshold; // 0x40
		::System::Single touchClickThreshold; // 0x44
		::System::Single rangeDistance; // 0x48
		::System::String* horizontalAxisName; // 0x50
		::System::String* verticalAxisName; // 0x58
		::System::String* horizontalPanAxisName; // 0x60
		::System::String* verticalPanAxisName; // 0x68
		::System::String* scrollAxisName; // 0x70
		::System::Boolean commandClick; // 0x78
		::UnityEngine::KeyCode* submitKey0; // 0x7C
		::UnityEngine::KeyCode* submitKey1; // 0x80
		::UnityEngine::KeyCode* cancelKey0; // 0x84
		::UnityEngine::KeyCode* cancelKey1; // 0x88
		::System::Boolean autoHideCursor; // 0x8C
		OnCustomInput* onCustomInput; // 0x50
		::System::Boolean showTooltips; // 0x58
		::System::Boolean ignoreAllEvents; // 0x59
		::System::Boolean ignoreControllerInput; // 0x5A
		::System::Boolean mDisableController; // 0x5B
		::UnityEngine::Vector2* mLastPos; // 0x5C
		::UnityEngine::Vector3* lastWorldPosition; // 0x64
		::UnityEngine::Ray* lastWorldRay; // 0x70
		::UnityEngine::RaycastHit* lastHit; // 0x88
		UICamera* current; // 0xB8
		::UnityEngine::Camera* currentCamera; // 0xC0
		OnSchemeChange* onSchemeChange; // 0xC8
		ControlScheme* mLastScheme; // 0xD0
		::System::Int32 currentTouchID; // 0xD4
		::UnityEngine::KeyCode* mCurrentKey; // 0xD8
		MouseOrTouch* currentTouch; // 0xE0
		::System::Boolean mInputFocus; // 0xE8
		::UnityEngine::GameObject* mGenericHandler; // 0xF0
		::UnityEngine::GameObject* fallThrough; // 0xF8
		VoidDelegate* onClick; // 0x100
		VoidDelegate* onDoubleClick; // 0x108
		BoolDelegate* onHover; // 0x110
		BoolDelegate* onPress; // 0x118
		BoolDelegate* onSelect; // 0x120
		FloatDelegate* onScroll; // 0x128
		VectorDelegate* onDrag; // 0x130
		VoidDelegate* onDragStart; // 0x138
		ObjectDelegate* onDragOver; // 0x140
		ObjectDelegate* onDragOut; // 0x148
		VoidDelegate* onDragEnd; // 0x150
		ObjectDelegate* onDrop; // 0x158
		KeyCodeDelegate* onKey; // 0x160
		KeyCodeDelegate* onNavigate; // 0x168
		VectorDelegate* onPan; // 0x170
		BoolDelegate* onTooltip; // 0x178
		MoveDelegate* onMouseMove; // 0x180
		::Il2CppArray<::System::Object*>* mMouse; // 0x188
		MouseOrTouch* controller; // 0x190
		Il2CppObject* activeTouches; // 0x198
		Il2CppObject* mTouchIDs; // 0x1A0
		::System::Int32 mWidth; // 0x1A8
		::System::Int32 mHeight; // 0x1AC
		::UnityEngine::GameObject* mTooltip; // 0x1B0
		::UnityEngine::Camera* mCam; // 0x90
		::System::Single mTooltipTime; // 0x1B8
		::System::Single mNextRaycast; // 0x98
		::System::Boolean isDragging; // 0x1BC
		::System::Int32 mLastInteractionCheck; // 0x1C0
		::System::Boolean mLastInteractionResult; // 0x1C4
		::System::Int32 mLastFocusCheck; // 0x1C8
		::System::Boolean mLastFocusResult; // 0x1CC
		::System::Int32 mLastOverCheck; // 0x1D0
		::System::Boolean mLastOverResult; // 0x1D4
		::UnityEngine::GameObject* mRayHitObject; // 0x1D8
		::UnityEngine::GameObject* mHover; // 0x1E0
		::UnityEngine::GameObject* mSelected; // 0x1E8
		DepthEntry* mHit; // 0x1F0
		Il2CppObject* mHits; // 0x238
		::Il2CppArray<::System::Object*>* mRayHits; // 0x240
		::Il2CppArray<::System::Object*>* mOverlap; // 0x248
		::UnityEngine::Plane* m2DPlane; // 0x250
		::System::Single mNextEvent; // 0x260
		::System::Int32 mNotifying; // 0x264
		::System::Boolean disableControllerCheck; // 0x268
		::System::Boolean hasFocusUsedEndPos; // 0x9C
		::System::Boolean hasFocus; // 0x9D
		::System::Boolean mUsingTouchEvents; // 0x269
		GetTouchCountCallback* GetInputTouchCount; // 0x270
		GetTouchCallback* GetInputTouch; // 0x278

		::System::Boolean get_stickyPress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_STICKYPRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_disableController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_DISABLECONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_disableController(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_DISABLECONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_lastTouchPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_LASTTOUCHPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_lastTouchPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_LASTTOUCHPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_lastEventPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_LASTEVENTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_lastEventPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_LASTEVENTPOSITION_OFFSET))(arg, nullptr);
		}

		UICamera* get_first()
		{
			return ((UICamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_FIRST_OFFSET))(nullptr);
		}

		ControlScheme* get_currentScheme()
		{
			return ((ControlScheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_CURRENTSCHEME_OFFSET))(nullptr);
		}

		::System::Void set_currentScheme(ControlScheme* arg)
		{
			((::System::Void(*)(ControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_CURRENTSCHEME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::KeyCode* get_currentKey()
		{
			return ((::UnityEngine::KeyCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_CURRENTKEY_OFFSET))(nullptr);
		}

		::System::Void set_currentKey(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_CURRENTKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Ray* get_currentRay()
		{
			return ((::UnityEngine::Ray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_CURRENTRAY_OFFSET))(nullptr);
		}

		::System::Boolean get_inputHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_INPUTHASFOCUS_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_genericEventHandler()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_GENERICEVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_genericEventHandler(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_GENERICEVENTHANDLER_OFFSET))(arg, nullptr);
		}

		MouseOrTouch* get_mouse0()
		{
			return ((MouseOrTouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_MOUSE0_OFFSET))(nullptr);
		}

		MouseOrTouch* get_mouse1()
		{
			return ((MouseOrTouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_MOUSE1_OFFSET))(nullptr);
		}

		MouseOrTouch* get_mouse2()
		{
			return ((MouseOrTouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_MOUSE2_OFFSET))(nullptr);
		}

		::System::Boolean get_handlesEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_HANDLESEVENTS_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_cachedCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_CACHEDCAMERA_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_tooltipObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_TOOLTIPOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_tooltipObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_TOOLTIPOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPartOfUI(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_ISPARTOFUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isOverUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_ISOVERUI_OFFSET))(nullptr);
		}

		::System::Boolean get_uiHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_UIHASFOCUS_OFFSET))(nullptr);
		}

		::System::Boolean get_interactingWithUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_INTERACTINGWITHUI_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_hoveredObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_HOVEREDOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_hoveredObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_HOVEREDOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_controllerNavigationObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_CONTROLLERNAVIGATIONOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_controllerNavigationObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_CONTROLLERNAVIGATIONOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_selectedObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_SELECTEDOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_selectedObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SET_SELECTEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPressed(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_ISPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_TOUCHCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 CountInputSources()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_COUNTINPUTSOURCES_OFFSET))(nullptr);
		}

		::System::Int32 get_dragCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_DRAGCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_mainCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_MAINCAMERA_OFFSET))(nullptr);
		}

		UICamera* get_eventHandler()
		{
			return ((UICamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GET_EVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Int32 CompareFunc(UICamera* arg, UICamera* arg2)
		{
			return ((::System::Int32(*)(UICamera*, UICamera*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_COMPAREFUNC_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Rigidbody* FindRootRigidbody(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::Rigidbody*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_FINDROOTRIGIDBODY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rigidbody2D* FindRootRigidbody2D(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_FINDROOTRIGIDBODY2D_OFFSET))(arg, nullptr);
		}

		::System::Void Raycast(MouseOrTouch* arg)
		{
			((::System::Void(*)(MouseOrTouch*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_RAYCAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_RAYCAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVisible(::UnityEngine::Vector3* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_ISVISIBLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsVisible(DepthEntry&* arg)
		{
			return ((::System::Boolean(*)(DepthEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHighlighted(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_ISHIGHLIGHTED_OFFSET))(arg, nullptr);
		}

		UICamera* FindCameraForLayer(::System::Int32 arg)
		{
			return ((UICamera*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_FINDCAMERAFORLAYER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDirection(::UnityEngine::KeyCode* arg, ::UnityEngine::KeyCode* arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::KeyCode*, ::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GETDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetDirection(::UnityEngine::KeyCode* arg, ::UnityEngine::KeyCode* arg2, ::UnityEngine::KeyCode* arg3, ::UnityEngine::KeyCode* arg4)
		{
			return ((::System::Int32(*)(::UnityEngine::KeyCode*, ::UnityEngine::KeyCode*, ::UnityEngine::KeyCode*, ::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GETDIRECTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 GetDirection(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_GETDIRECTION_OFFSET))(str, nullptr);
		}

		::System::Void Notify(::UnityEngine::GameObject* arg, ::System::String* str, ::System::Object* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_NOTIFY_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_START_OFFSET))(nullptr);
		}

		::System::Void StartIgnoring()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_STARTIGNORING_OFFSET))(nullptr);
		}

		::System::Void StopIgnoring()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_STOPIGNORING_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void ProcessEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_PROCESSEVENTS_OFFSET))(nullptr);
		}

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessMouse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_PROCESSMOUSE_OFFSET))(nullptr);
		}

		::System::Void ProcessTouches()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_PROCESSTOUCHES_OFFSET))(nullptr);
		}

		::System::Void ProcessFakeTouches()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_PROCESSFAKETOUCHES_OFFSET))(nullptr);
		}

		::System::Void ProcessOthers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_PROCESSOTHERS_OFFSET))(nullptr);
		}

		::System::Void ProcessPress(::System::Boolean arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_PROCESSPRESS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ProcessRelease(::System::Boolean arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_PROCESSRELEASE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasCollider(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_HASCOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessTouch(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_PROCESSTOUCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CancelNextTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_CANCELNEXTTOOLTIP_OFFSET))(nullptr);
		}

		::System::Boolean ShowTooltip(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_SHOWTOOLTIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HideTooltip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_HIDETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void ResetTooltip(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_RESETTOOLTIP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMERA_.CCTOR_OFFSET))(nullptr);
		}

	};

