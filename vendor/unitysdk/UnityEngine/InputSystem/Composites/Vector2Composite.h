#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8CF40)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E8CF80)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E8D0D0)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int Vector2Composite_TypeDefinitionIndex = 28972;

	class Vector2Composite : public ::MX::MinigameCCG::ParameterRef::PlayerOutputRef
	{
	public:
		::System::Int32 up; // 0x10
		::System::Int32 down; // 0x14
		::System::Int32 left; // 0x18
		::System::Int32 right; // 0x1C
		::System::Boolean normalize; // 0x20
		Mode* mode; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_READVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

	};
}

