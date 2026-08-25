#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_XR_XRSUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F27830)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRSupport_TypeDefinitionIndex = 28590;

	class XRSupport : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRSUPPORT_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

