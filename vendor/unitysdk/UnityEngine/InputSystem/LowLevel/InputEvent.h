#pragma once
#include "../../../unitysdk.h"

namespace UnityEngineInternal::Input { class NativeInputEvent; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventBuffer&; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F57EC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9F58150)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F56F00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x9F58180)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x9F581D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9F581F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GETNEXTINMEMORYCHECKED_OFFSET UNITYSDK_OFFSET(0x9F58200)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x9F583F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9F58400)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x9F58410)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9F58170)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F58420)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F58160)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GETNEXTINMEMORY_OFFSET UNITYSDK_OFFSET(0x9F58480)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x9F584A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F584F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F58500)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F57820)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x9F585A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEvent_TypeDefinitionIndex = 28781;

	class InputEvent : public Il2CppObject
	{
	public:
		::System::UInt32 kHandledMask; // 0x0
		::System::UInt32 kIdMask; // 0x0
		::System::Int32 kBaseEventSize; // 0x0
		::System::Int32 InvalidEventId; // 0x0
		::System::Int32 kAlignment; // 0x0
		::UnityEngineInternal::Input::NativeInputEvent* m_Event; // 0x10

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_eventId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_EVENTID_OFFSET))(nullptr);
		}

		::System::UInt32 get_sizeInBytes()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_SIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_handled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_HANDLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_eventId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_EVENTID_OFFSET))(arg, nullptr);
		}

		::System::Object** GetNextInMemoryChecked(::System::Object** arg, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&* arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GETNEXTINMEMORYCHECKED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_handled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_HANDLED_OFFSET))(nullptr);
		}

		::System::Void set_deviceId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_DEVICEID_OFFSET))(arg, nullptr);
		}

		::System::Double get_internalTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_INTERNALTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_deviceId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Object** GetNextInMemory(::System::Object** arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GETNEXTINMEMORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_time(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_type(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_sizeInBytes(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_SIZEINBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::Utilities::FourCC* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::System::Int32, ::System::Int32, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_internalTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_INTERNALTIME_OFFSET))(arg, nullptr);
		}

	};
}

