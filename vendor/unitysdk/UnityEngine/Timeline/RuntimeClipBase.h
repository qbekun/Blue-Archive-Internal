#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0xA1A5FC0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A5F80)
#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0xA1A6080)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeClipBase_TypeDefinitionIndex = 36287;

	class RuntimeClipBase : public Il2CppObject
	{
	public:
		::System::Int64 get_intervalStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALSTART_OFFSET))(nullptr);
		}

		::System::Double get_start()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_intervalEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALEND_OFFSET))(nullptr);
		}

	};
}

