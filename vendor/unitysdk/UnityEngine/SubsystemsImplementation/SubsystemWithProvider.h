#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMWITHPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A7880)

namespace UnityEngine::SubsystemsImplementation
{
	inline static constexpr unsigned int SubsystemWithProvider_TypeDefinitionIndex = 37957;

	class SubsystemWithProvider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMWITHPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

