#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::UI { class ExtendedPointerEventData; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::InputSystem::UI { class UIPointerType; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0x9F38270)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x9F38290)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x9F382A0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_WORLDORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F372A0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9F36450)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0x9F382B0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_WORLDORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F382C0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x9F37110)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x9F310C0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x9F37410)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F36490)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0x9F382E0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_COPYTOUCHORPENSTATEFROM_OFFSET UNITYSDK_OFFSET(0x9F37860)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9F38390)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x9F383A0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x9F383B0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x9F382F0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9F383D0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_ONFRAMEFINISHED_OFFSET UNITYSDK_OFFSET(0x9F37B60)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x9F38330)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9F38350)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0x9F38310)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int PointerModel_TypeDefinitionIndex = 28632;

	class PointerModel : public Il2CppObject
	{
	public:
		::System::Boolean changedThisFrame; // 0x10
		ButtonState* leftButton; // 0x18
		ButtonState* rightButton; // 0xB0
		ButtonState* middleButton; // 0x148
		::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData; // 0x1E0
		::UnityEngine::Vector2* m_ScreenPosition; // 0x1E8
		::UnityEngine::Vector2* m_ScrollDelta; // 0x1F0
		::UnityEngine::Vector3* m_WorldPosition; // 0x1F8
		::UnityEngine::Quaternion* m_WorldOrientation; // 0x204
		::System::Single m_Pressure; // 0x214
		::System::Single m_AzimuthAngle; // 0x218
		::System::Single m_AltitudeAngle; // 0x21C
		::System::Single m_Twist; // 0x220
		::UnityEngine::Vector2* m_Radius; // 0x224

		::System::Void set_altitudeAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_ALTITUDEANGLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_scrollDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_SCROLLDELTA_OFFSET))(nullptr);
		}

		::System::Single get_pressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_PRESSURE_OFFSET))(nullptr);
		}

		::System::Void set_worldOrientation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_WORLDORIENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_screenPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_SCREENPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_azimuthAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_AZIMUTHANGLE_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_worldOrientation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_WORLDORIENTATION_OFFSET))(nullptr);
		}

		::System::Void set_scrollDelta(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_SCROLLDELTA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::UI::UIPointerType* get_pointerType()
		{
			return (return (::UnityEngine::InputSystem::UI::UIPointerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_POINTERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_worldPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_WORLDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_altitudeAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_ALTITUDEANGLE_OFFSET))(nullptr);
		}

		::System::Void CopyTouchOrPenStateFrom(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_COPYTOUCHORPENSTATEFROM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_radius()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Single get_twist()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_TWIST_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_worldPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_WORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_pressure(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_PRESSURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_screenPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_SCREENPOSITION_OFFSET))(nullptr);
		}

		::System::Void OnFrameFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_ONFRAMEFINISHED_OFFSET))(nullptr);
		}

		::System::Void set_twist(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_TWIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_radius(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_azimuthAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_AZIMUTHANGLE_OFFSET))(arg, nullptr);
		}

	};
}

