#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0xA1A7030)
#define UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0xA1A70F0)
#define UNITYENGINE_TIMELINE_SIGNALASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A71B0)
#define UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA1A71C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalAsset_TypeDefinitionIndex = 36296;

	class SignalAsset : public Il2CppObject
	{
	public:
		Il2CppObject* OnEnableCallback; // 0x0

		::System::Void add_OnEnableCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnEnableCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET))(nullptr);
		}

	};
}

