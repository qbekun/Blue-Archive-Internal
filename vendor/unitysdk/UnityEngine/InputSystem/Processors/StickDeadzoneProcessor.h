#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F691C0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9F69200)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9F69270)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F692E0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F69510)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GETDEADZONEADJUSTEDVALUE_OFFSET UNITYSDK_OFFSET(0x9F693E0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int StickDeadzoneProcessor_TypeDefinitionIndex = 28844;

	class StickDeadzoneProcessor : public <OnState>d__4
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_maxOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_minOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* Process(::UnityEngine::Vector2* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Single GetDeadZoneAdjustedValue(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GETDEADZONEADJUSTEDVALUE_OFFSET))(arg, nullptr);
		}

	};
}

