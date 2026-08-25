#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9F3EDA0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9F3F060)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9F3F5C0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_START_OFFSET UNITYSDK_OFFSET(0x9F3F680)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_BEGININTERACTION_OFFSET UNITYSDK_OFFSET(0x9F3EE40)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_MOVESTICK_OFFSET UNITYSDK_OFFSET(0x9F3F100)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ENDINTERACTION_OFFSET UNITYSDK_OFFSET(0x9F3F5D0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9F3FDB0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0x9F402C0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9F40380)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GETCAMERAFROMCANVAS_OFFSET UNITYSDK_OFFSET(0x9F40170)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x9F40410)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_DRAWGIZMOCIRCLE_OFFSET UNITYSDK_OFFSET(0x9F40800)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_UPDATEDYNAMICORIGINCLICKABLEAREA_OFFSET UNITYSDK_OFFSET(0x9F409A0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_MOVEMENTRANGE_OFFSET UNITYSDK_OFFSET(0x9F40A80)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_MOVEMENTRANGE_OFFSET UNITYSDK_OFFSET(0x9F40A90)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_DYNAMICORIGINRANGE_OFFSET UNITYSDK_OFFSET(0x9F40AA0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_DYNAMICORIGINRANGE_OFFSET UNITYSDK_OFFSET(0x9F40AB0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_USEISOLATEDINPUTACTIONS_OFFSET UNITYSDK_OFFSET(0x9F40AD0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_USEISOLATEDINPUTACTIONS_OFFSET UNITYSDK_OFFSET(0x9F40AE0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F40AF0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F40B00)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_BEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x9F40B10)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_BEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x9F40B20)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F40B30)

namespace UnityEngine::InputSystem::OnScreen
{
	inline static constexpr unsigned int OnScreenStick_TypeDefinitionIndex = 28655;

	class OnScreenStick : public Il2CppObject
	{
	public:
		::System::String* kDynamicOriginClickable; // 0x0
		::System::Single m_MovementRange; // 0x30
		::System::Single m_DynamicOriginRange; // 0x34
		::System::String* m_ControlPath; // 0x38
		Behaviour* m_Behaviour; // 0x40
		::System::Boolean m_UseIsolatedInputActions; // 0x44
		::UnityEngine::InputSystem::InputAction* m_PointerDownAction; // 0x48
		::UnityEngine::InputSystem::InputAction* m_PointerMoveAction; // 0x50
		::UnityEngine::Vector3* m_StartPos; // 0x58
		::UnityEngine::Vector2* m_PointerDownPos; // 0x64
		Il2CppObject* m_RaycastResults; // 0x70
		::UnityEngine::EventSystems::PointerEventData* m_PointerEventData; // 0x78

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_START_OFFSET))(nullptr);
		}

		::System::Void BeginInteraction(::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_BEGININTERACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MoveStick(::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_MOVESTICK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInteraction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ENDINTERACTION_OFFSET))(nullptr);
		}

		::System::Void OnPointerDown(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerMove(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* GetCameraFromCanvas()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GETCAMERAFROMCANVAS_OFFSET))(nullptr);
		}

		::System::Void OnDrawGizmosSelected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONDRAWGIZMOSSELECTED_OFFSET))(nullptr);
		}

		::System::Void DrawGizmoCircle(::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_DRAWGIZMOCIRCLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateDynamicOriginClickableArea()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_UPDATEDYNAMICORIGINCLICKABLEAREA_OFFSET))(nullptr);
		}

		::System::Single get_movementRange()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_MOVEMENTRANGE_OFFSET))(nullptr);
		}

		::System::Void set_movementRange(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_MOVEMENTRANGE_OFFSET))(arg, nullptr);
		}

		::System::Single get_dynamicOriginRange()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_DYNAMICORIGINRANGE_OFFSET))(nullptr);
		}

		::System::Void set_dynamicOriginRange(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_DYNAMICORIGINRANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useIsolatedInputActions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_USEISOLATEDINPUTACTIONS_OFFSET))(nullptr);
		}

		::System::Void set_useIsolatedInputActions(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_USEISOLATEDINPUTACTIONS_OFFSET))(arg, nullptr);
		}

		::System::String* get_controlPathInternal()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_CONTROLPATHINTERNAL_OFFSET))(nullptr);
		}

		::System::Void set_controlPathInternal(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_CONTROLPATHINTERNAL_OFFSET))(str, nullptr);
		}

		Behaviour* get_behaviour()
		{
			return (return (Behaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_BEHAVIOUR_OFFSET))(nullptr);
		}

		::System::Void set_behaviour(Behaviour* arg)
		{
			((::System::Void(*)(Behaviour*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_BEHAVIOUR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_.CTOR_OFFSET))(nullptr);
		}

	};
}

