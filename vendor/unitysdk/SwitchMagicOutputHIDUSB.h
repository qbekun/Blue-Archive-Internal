#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define SWITCHMAGICOUTPUTHIDUSB_CREATE_OFFSET UNITYSDK_OFFSET(0x9F3C3F0)
#define SWITCHMAGICOUTPUTHIDUSB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F3CF40)
#define SWITCHMAGICOUTPUTHIDUSB_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F3CF80)

	inline static constexpr unsigned int SwitchMagicOutputHIDUSB_TypeDefinitionIndex = 28646;

	class SwitchMagicOutputHIDUSB : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		SwitchMagicOutputReport* report; // 0x18

		SwitchMagicOutputHIDUSB* Create(CommandIdType* arg)
		{
			return (return (SwitchMagicOutputHIDUSB*(*)(CommandIdType*, ::PVOID))((::PBYTE)hIl2Cpp + SWITCHMAGICOUTPUTHIDUSB_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHMAGICOUTPUTHIDUSB_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHMAGICOUTPUTHIDUSB_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};

