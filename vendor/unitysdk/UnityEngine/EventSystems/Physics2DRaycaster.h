#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA49D330)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49E210)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int Physics2DRaycaster_TypeDefinitionIndex = 34935;

	class Physics2DRaycaster : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Hits; // 0x40

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

