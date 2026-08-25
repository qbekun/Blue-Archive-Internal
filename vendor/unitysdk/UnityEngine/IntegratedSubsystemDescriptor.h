#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_INTEGRATEDSUBSYSTEMDESCRIPTOR_GET_ID_OFFSET UNITYSDK_OFFSET(0xA2A6800)
#define UNITYENGINE_INTEGRATEDSUBSYSTEMDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6880)

namespace UnityEngine
{
	inline static constexpr unsigned int IntegratedSubsystemDescriptor_TypeDefinitionIndex = 37946;

	class IntegratedSubsystemDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::String* get_id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEMDESCRIPTOR_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEMDESCRIPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

