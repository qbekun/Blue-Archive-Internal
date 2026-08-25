#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATETYPEINFO_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IInputStateTypeInfo_TypeDefinitionIndex = 28814;

	class IInputStateTypeInfo : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATETYPEINFO_GET_FORMAT_OFFSET))(nullptr);
		}

	};
}

