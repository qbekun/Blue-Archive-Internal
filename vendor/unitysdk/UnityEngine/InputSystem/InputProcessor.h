#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class TypeTable; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GET_CACHINGPOLICY_OFFSET UNITYSDK_OFFSET(0x9EA4F90)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EA4FA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_PROCESSASOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GETVALUETYPEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x9EA4FB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputProcessor_TypeDefinitionIndex = 28482;

	class InputProcessor : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::TypeTable* s_Processors; // 0x0

		CachingPolicy* get_cachingPolicy()
		{
			return (return (CachingPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GET_CACHINGPOLICY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* ProcessAsObject(::System::Object* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_PROCESSASOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Process(::System::Object** arg, ::System::Int32 arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_PROCESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* GetValueTypeFromType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GETVALUETYPEFROMTYPE_OFFSET))(arg, nullptr);
		}

	};
}

