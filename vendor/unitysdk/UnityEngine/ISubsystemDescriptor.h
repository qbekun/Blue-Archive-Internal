#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ISUBSYSTEMDESCRIPTOR_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int ISubsystemDescriptor_TypeDefinitionIndex = 37950;

	class ISubsystemDescriptor : public Il2CppObject
	{
	public:
		::System::String* get_id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ISUBSYSTEMDESCRIPTOR_GET_ID_OFFSET))(nullptr);
		}

	};
}

