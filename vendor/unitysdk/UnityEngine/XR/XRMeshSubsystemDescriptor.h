#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_XR_XRMESHSUBSYSTEMDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AD240)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRMeshSubsystemDescriptor_TypeDefinitionIndex = 37616;

	class XRMeshSubsystemDescriptor : public ::MX::MinigameCCG::Procedures::PrintDebugLog
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRMESHSUBSYSTEMDESCRIPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

