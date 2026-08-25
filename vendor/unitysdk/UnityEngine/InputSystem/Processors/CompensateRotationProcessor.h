#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68310)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_GET_CACHINGPOLICY_OFFSET UNITYSDK_OFFSET(0x9F68350)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F68360)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F68390)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int CompensateRotationProcessor_TypeDefinitionIndex = 28834;

	class CompensateRotationProcessor : public <OnState>d__4
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		CachingPolicy* get_cachingPolicy()
		{
			return (return (CachingPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_GET_CACHINGPOLICY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* Process(::UnityEngine::Quaternion* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

	};
}

