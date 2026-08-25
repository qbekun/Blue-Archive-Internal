#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SubsystemDescriptor; }

#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_ADDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA2A68C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Internal_SubsystemDescriptors_TypeDefinitionIndex = 37953;

	class Internal_SubsystemDescriptors : public Il2CppObject
	{
	public:
		::System::Void Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::SubsystemDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_ADDDESCRIPTOR_OFFSET))(arg, nullptr);
		}

	};
}

