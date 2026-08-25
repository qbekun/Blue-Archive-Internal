#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class MoveDirection; }
namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEDIR_OFFSET UNITYSDK_OFFSET(0xA48F5F0)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEDIR_OFFSET UNITYSDK_OFFSET(0xA48F600)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xA48F610)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xA48F620)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48F630)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int AxisEventData_TypeDefinitionIndex = 34888;

	class AxisEventData : public ::TriInspector::ListDrawerSettingsAttribute
	{
	public:
		::UnityEngine::Vector2* _moveVector_k__BackingField; // 0x20
		::UnityEngine::EventSystems::MoveDirection* _moveDir_k__BackingField; // 0x28

		::UnityEngine::EventSystems::MoveDirection* get_moveDir()
		{
			return (return (::UnityEngine::EventSystems::MoveDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEDIR_OFFSET))(nullptr);
		}

		::System::Void set_moveDir(::UnityEngine::EventSystems::MoveDirection* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::MoveDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEDIR_OFFSET))(arg, nullptr);
		}

		::System::Void set_moveVector(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEVECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_moveVector()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEVECTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::EventSystems::EventSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

