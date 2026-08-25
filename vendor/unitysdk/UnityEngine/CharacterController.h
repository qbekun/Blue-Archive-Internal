#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CollisionFlags; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0xA2A42B0)
#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A42F0)

namespace UnityEngine
{
	inline static constexpr unsigned int CharacterController_TypeDefinitionIndex = 37335;

	class CharacterController : public Il2CppObject
	{
	public:
		::UnityEngine::CollisionFlags* Move(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::CollisionFlags*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::CollisionFlags* Move_Injected(::UnityEngine::Vector3&* arg)
		{
			return (return (::UnityEngine::CollisionFlags*(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

