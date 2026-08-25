#pragma once
#include "../../unitysdk.h"

#define MX_DATA_GROWTHSCORECALCULATIONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18E1860)
#define MX_DATA_GROWTHSCORECALCULATIONDATA_GETALLCOEFFICIENTS_OFFSET UNITYSDK_OFFSET(0x18E1CA0)
#define MX_DATA_GROWTHSCORECALCULATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E1CB0)

namespace MX::Data
{
	inline static constexpr unsigned int GrowthScoreCalculationData_TypeDefinitionIndex = 16145;

	class GrowthScoreCalculationData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* allCoefficients; // 0x28

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROWTHSCORECALCULATIONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllCoefficients()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROWTHSCORECALCULATIONDATA_GETALLCOEFFICIENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROWTHSCORECALCULATIONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

