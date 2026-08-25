#pragma once
#include "../../unitysdk.h"

#define NPA_ANALYTICS_NPANALYTICSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE1F0)

namespace NPA::Analytics
{
	inline static constexpr unsigned int NPAnalyticsResult_TypeDefinitionIndex = 27597;

	class NPAnalyticsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ANALYTICS_NPANALYTICSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

