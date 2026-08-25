#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68750)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F687A0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F68810)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int InvertVector3Processor_TypeDefinitionIndex = 28837;

	class InvertVector3Processor : public ::MX::MinigameCCG::Procedures::GetEntityCollectionCount
	{
	public:
		::System::Boolean invertX; // 0x10
		::System::Boolean invertY; // 0x11
		::System::Boolean invertZ; // 0x12

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* Process(::UnityEngine::Vector3* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

