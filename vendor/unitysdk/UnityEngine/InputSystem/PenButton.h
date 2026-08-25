#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class PenButton; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PenButton_TypeDefinitionIndex = 28493;

	class PenButton : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::PenButton* Tip; // 0x0
		::UnityEngine::InputSystem::PenButton* Eraser; // 0x0
		::UnityEngine::InputSystem::PenButton* BarrelFirst; // 0x0
		::UnityEngine::InputSystem::PenButton* BarrelSecond; // 0x0
		::UnityEngine::InputSystem::PenButton* InRange; // 0x0
		::UnityEngine::InputSystem::PenButton* BarrelThird; // 0x0
		::UnityEngine::InputSystem::PenButton* BarrelFourth; // 0x0
		::UnityEngine::InputSystem::PenButton* Barrel1; // 0x0
		::UnityEngine::InputSystem::PenButton* Barrel2; // 0x0
		::UnityEngine::InputSystem::PenButton* Barrel3; // 0x0
		::UnityEngine::InputSystem::PenButton* Barrel4; // 0x0

	};
}

