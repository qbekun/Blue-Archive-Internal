#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventTrace; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr&; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_FRAMEMARKEREVENT_OFFSET UNITYSDK_OFFSET(0x9F5A390)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9F5A3D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9F5A3E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9F5A3F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_RECORDFRAMEMARKERS_OFFSET UNITYSDK_OFFSET(0x9F5A400)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_RECORDFRAMEMARKERS_OFFSET UNITYSDK_OFFSET(0x9F5A410)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_EVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9F5A510)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_TOTALEVENTSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F5A520)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ALLOCATEDSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F5A530)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_MAXSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F5A560)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_DEVICEINFOS_OFFSET UNITYSDK_OFFSET(0x9F5A570)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ONFILTEREVENT_OFFSET UNITYSDK_OFFSET(0x9F5A5C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_ONFILTEREVENT_OFFSET UNITYSDK_OFFSET(0x9F5A5D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ADD_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9F5A5E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REMOVE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9F5A630)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F5A680)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F5A760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_WRITETO_OFFSET UNITYSDK_OFFSET(0x9F5A7D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_WRITETO_OFFSET UNITYSDK_OFFSET(0x9F5A990)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_READFROM_OFFSET UNITYSDK_OFFSET(0x9F5B1E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_READFROM_OFFSET UNITYSDK_OFFSET(0x9F5B3A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_LOADFROM_OFFSET UNITYSDK_OFFSET(0x9F5BC00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_LOADFROM_OFFSET UNITYSDK_OFFSET(0x9F5BDE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAY_OFFSET UNITYSDK_OFFSET(0x9F5BF20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_RESIZE_OFFSET UNITYSDK_OFFSET(0x9F5C080)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F5C450)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENABLE_OFFSET UNITYSDK_OFFSET(0x9F5C480)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DISABLE_OFFSET UNITYSDK_OFFSET(0x9F5BF80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GETNEXTEVENT_OFFSET UNITYSDK_OFFSET(0x9F5C3B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F5B180)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F5C630)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F5C690)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFER_OFFSET UNITYSDK_OFFSET(0x9F5A550)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFER_OFFSET UNITYSDK_OFFSET(0x9F5BBD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFERHEAD_OFFSET UNITYSDK_OFFSET(0x9F5C3A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFERHEAD_OFFSET UNITYSDK_OFFSET(0x9F5BBE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFERTAIL_OFFSET UNITYSDK_OFFSET(0x9F5C620)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFERTAIL_OFFSET UNITYSDK_OFFSET(0x9F5BBF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x9F5C5F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_RELEASE_OFFSET UNITYSDK_OFFSET(0x9F5C700)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9F5C760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ONINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x9F5C8B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_KFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x9F5B140)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F5CE90)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventTrace_TypeDefinitionIndex = 28795;

	class InputEventTrace : public Il2CppObject
	{
	public:
		::System::Int32 kDefaultBufferSize; // 0x0
		::System::Int32 m_ChangeCounter; // 0x10
		::System::Boolean m_Enabled; // 0x14
		Il2CppObject* m_OnFilterEvent; // 0x18
		::System::Int32 m_DeviceId; // 0x20
		Il2CppObject* m_EventListeners; // 0x28
		::System::Int64 m_EventBufferSize; // 0x78
		::System::Int64 m_MaxEventBufferSize; // 0x80
		::System::Int64 m_GrowIncrementSize; // 0x88
		::System::Int64 m_EventCount; // 0x90
		::System::Int64 m_EventSizeInBytes; // 0x98
		::System::UInt64 m_EventBufferStorage; // 0xA0
		::System::UInt64 m_EventBufferHeadStorage; // 0xA8
		::System::UInt64 m_EventBufferTailStorage; // 0xB0
		::System::Boolean m_HasWrapped; // 0xB8
		::System::Boolean m_RecordFrameMarkers; // 0xB9
		::Il2CppArray<::System::Object*>* m_DeviceInfos; // 0xC0
		::System::Int32 kFileVersion; // 0x0

		::UnityEngine::InputSystem::Utilities::FourCC* get_FrameMarkerEvent()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_FRAMEMARKEREVENT_OFFSET))(nullptr);
		}

		::System::Int32 get_deviceId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::Void set_deviceId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_DEVICEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_recordFrameMarkers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_RECORDFRAMEMARKERS_OFFSET))(nullptr);
		}

		::System::Void set_recordFrameMarkers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_RECORDFRAMEMARKERS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_eventCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_EVENTCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_totalEventSizeInBytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_TOTALEVENTSIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_allocatedSizeInBytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ALLOCATEDSIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_maxSizeInBytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_MAXSIZEINBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* get_deviceInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_DEVICEINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_onFilterEvent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ONFILTEREVENT_OFFSET))(nullptr);
		}

		::System::Void set_onFilterEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_ONFILTEREVENT_OFFSET))(arg, nullptr);
		}

		::System::Void add_onEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ADD_ONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REMOVE_ONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputDevice* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteTo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_WRITETO_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void ReadFrom(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_READFROM_OFFSET))(str, nullptr);
		}

		::System::Void ReadFrom(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_READFROM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace* LoadFrom(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventTrace*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_LOADFROM_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace* LoadFrom(::System::IO::Stream* arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventTrace*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_LOADFROM_OFFSET))(arg, nullptr);
		}

		ReplayController* Replay()
		{
			return (return (ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAY_OFFSET))(nullptr);
		}

		::System::Boolean Resize(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_RESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENABLE_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DISABLE_OFFSET))(nullptr);
		}

		::System::Boolean GetNextEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GETNEXTEVENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Object** get_m_EventBuffer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFER_OFFSET))(nullptr);
		}

		::System::Void set_m_EventBuffer(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Object** get_m_EventBufferHead()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFERHEAD_OFFSET))(nullptr);
		}

		::System::Void set_m_EventBufferHead(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFERHEAD_OFFSET))(arg, nullptr);
		}

		::System::Object** get_m_EventBufferTail()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFERTAIL_OFFSET))(nullptr);
		}

		::System::Void set_m_EventBufferTail(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFERTAIL_OFFSET))(arg, nullptr);
		}

		::System::Void Allocate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ALLOCATE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void OnBeforeUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ONBEFOREUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnInputEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ONINPUTEVENT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_kFileFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_KFILEFORMAT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

