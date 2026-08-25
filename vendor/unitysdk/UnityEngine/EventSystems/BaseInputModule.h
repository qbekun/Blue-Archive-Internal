#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class BaseInput; }
namespace UnityEngine::EventSystems { class RaycastResult; }
namespace UnityEngine::EventSystems { class MoveDirection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_SENDPOINTERHOVERTOPARENT_OFFSET UNITYSDK_OFFSET(0xA495980)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_SENDPOINTERHOVERTOPARENT_OFFSET UNITYSDK_OFFSET(0xA495990)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUT_OFFSET UNITYSDK_OFFSET(0xA4959A0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA495BA0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_INPUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA495BB0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_EVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA495BC0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA495BD0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA495C30)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_PROCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDFIRSTRAYCAST_OFFSET UNITYSDK_OFFSET(0xA495C50)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA495D40)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA495DB0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDCOMMONROOT_OFFSET UNITYSDK_OFFSET(0xA495E10)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_HANDLEPOINTEREXITANDENTER_OFFSET UNITYSDK_OFFSET(0xA495FE0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETAXISEVENTDATA_OFFSET UNITYSDK_OFFSET(0xA496CF0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETBASEEVENTDATA_OFFSET UNITYSDK_OFFSET(0xA496E80)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA496F20)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0xA496F30)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DEACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0xA496F70)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0xA496F80)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_UPDATEMODULE_OFFSET UNITYSDK_OFFSET(0xA496F90)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISMODULESUPPORTED_OFFSET UNITYSDK_OFFSET(0xA496FA0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_CONVERTUITOOLKITPOINTERID_OFFSET UNITYSDK_OFFSET(0xA496FB0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA497040)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseInputModule_TypeDefinitionIndex = 34924;

	class BaseInputModule : public Il2CppObject
	{
	public:
		Il2CppObject* m_RaycastResultCache; // 0x18
		::System::Boolean m_SendPointerHoverToParent; // 0x20
		::UnityEngine::EventSystems::AxisEventData* m_AxisEventData; // 0x28
		::UnityEngine::EventSystems::EventSystem* m_EventSystem; // 0x30
		::UnityEngine::EventSystems::BaseEventData* m_BaseEventData; // 0x38
		::UnityEngine::EventSystems::BaseInput* m_InputOverride; // 0x40
		::UnityEngine::EventSystems::BaseInput* m_DefaultInput; // 0x48

		::System::Boolean get_sendPointerHoverToParent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_SENDPOINTERHOVERTOPARENT_OFFSET))(nullptr);
		}

		::System::Void set_sendPointerHoverToParent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_SENDPOINTERHOVERTOPARENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::BaseInput* get_input()
		{
			return (return (::UnityEngine::EventSystems::BaseInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUT_OFFSET))(nullptr);
		}

		::UnityEngine::EventSystems::BaseInput* get_inputOverride()
		{
			return (return (::UnityEngine::EventSystems::BaseInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUTOVERRIDE_OFFSET))(nullptr);
		}

		::System::Void set_inputOverride(::UnityEngine::EventSystems::BaseInput* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseInput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_INPUTOVERRIDE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::EventSystem* get_eventSystem()
		{
			return (return (::UnityEngine::EventSystems::EventSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_EVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Process()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_PROCESS_OFFSET))(nullptr);
		}

		::UnityEngine::EventSystems::RaycastResult* FindFirstRaycast(Il2CppObject* arg)
		{
			return (return (::UnityEngine::EventSystems::RaycastResult*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDFIRSTRAYCAST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::MoveDirection* DetermineMoveDirection(::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::EventSystems::MoveDirection*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::EventSystems::MoveDirection* DetermineMoveDirection(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::EventSystems::MoveDirection*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* FindCommonRoot(::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDCOMMONROOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* arg, ::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_HANDLEPOINTEREXITANDENTER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::EventSystems::AxisEventData* GetAxisEventData(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::EventSystems::AxisEventData*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETAXISEVENTDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::EventSystems::BaseEventData* GetBaseEventData()
		{
			return (return (::UnityEngine::EventSystems::BaseEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETBASEEVENTDATA_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldActivateModule()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET))(nullptr);
		}

		::System::Void DeactivateModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DEACTIVATEMODULE_OFFSET))(nullptr);
		}

		::System::Void ActivateModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ACTIVATEMODULE_OFFSET))(nullptr);
		}

		::System::Void UpdateModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_UPDATEMODULE_OFFSET))(nullptr);
		}

		::System::Boolean IsModuleSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISMODULESUPPORTED_OFFSET))(nullptr);
		}

		::System::Int32 ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_CONVERTUITOOLKITPOINTERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_.CTOR_OFFSET))(nullptr);
		}

	};
}

