#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEvent; }
namespace UnityEngine::InputSystem::LowLevel { class IMECompositionString; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class IMECompositionEvent; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F57A70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F57A80)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IMECompositionEvent_TypeDefinitionIndex = 28777;

	class IMECompositionEvent : public Il2CppObject
	{
	public:
		::System::Int32 kIMECharBufferSize; // 0x0
		::System::Int32 Type; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent* baseEvent; // 0x10
		::UnityEngine::InputSystem::LowLevel::IMECompositionString* compositionString; // 0x24

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONEVENT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::IMECompositionEvent* Create(::System::Int32 arg, ::System::String* str, ::System::Double arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::IMECompositionEvent*(*)(::System::Int32, ::System::String*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONEVENT_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

