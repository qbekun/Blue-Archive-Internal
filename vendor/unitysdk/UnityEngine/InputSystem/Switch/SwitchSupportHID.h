#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHSUPPORTHID_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F3CFC0)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchSupportHID_TypeDefinitionIndex = 28648;

	class SwitchSupportHID : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHSUPPORTHID_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

