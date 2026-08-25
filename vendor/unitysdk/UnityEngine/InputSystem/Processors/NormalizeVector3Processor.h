#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F68D50)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F68E30)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68E60)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeVector3Processor_TypeDefinitionIndex = 28840;

	class NormalizeVector3Processor : public ::MX::MinigameCCG::Procedures::GetEntityCollectionCount
	{
	public:
		::UnityEngine::Vector3* Process(::UnityEngine::Vector3* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

