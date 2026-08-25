#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORWITHPROVIDER_GET_ID_OFFSET UNITYSDK_OFFSET(0xA2A7860)
#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORWITHPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A7870)

namespace UnityEngine::SubsystemsImplementation
{
	inline static constexpr unsigned int SubsystemDescriptorWithProvider_TypeDefinitionIndex = 37956;

	class SubsystemDescriptorWithProvider : public Il2CppObject
	{
	public:
		::System::String* _id_k__BackingField; // 0x10

		::System::String* get_id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORWITHPROVIDER_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORWITHPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

