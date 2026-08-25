#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_ITIMECONTROL_SETTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_ITIMECONTROL_ONCONTROLTIMESTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_ITIMECONTROL_ONCONTROLTIMESTART_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ITimeControl_TypeDefinitionIndex = 36308;

	class ITimeControl : public Il2CppObject
	{
	public:
		::System::Void SetTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ITIMECONTROL_SETTIME_OFFSET))(arg, nullptr);
		}

		::System::Void OnControlTimeStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ITIMECONTROL_ONCONTROLTIMESTOP_OFFSET))(nullptr);
		}

		::System::Void OnControlTimeStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ITIMECONTROL_ONCONTROLTIMESTART_OFFSET))(nullptr);
		}

	};
}

