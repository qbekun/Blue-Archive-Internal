#pragma once
#include "../../../unitysdk.h"

#define UNITY_XR_GOOGLEVR_DAYDREAMHMD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3F550)

namespace Unity::XR::GoogleVr
{
	inline static constexpr unsigned int DaydreamHMD_TypeDefinitionIndex = 28368;

	class DaydreamHMD : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMHMD_.CTOR_OFFSET))(nullptr);
		}

	};
}

