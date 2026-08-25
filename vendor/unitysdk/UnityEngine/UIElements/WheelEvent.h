#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class WheelEvent; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_WHEELEVENT_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xA3E3540)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_SET_DELTA_OFFSET UNITYSDK_OFFSET(0xA3E3560)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3E3580)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3E3600)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E3660)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E36E0)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E3740)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int WheelEvent_TypeDefinitionIndex = 30499;

	class WheelEvent : public ::NPA::NXPPushPolicy
	{
	public:
		::UnityEngine::Vector3* _delta_k__BackingField; // 0xB8

		::UnityEngine::Vector3* get_delta()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_GET_DELTA_OFFSET))(nullptr);
		}

		::System::Void set_delta(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_SET_DELTA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::WheelEvent* GetPooled(::UnityEngine::Event* arg)
		{
			return (return (::UnityEngine::UIElements::WheelEvent*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::WheelEvent* GetPooled(::UnityEngine::Vector3* arg, ::UnityEngine::UIElements::IPointerEvent* arg)
		{
			return (return (::UnityEngine::UIElements::WheelEvent*(*)(::UnityEngine::Vector3*, ::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_GETPOOLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

