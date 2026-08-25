#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SUBSYSTEMDESCRIPTOR_GET_ID_OFFSET UNITYSDK_OFFSET(0xA2A68A0)
#define UNITYENGINE_SUBSYSTEMDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A68B0)

namespace UnityEngine
{
	inline static constexpr unsigned int SubsystemDescriptor_TypeDefinitionIndex = 37952;

	class SubsystemDescriptor : public Il2CppObject
	{
	public:
		::System::String* _id_k__BackingField; // 0x10

		::System::String* get_id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMDESCRIPTOR_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMDESCRIPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

