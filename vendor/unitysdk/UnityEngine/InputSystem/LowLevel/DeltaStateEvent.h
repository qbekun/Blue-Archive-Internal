#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEvent; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr&; }
namespace Unity::Collections { class Allocator; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_DELTASTATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F57310)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_DELTASTATE_OFFSET UNITYSDK_OFFSET(0x9F57320)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F57330)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9F57340)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x9F57350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROMUNCHECKED_OFFSET UNITYSDK_OFFSET(0x9F57480)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x9F57490)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DeltaStateEvent_TypeDefinitionIndex = 28772;

	class DeltaStateEvent : public Il2CppObject
	{
	public:
		::System::Int32 Type; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent* baseEvent; // 0x10
		::UnityEngine::InputSystem::Utilities::FourCC* stateFormat; // 0x24
		::System::UInt32 stateOffset; // 0x28
		<stateData>e__FixedBuffer* stateData; // 0x2C

		::System::UInt32 get_deltaStateSizeInBytes()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_DELTASTATESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Object** get_deltaState()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_DELTASTATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* ToEventPtr()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_TOEVENTPTR_OFFSET))(nullptr);
		}

		::System::Object** From(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROM_OFFSET))(arg, nullptr);
		}

		::System::Object** FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROMUNCHECKED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* From(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&* arg, ::Unity::Collections::Allocator* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&*, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROM_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

