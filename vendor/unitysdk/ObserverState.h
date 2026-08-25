#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define OBSERVERSTATE__.CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x9F59470)
#define OBSERVERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F593D0)

	inline static constexpr unsigned int ObserverState_TypeDefinitionIndex = 28784;

	class ObserverState : public Il2CppObject
	{
	public:
		Il2CppObject* observers; // 0x10
		Il2CppObject* onEventDelegate; // 0x28

		::System::Void _.ctor_b__2_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + OBSERVERSTATE__.CTOR_B__2_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};

