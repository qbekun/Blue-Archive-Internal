#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F596C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_VALID_OFFSET UNITYSDK_OFFSET(0x9F4BF80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x9F596D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x9F4FD40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F596F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_ID_OFFSET UNITYSDK_OFFSET(0x9F59710)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F4BF90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F59790)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9F597A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9F597B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TIME_OFFSET UNITYSDK_OFFSET(0x9F50210)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_TIME_OFFSET UNITYSDK_OFFSET(0x9F59820)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x9F598D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x9F598F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9F59960)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x9F524C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F599D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEOFFSET_OFFSET UNITYSDK_OFFSET(0x9F59AD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_ISA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_NEXT_OFFSET UNITYSDK_OFFSET(0x9F59BA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F59970)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOPOINTER_OFFSET UNITYSDK_OFFSET(0x9F59BD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F59BE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F59C50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F59D00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9F59D10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9F59D20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F58670)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROM_OFFSET UNITYSDK_OFFSET(0x9F59D30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F591C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROMINPUTEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9F59D40)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventPtr_TypeDefinitionIndex = 28787;

	class InputEventPtr : public Il2CppObject
	{
	public:
		::System::Object** m_EventPtr; // 0x10

		::System::Void .ctor(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_VALID_OFFSET))(nullptr);
		}

		::System::Boolean get_handled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_HANDLED_OFFSET))(nullptr);
		}

		::System::Void set_handled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_HANDLED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_ID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_sizeInBytes()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_SIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_deviceId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::Void set_deviceId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_DEVICEID_OFFSET))(arg, nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Double get_internalTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_INTERNALTIME_OFFSET))(nullptr);
		}

		::System::Void set_internalTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_INTERNALTIME_OFFSET))(arg, nullptr);
		}

		::System::Object** get_data()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DATA_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_stateFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEFORMAT_OFFSET))(nullptr);
		}

		::System::UInt32 get_stateSizeInBytes()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_stateOffset()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean IsA()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_ISA_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* Next()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_NEXT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Object** ToPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOPOINTER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* op_Implicit(::System::Object** arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* From(::System::Object** arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROM_OFFSET))(arg, nullptr);
		}

		::System::Object** op_Implicit(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Object** FromInputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROMINPUTEVENTPTR_OFFSET))(arg, nullptr);
		}

	};
}

