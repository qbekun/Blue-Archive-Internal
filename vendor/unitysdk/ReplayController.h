#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventTrace; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr&; }

#define REPLAYCONTROLLER_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x9F5D0B0)
#define REPLAYCONTROLLER_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0x9F5D0C0)
#define REPLAYCONTROLLER_SET_FINISHED_OFFSET UNITYSDK_OFFSET(0x9F5D0D0)
#define REPLAYCONTROLLER_GET_PAUSED_OFFSET UNITYSDK_OFFSET(0x9F5D0E0)
#define REPLAYCONTROLLER_SET_PAUSED_OFFSET UNITYSDK_OFFSET(0x9F5D0F0)
#define REPLAYCONTROLLER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F5D100)
#define REPLAYCONTROLLER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F5D110)
#define REPLAYCONTROLLER_GET_CREATEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F5D120)
#define REPLAYCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F5D170)
#define REPLAYCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F5D200)
#define REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_OFFSET UNITYSDK_OFFSET(0x9F5D520)
#define REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_OFFSET UNITYSDK_OFFSET(0x9F5D5C0)
#define REPLAYCONTROLLER_WITHALLDEVICESMAPPEDTONEWINSTANCES_OFFSET UNITYSDK_OFFSET(0x9F5D710)
#define REPLAYCONTROLLER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x9F5D720)
#define REPLAYCONTROLLER_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9F5D740)
#define REPLAYCONTROLLER_PLAYONEEVENT_OFFSET UNITYSDK_OFFSET(0x9F5D760)
#define REPLAYCONTROLLER_REWIND_OFFSET UNITYSDK_OFFSET(0x9F5DE20)
#define REPLAYCONTROLLER_PLAYALLFRAMESONEBYONE_OFFSET UNITYSDK_OFFSET(0x9F5DE70)
#define REPLAYCONTROLLER_PLAYALLEVENTS_OFFSET UNITYSDK_OFFSET(0x9F5DF10)
#define REPLAYCONTROLLER_PLAYALLEVENTSACCORDINGTOTIMESTAMPS_OFFSET UNITYSDK_OFFSET(0x9F5E010)
#define REPLAYCONTROLLER_ONBEGINFRAME_OFFSET UNITYSDK_OFFSET(0x9F5E2F0)
#define REPLAYCONTROLLER_FINISHED_OFFSET UNITYSDK_OFFSET(0x9F5E520)
#define REPLAYCONTROLLER_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x9F5DB70)
#define REPLAYCONTROLLER_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9F5D7F0)
#define REPLAYCONTROLLER_APPLYDEVICEMAPPING_OFFSET UNITYSDK_OFFSET(0x9F5E5E0)

	inline static constexpr unsigned int ReplayController_TypeDefinitionIndex = 28793;

	class ReplayController : public Il2CppObject
	{
	public:
		::System::Boolean _finished_k__BackingField; // 0x10
		::System::Boolean _paused_k__BackingField; // 0x11
		::System::Int32 _position_k__BackingField; // 0x14
		::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_EventTrace; // 0x18
		Enumerator* m_Enumerator; // 0x20
		Il2CppObject* m_DeviceIDMappings; // 0x28
		::System::Boolean m_CreateNewDevices; // 0x40
		Il2CppObject* m_CreatedDevices; // 0x48
		::System::Action* m_OnFinished; // 0x60
		Il2CppObject* m_OnEvent; // 0x68
		::System::Double m_StartTimeAsPerFirstEvent; // 0x70
		::System::Double m_StartTimeAsPerRuntime; // 0x78
		::System::Int32 m_AllEventsByTimeIndex; // 0x80
		Il2CppObject* m_AllEventsByTime; // 0x88

		::UnityEngine::InputSystem::LowLevel::InputEventTrace* get_trace()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventTrace*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_GET_TRACE_OFFSET))(nullptr);
		}

		::System::Boolean get_finished()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_GET_FINISHED_OFFSET))(nullptr);
		}

		::System::Void set_finished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_SET_FINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_paused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_GET_PAUSED_OFFSET))(nullptr);
		}

		::System::Void set_paused(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_SET_PAUSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_position()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_SET_POSITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_createdDevices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_GET_CREATEDDEVICES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventTrace*, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_DISPOSE_OFFSET))(nullptr);
		}

		ReplayController* WithDeviceMappedFromTo(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (ReplayController*(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_OFFSET))(arg, arg, nullptr);
		}

		ReplayController* WithDeviceMappedFromTo(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (ReplayController*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_OFFSET))(arg, arg, nullptr);
		}

		ReplayController* WithAllDevicesMappedToNewInstances()
		{
			return (return (ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_WITHALLDEVICESMAPPEDTONEWINSTANCES_OFFSET))(nullptr);
		}

		ReplayController* OnFinished(::System::Action* arg)
		{
			return (return (ReplayController*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_ONFINISHED_OFFSET))(arg, nullptr);
		}

		ReplayController* OnEvent(Il2CppObject* arg)
		{
			return (return (ReplayController*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_ONEVENT_OFFSET))(arg, nullptr);
		}

		ReplayController* PlayOneEvent()
		{
			return (return (ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_PLAYONEEVENT_OFFSET))(nullptr);
		}

		ReplayController* Rewind()
		{
			return (return (ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_REWIND_OFFSET))(nullptr);
		}

		ReplayController* PlayAllFramesOneByOne()
		{
			return (return (ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_PLAYALLFRAMESONEBYONE_OFFSET))(nullptr);
		}

		ReplayController* PlayAllEvents()
		{
			return (return (ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_PLAYALLEVENTS_OFFSET))(nullptr);
		}

		ReplayController* PlayAllEventsAccordingToTimestamps()
		{
			return (return (ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_PLAYALLEVENTSACCORDINGTOTIMESTAMPS_OFFSET))(nullptr);
		}

		::System::Void OnBeginFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_ONBEGINFRAME_OFFSET))(nullptr);
		}

		::System::Void Finished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_FINISHED_OFFSET))(nullptr);
		}

		::System::Void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_QUEUEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext(::System::Boolean arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&*, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_MOVENEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ApplyDeviceMapping(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYCONTROLLER_APPLYDEVICEMAPPING_OFFSET))(arg, nullptr);
		}

	};

