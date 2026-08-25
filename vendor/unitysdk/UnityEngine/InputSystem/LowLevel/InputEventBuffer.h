#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace Unity::Collections { class Allocator; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventBuffer; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_EVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9F585B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F585C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_CAPACITYINBYTES_OFFSET UNITYSDK_OFFSET(0x9F585D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9F58610)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_BUFFERPTR_OFFSET UNITYSDK_OFFSET(0x9F58620)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F58680)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F58890)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_APPENDEVENT_OFFSET UNITYSDK_OFFSET(0x9F589B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ALLOCATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F58A40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9F58350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x9F58D30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ADVANCETONEXTEVENT_OFFSET UNITYSDK_OFFSET(0x9F58D50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F58DF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F58EF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F58F90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CLONE_OFFSET UNITYSDK_OFFSET(0x9F58FF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9F590F0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventBuffer_TypeDefinitionIndex = 28783;

	class InputEventBuffer : public Il2CppObject
	{
	public:
		::System::Int64 BufferSizeUnknown; // 0x0
		Il2CppObject* m_Buffer; // 0x10
		::System::Int64 m_SizeInBytes; // 0x20
		::System::Int32 m_EventCount; // 0x28
		::System::Boolean m_WeOwnTheBuffer; // 0x2C

		::System::Int32 get_eventCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_EVENTCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_sizeInBytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_SIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_capacityInBytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_CAPACITYINBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* get_data()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_DATA_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* get_bufferPtr()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_BUFFERPTR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AppendEvent(::System::Object** arg, ::System::Int32 arg, ::Unity::Collections::Allocator* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_APPENDEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object** AllocateEvent(::System::Int32 arg, ::System::Int32 arg, ::Unity::Collections::Allocator* arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::System::Int32, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ALLOCATEEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Contains(::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Void AdvanceToNextEvent(::System::Object*&* arg, ::System::Object*&* arg, int32_t&* arg, int32_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*&*, ::System::Object*&*, int32_t&*, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ADVANCETONEXTEVENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_DISPOSE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventBuffer* Clone()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CLONE_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

	};
}

