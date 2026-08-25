#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYAPPTRACKINGPERMISSIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC5DB0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyAppTrackingPermissionResult_TypeDefinitionIndex = 27309;

	class NXPToyAppTrackingPermissionResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYAPPTRACKINGPERMISSIONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

