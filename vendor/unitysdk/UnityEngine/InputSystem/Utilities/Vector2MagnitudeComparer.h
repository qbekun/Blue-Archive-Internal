#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR2MAGNITUDECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9E7E630)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Vector2MagnitudeComparer_TypeDefinitionIndex = 28912;

	class Vector2MagnitudeComparer : public Il2CppObject
	{
	public:
		::System::Int32 Compare(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR2MAGNITUDECOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

