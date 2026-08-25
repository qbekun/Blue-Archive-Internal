#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseRaycaster; }

#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_REMOVERAYCASTERS_OFFSET UNITYSDK_OFFSET(0xA49CB10)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA49CC00)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_ADDRAYCASTER_OFFSET UNITYSDK_OFFSET(0xA49CC90)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_GETRAYCASTERS_OFFSET UNITYSDK_OFFSET(0xA49CDD0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int RaycasterManager_TypeDefinitionIndex = 34933;

	class RaycasterManager : public Il2CppObject
	{
	public:
		Il2CppObject* s_Raycasters; // 0x0

		::System::Void RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_REMOVERAYCASTERS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_ADDRAYCASTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRaycasters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_GETRAYCASTERS_OFFSET))(nullptr);
		}

	};
}

