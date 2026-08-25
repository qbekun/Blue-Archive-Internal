#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class NameAndParameters; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E838E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9E838F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x9E83900)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x9E83910)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E83930)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x9E83B10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x9E83BD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSENAME_OFFSET UNITYSDK_OFFSET(0x9E84140)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSE_OFFSET UNITYSDK_OFFSET(0x9E841D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSENAMEANDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9E83DC0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int NameAndParameters_TypeDefinitionIndex = 28933;

	class NameAndParameters : public Il2CppObject
	{
	public:
		::System::String* _name_k__BackingField; // 0x10
		Il2CppObject* _parameters_k__BackingField; // 0x18

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_SET_NAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_parameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_parameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_SET_PARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* ParseMultiple(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSEMULTIPLE_OFFSET))(str, nullptr);
		}

		::System::Boolean ParseMultiple(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSEMULTIPLE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ParseName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSENAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::NameAndParameters* Parse(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::Utilities::NameAndParameters*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSE_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::NameAndParameters* ParseNameAndParameters(::System::String* str, int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::NameAndParameters*(*)(::System::String*, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSENAMEANDPARAMETERS_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

