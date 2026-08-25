#pragma once
#include "../../../unitysdk.h"

#define UNITY_XR_OPENVR_VIVELIGHTHOUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3D7D0)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int ViveLighthouse_TypeDefinitionIndex = 28358;

	class ViveLighthouse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVELIGHTHOUSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

