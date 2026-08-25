#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_GET_USED_OFFSET UNITYSDK_OFFSET(0xA48F6D0)
#define UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48F6E0)
#define UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_USE_OFFSET UNITYSDK_OFFSET(0xA48F6F0)
#define UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA48F700)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int AbstractEventData_TypeDefinitionIndex = 34889;

	class AbstractEventData : public Il2CppObject
	{
	public:
		::System::Boolean m_Used; // 0x10

		::System::Boolean get_used()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_GET_USED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Use()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_USE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_RESET_OFFSET))(nullptr);
		}

	};
}

