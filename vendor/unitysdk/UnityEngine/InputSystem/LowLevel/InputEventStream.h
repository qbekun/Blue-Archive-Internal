#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventBuffer; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventBuffer&; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x9F59D50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x9F59D60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9F59EC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_CURRENTEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9F5A090)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_ADVANCE_OFFSET UNITYSDK_OFFSET(0x9F5A0B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_REMAININGEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9F5A1A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMBYTESRETAINEDINBUFFER_OFFSET UNITYSDK_OFFSET(0x9F5A1B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F5A200)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_PEEK_OFFSET UNITYSDK_OFFSET(0x9F5A290)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLEANUPAFTEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x9F5A2E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMEVENTSRETAINEDINBUFFER_OFFSET UNITYSDK_OFFSET(0x9F5A380)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventStream_TypeDefinitionIndex = 28788;

	class InputEventStream : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer* m_NativeBuffer; // 0x10
		::System::Object** m_CurrentNativeEventReadPtr; // 0x30
		::System::Object** m_CurrentNativeEventWritePtr; // 0x38
		::System::Int32 m_RemainingNativeEventCount; // 0x40
		::System::Int32 m_MaxAppendedEvents; // 0x44
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer* m_AppendBuffer; // 0x48
		::System::Object** m_CurrentAppendEventReadPtr; // 0x68
		::System::Object** m_CurrentAppendEventWritePtr; // 0x70
		::System::Int32 m_RemainingAppendEventCount; // 0x78
		::System::Int32 m_NumEventsRetainedInBuffer; // 0x7C
		::System::Boolean m_IsOpen; // 0x80

		::System::Boolean get_isOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void Close(::UnityEngine::InputSystem::LowLevel::InputEventBuffer&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Object** get_currentEventPtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_CURRENTEVENTPTR_OFFSET))(nullptr);
		}

		::System::Object** Advance(::System::Boolean arg)
		{
			return (return (::System::Object**(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_ADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_remainingEventCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_REMAININGEVENTCOUNT_OFFSET))(nullptr);
		}

		::System::UInt32 get_numBytesRetainedInBuffer()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMBYTESRETAINEDINBUFFER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventBuffer&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** Peek()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_PEEK_OFFSET))(nullptr);
		}

		::System::Void CleanUpAfterException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLEANUPAFTEREXCEPTION_OFFSET))(nullptr);
		}

		::System::Int32 get_numEventsRetainedInBuffer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMEVENTSRETAINEDINBUFFER_OFFSET))(nullptr);
		}

	};
}

