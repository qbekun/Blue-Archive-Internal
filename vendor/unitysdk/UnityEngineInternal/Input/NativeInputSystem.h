#pragma once
#include "../../unitysdk.h"

namespace UnityEngineInternal::Input { class NativeUpdateCallback; }
namespace UnityEngineInternal::Input { class NativeInputUpdateType; }

#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_ONDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0xA292F90)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_ONDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0xA292FE0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2930C0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0xA293100)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYUPDATE_OFFSET UNITYSDK_OFFSET(0xA293190)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0xA293240)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SHOULDRUNUPDATE_OFFSET UNITYSDK_OFFSET(0xA2932E0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_HASDEVICEDISCOVEREDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA293080)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xA293360)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_CURRENTTIMEOFFSETTOREALTIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0xA2933A0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_ALLOCATEDEVICEID_OFFSET UNITYSDK_OFFSET(0xA2933E0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_QUEUEINPUTEVENT_OFFSET UNITYSDK_OFFSET(0xA293420)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_IOCTL_OFFSET UNITYSDK_OFFSET(0xA293460)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SETPOLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0xA2934B0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA293500)

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputSystem_TypeDefinitionIndex = 38008;

	class NativeInputSystem : public Il2CppObject
	{
	public:
		::UnityEngineInternal::Input::NativeUpdateCallback* onUpdate; // 0x0
		Il2CppObject* onBeforeUpdate; // 0x8
		Il2CppObject* onShouldRunUpdate; // 0x10
		Il2CppObject* s_OnDeviceDiscoveredCallback; // 0x18

		Il2CppObject* get_onDeviceDiscovered()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_ONDEVICEDISCOVERED_OFFSET))(nullptr);
		}

		::System::Void set_onDeviceDiscovered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_ONDEVICEDISCOVERED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYBEFOREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyDeviceDiscovered(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYDEVICEDISCOVERED_OFFSET))(arg, str, nullptr);
		}

		::System::Void ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SHOULDRUNUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_hasDeviceDiscoveredCallback(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_HASDEVICEDISCOVEREDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Double get_currentTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_CURRENTTIME_OFFSET))(nullptr);
		}

		::System::Double get_currentTimeOffsetToRealtimeSinceStartup()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_CURRENTTIMEOFFSETTOREALTIMESINCESTARTUP_OFFSET))(nullptr);
		}

		::System::Int32 AllocateDeviceId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_ALLOCATEDEVICEID_OFFSET))(nullptr);
		}

		::System::Void QueueInputEvent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_QUEUEINPUTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 IOCTL(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_IOCTL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPollingFrequency(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SETPOLLINGFREQUENCY_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::UnityEngineInternal::Input::NativeInputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

