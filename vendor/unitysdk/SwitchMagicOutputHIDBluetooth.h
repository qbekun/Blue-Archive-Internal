#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define SWITCHMAGICOUTPUTHIDBLUETOOTH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F3CEC0)
#define SWITCHMAGICOUTPUTHIDBLUETOOTH_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F3CF00)
#define SWITCHMAGICOUTPUTHIDBLUETOOTH_CREATE_OFFSET UNITYSDK_OFFSET(0x9F3C360)

	inline static constexpr unsigned int SwitchMagicOutputHIDBluetooth_TypeDefinitionIndex = 28645;

	class SwitchMagicOutputHIDBluetooth : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		SwitchMagicOutputReport* report; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHMAGICOUTPUTHIDBLUETOOTH_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHMAGICOUTPUTHIDBLUETOOTH_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		SwitchMagicOutputHIDBluetooth* Create(CommandIdType* arg)
		{
			return (return (SwitchMagicOutputHIDBluetooth*(*)(CommandIdType*, ::PVOID))((::PBYTE)hIl2Cpp + SWITCHMAGICOUTPUTHIDBLUETOOTH_CREATE_OFFSET))(arg, nullptr);
		}

	};

