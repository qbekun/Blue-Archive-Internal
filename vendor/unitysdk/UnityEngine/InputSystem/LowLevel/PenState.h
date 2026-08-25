#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class PenState; }
namespace UnityEngine::InputSystem { class PenButton; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F565B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F565F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x9F56630)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int PenState_TypeDefinitionIndex = 28757;

	class PenState : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* position; // 0x10
		::UnityEngine::Vector2* delta; // 0x18
		::UnityEngine::Vector2* tilt; // 0x20
		::System::Single pressure; // 0x28
		::System::Single twist; // 0x2C
		::System::UInt16 buttons; // 0x30
		::System::UInt16 displayIndex; // 0x32

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::PenState* WithButton(::UnityEngine::InputSystem::PenButton* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::PenState*(*)(::UnityEngine::InputSystem::PenButton*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_WITHBUTTON_OFFSET))(arg, arg, nullptr);
		}

	};
}

