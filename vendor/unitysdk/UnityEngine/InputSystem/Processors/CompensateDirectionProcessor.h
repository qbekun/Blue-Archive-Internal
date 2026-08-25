#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_GET_CACHINGPOLICY_OFFSET UNITYSDK_OFFSET(0x9F680A0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F680B0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F680F0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F682E0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int CompensateDirectionProcessor_TypeDefinitionIndex = 28833;

	class CompensateDirectionProcessor : public ::MX::MinigameCCG::Procedures::GetEntityCollectionCount
	{
	public:
		CachingPolicy* get_cachingPolicy()
		{
			return (return (CachingPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_GET_CACHINGPOLICY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* Process(::UnityEngine::Vector3* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

