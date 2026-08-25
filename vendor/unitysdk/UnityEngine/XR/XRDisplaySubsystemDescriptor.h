#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEMDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AC690)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystemDescriptor_TypeDefinitionIndex = 37606;

	class XRDisplaySubsystemDescriptor : public ::MX::MinigameCCG::Procedures::GetPlayerProperty
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEMDESCRIPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

