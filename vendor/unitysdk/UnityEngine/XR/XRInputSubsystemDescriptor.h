#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_XR_XRINPUTSUBSYSTEMDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AC870)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRInputSubsystemDescriptor_TypeDefinitionIndex = 37608;

	class XRInputSubsystemDescriptor : public <OnState>d__2
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEMDESCRIPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

