#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E8C180)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8C1A0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E8C1E0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E8C2F0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_MODIFIERISPRESSED_OFFSET UNITYSDK_OFFSET(0x9E8C280)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int ButtonWithOneModifier_TypeDefinitionIndex = 28967;

	class ButtonWithOneModifier : public ::MX::MinigameCCG::ParameterRef::PlayerInputRef
	{
	public:
		::System::Int32 modifier; // 0x10
		::System::Int32 button; // 0x14
		::System::Boolean overrideModifiersNeedToBePressedFirst; // 0x18

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_READVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_FINISHSETUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean ModifierIsPressed(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_MODIFIERISPRESSED_OFFSET))(arg, nullptr);
		}

	};
}

