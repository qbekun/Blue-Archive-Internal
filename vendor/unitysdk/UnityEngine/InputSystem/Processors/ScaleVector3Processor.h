#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F69080)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F690D0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F69100)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleVector3Processor_TypeDefinitionIndex = 28843;

	class ScaleVector3Processor : public ::MX::MinigameCCG::Procedures::GetEntityCollectionCount
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* Process(::UnityEngine::Vector3* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

