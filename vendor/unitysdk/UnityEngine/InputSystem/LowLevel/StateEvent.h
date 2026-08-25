#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEvent; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr&; }
namespace Unity::Collections { class Allocator; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F5EC00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9F5EC20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9F5EC30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F5EC40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GETEVENTSIZEWITHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x9F5EC50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROMUNCHECKED_OFFSET UNITYSDK_OFFSET(0x9F5ED90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x9F5EDA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROMDEFAULTSTATEFOR_OFFSET UNITYSDK_OFFSET(0x9F5F150)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x9F5EDC0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int StateEvent_TypeDefinitionIndex = 28797;

	class StateEvent : public Il2CppObject
	{
	public:
		::System::Int32 Type; // 0x0
		::System::Int32 kStateDataSizeToSubtract; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent* baseEvent; // 0x10
		::UnityEngine::InputSystem::Utilities::FourCC* stateFormat; // 0x24
		<stateData>e__FixedBuffer* stateData; // 0x28

		::System::UInt32 get_stateSizeInBytes()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_STATESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Object** get_state()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_STATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* ToEventPtr()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_TOEVENTPTR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		Il2CppObject* GetState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GETSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetState(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetEventSizeWithPayload()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GETEVENTSIZEWITHPAYLOAD_OFFSET))(nullptr);
		}

		::System::Object** From(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_OFFSET))(arg, nullptr);
		}

		::System::Object** FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROMUNCHECKED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* From(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&* arg, ::Unity::Collections::Allocator* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&*, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* FromDefaultStateFor(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&* arg, ::Unity::Collections::Allocator* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&*, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROMDEFAULTSTATEFOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* From(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&* arg, ::Unity::Collections::Allocator* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&*, ::Unity::Collections::Allocator*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

