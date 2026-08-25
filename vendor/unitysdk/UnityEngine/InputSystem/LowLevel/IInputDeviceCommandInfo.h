#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTDEVICECOMMANDINFO_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IInputDeviceCommandInfo_TypeDefinitionIndex = 28717;

	class IInputDeviceCommandInfo : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTDEVICECOMMANDINFO_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

