#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SUBSYSTEMDESCRIPTORBINDINGS_GETID_OFFSET UNITYSDK_OFFSET(0xA2A6840)

namespace UnityEngine
{
	inline static constexpr unsigned int SubsystemDescriptorBindings_TypeDefinitionIndex = 37948;

	class SubsystemDescriptorBindings : public Il2CppObject
	{
	public:
		::System::String* GetId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMDESCRIPTORBINDINGS_GETID_OFFSET))(arg, nullptr);
		}

	};
}

