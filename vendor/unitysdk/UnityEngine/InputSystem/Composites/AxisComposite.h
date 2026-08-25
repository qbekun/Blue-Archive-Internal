#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E8BF60)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8C0B0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E8C100)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_GET_MIDPOINT_OFFSET UNITYSDK_OFFSET(0x9E8C090)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int AxisComposite_TypeDefinitionIndex = 28966;

	class AxisComposite : public ::MX::MinigameCCG::ParameterRef::PlayerInputRef
	{
	public:
		::System::Int32 negative; // 0x10
		::System::Int32 positive; // 0x14
		::System::Single minValue; // 0x18
		::System::Single maxValue; // 0x1C
		WhichSideWins* whichSideWins; // 0x20

		::System::Single ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_READVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Single get_midPoint()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_GET_MIDPOINT_OFFSET))(nullptr);
		}

	};
}

