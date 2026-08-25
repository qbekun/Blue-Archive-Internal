#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem { class Pen; }
namespace UnityEngine::InputSystem { class PenButton; }

#define UNITYENGINE_INPUTSYSTEM_PEN_GET_FOURTHBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACCA0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_INRANGE_OFFSET UNITYSDK_OFFSET(0x9EACCB0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_ERASER_OFFSET UNITYSDK_OFFSET(0x9EACCC0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_ERASER_OFFSET UNITYSDK_OFFSET(0x9EACCD0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x9EACCF0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TIP_OFFSET UNITYSDK_OFFSET(0x9EACD10)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_FIRSTBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACD30)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_THIRDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACD40)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_SECONDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACD50)
#define UNITYENGINE_INPUTSYSTEM_PEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EACD70)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_FIRSTBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACD80)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EACDA0)
#define UNITYENGINE_INPUTSYSTEM_PEN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9EACDF0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_THIRDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACE90)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TIP_OFFSET UNITYSDK_OFFSET(0x9EACEB0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EACEC0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_FOURTHBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACF00)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TILT_OFFSET UNITYSDK_OFFSET(0x9EACF20)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_SECONDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACF40)
#define UNITYENGINE_INPUTSYSTEM_PEN_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9EACF50)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_INRANGE_OFFSET UNITYSDK_OFFSET(0x9EAD1A0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9EAD1C0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x9EAD2C0)
#define UNITYENGINE_INPUTSYSTEM_PEN_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9EAD2D0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TILT_OFFSET UNITYSDK_OFFSET(0x9EAD420)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Pen_TypeDefinitionIndex = 28494;

	class Pen : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _tip_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _eraser_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _firstBarrelButton_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondBarrelButton_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _thirdBarrelButton_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _fourthBarrelButton_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _inRange_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::Vector2Control* _tilt_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Pen* _current_k__BackingField; // 0x0

		::UnityEngine::InputSystem::Controls::ButtonControl* get_fourthBarrelButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_FOURTHBARRELBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_inRange()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_INRANGE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_eraser()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_ERASER_OFFSET))(nullptr);
		}

		::System::Void set_eraser(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_ERASER_OFFSET))(arg, nullptr);
		}

		::System::Void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TWIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_tip(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_firstBarrelButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_FIRSTBARRELBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thirdBarrelButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_THIRDBARRELBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_secondBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_SECONDBARRELBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_firstBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_FIRSTBARRELBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Pen* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Pen*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void set_thirdBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_THIRDBARRELBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_tip()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TIP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Pen* get_current()
		{
			return (return (::UnityEngine::InputSystem::Pen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_fourthBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_FOURTHBARRELBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_tilt(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TILT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondBarrelButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_SECONDBARRELBUTTON_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_inRange(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_INRANGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::UnityEngine::InputSystem::PenButton* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::PenButton*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_twist()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TWIST_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_ONREMOVED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_tilt()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TILT_OFFSET))(nullptr);
		}

	};
}

