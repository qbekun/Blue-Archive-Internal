#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEvent; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem { class InputActionPhase; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9F56EB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GETEVENTSIZEWITHVALUESIZE_OFFSET UNITYSDK_OFFSET(0x9F56EC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_CONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x9F56ED0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9F56EE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F56EF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x9F56F10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_CONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x9F57040)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9F570B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F57120)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_INTERACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9F57160)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUEDATA_OFFSET UNITYSDK_OFFSET(0x9F57180)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_INTERACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9F57190)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x9F57210)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F57220)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STATEINDEX_OFFSET UNITYSDK_OFFSET(0x9F57260)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9F57270)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9F57280)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9F57290)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STATEINDEX_OFFSET UNITYSDK_OFFSET(0x9F572A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int ActionEvent_TypeDefinitionIndex = 28770;

	class ActionEvent : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputEvent* baseEvent; // 0x10
		::System::UInt16 m_ControlIndex; // 0x24
		::System::UInt16 m_BindingIndex; // 0x26
		::System::UInt16 m_InteractionIndex; // 0x28
		::System::Byte m_StateIndex; // 0x2A
		::System::Byte m_Phase; // 0x2B
		::System::Double m_StartTime; // 0x2C
		<m_ValueData>e__FixedBuffer* m_ValueData; // 0x34

		::System::Int32 get_bindingIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_BINDINGINDEX_OFFSET))(nullptr);
		}

		::System::Int32 GetEventSizeWithValueSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GETEVENTSIZEWITHVALUESIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_controlIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_CONTROLINDEX_OFFSET))(nullptr);
		}

		::System::Void set_startTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Object** From(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_FROM_OFFSET))(arg, nullptr);
		}

		::System::Void set_controlIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_CONTROLINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_bindingIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_BINDINGINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_interactionIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_INTERACTIONINDEX_OFFSET))(nullptr);
		}

		::System::Object** get_valueData()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUEDATA_OFFSET))(nullptr);
		}

		::System::Void set_interactionIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_INTERACTIONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_phase(::UnityEngine::InputSystem::InputActionPhase* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_PHASE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::System::Int32 get_stateIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STATEINDEX_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionPhase* get_phase()
		{
			return (return (::UnityEngine::InputSystem::InputActionPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_PHASE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* ToEventPtr()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_TOEVENTPTR_OFFSET))(nullptr);
		}

		::System::Double get_startTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_stateIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STATEINDEX_OFFSET))(arg, nullptr);
		}

	};
}

