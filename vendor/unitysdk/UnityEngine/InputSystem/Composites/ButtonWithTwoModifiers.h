#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E8C350)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_MODIFIERSAREPRESSED_OFFSET UNITYSDK_OFFSET(0x9E8C3B0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E8C460)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E8C480)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8C4E0)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int ButtonWithTwoModifiers_TypeDefinitionIndex = 28968;

	class ButtonWithTwoModifiers : public ::MX::MinigameCCG::ParameterRef::PlayerInputRef
	{
	public:
		::System::Int32 modifier1; // 0x10
		::System::Int32 modifier2; // 0x14
		::System::Int32 button; // 0x18
		::System::Boolean overrideModifiersNeedToBePressedFirst; // 0x1C

		::System::Single ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_READVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ModifiersArePressed(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_MODIFIERSAREPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_FINISHSETUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_.CTOR_OFFSET))(nullptr);
		}

	};
}

