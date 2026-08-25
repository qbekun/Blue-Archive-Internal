#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEvent; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem::LowLevel { class TextEvent; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F5F1C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x9F5F1D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F5F310)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F5F380)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TextEvent_TypeDefinitionIndex = 28798;

	class TextEvent : public Il2CppObject
	{
	public:
		::System::Int32 Type; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent* baseEvent; // 0x10
		::System::Int32 character; // 0x24

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::System::Object** From(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_FROM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::TextEvent* Create(::System::Int32 arg, ::System::Char arg, ::System::Double arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::TextEvent*(*)(::System::Int32, ::System::Char, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::TextEvent* Create(::System::Int32 arg, ::System::Int32 arg, ::System::Double arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::TextEvent*(*)(::System::Int32, ::System::Int32, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

