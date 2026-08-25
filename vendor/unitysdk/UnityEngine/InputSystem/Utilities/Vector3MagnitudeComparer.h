#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR3MAGNITUDECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9E7E690)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Vector3MagnitudeComparer_TypeDefinitionIndex = 28913;

	class Vector3MagnitudeComparer : public Il2CppObject
	{
	public:
		::System::Int32 Compare(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR3MAGNITUDECOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

