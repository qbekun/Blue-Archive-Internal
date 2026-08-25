#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class InitiateUserAccountPairingCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F54C40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F54C80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F54CC0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InitiateUserAccountPairingCommand_TypeDefinitionIndex = 28719;

	class InitiateUserAccountPairingCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_CREATE_OFFSET))(nullptr);
		}

	};
}

