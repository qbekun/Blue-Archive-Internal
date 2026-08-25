#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class IEventHandler; }

#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GET_RELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_SET_RELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_SET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GET_ISFOCUSDELEGATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_SET_ISFOCUSDELEGATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusEventBase`1_TypeDefinitionIndex = 30473;

	class FocusEventBase`1 : public EchelonStatusFlag
	{
	public:
		::UnityEngine::UIElements::Focusable* _relatedTarget_k__BackingField; // 0x0
		::UnityEngine::UIElements::FocusChangeDirection* _direction_k__BackingField; // 0x0
		::UnityEngine::UIElements::FocusController* _focusController_k__BackingField; // 0x0
		::System::Boolean _IsFocusDelegated_k__BackingField; // 0x0

		::UnityEngine::UIElements::Focusable* get_relatedTarget()
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GET_RELATEDTARGET_OFFSET))(nullptr);
		}

		::System::Void set_relatedTarget(::UnityEngine::UIElements::Focusable* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_SET_RELATEDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::FocusChangeDirection* get_direction()
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_direction(::UnityEngine::UIElements::FocusChangeDirection* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusChangeDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return (return (::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GET_FOCUSCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_focusController(::UnityEngine::UIElements::FocusController* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_SET_FOCUSCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFocusDelegated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GET_ISFOCUSDELEGATED_OFFSET))(nullptr);
		}

		::System::Void set_IsFocusDelegated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_SET_ISFOCUSDELEGATED_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_LOCALINIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::IEventHandler* arg, ::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg, ::UnityEngine::UIElements::FocusController* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IEventHandler*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::FocusController*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_GETPOOLED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

