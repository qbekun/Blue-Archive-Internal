#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::LowLevel { class QueryCanRunInBackground; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55140)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F551E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F551A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryCanRunInBackground_TypeDefinitionIndex = 28723;

	class QueryCanRunInBackground : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Boolean canRunInBackground; // 0x18

		::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

