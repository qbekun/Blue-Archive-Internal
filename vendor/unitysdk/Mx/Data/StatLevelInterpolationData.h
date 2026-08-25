#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StatLevelUpType; }

#define MX_DATA_STATLEVELINTERPOLATIONDATA_GETSTATRATIO_OFFSET UNITYSDK_OFFSET(0x195F2D0)
#define MX_DATA_STATLEVELINTERPOLATIONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x195F3C0)
#define MX_DATA_STATLEVELINTERPOLATIONDATA_GETENDLEVELOFSTATLEVELINTERPOLATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x195F7B0)
#define MX_DATA_STATLEVELINTERPOLATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195F7C0)
#define MX_DATA_STATLEVELINTERPOLATIONDATA_GETOBSTACLESTATRATIO_OFFSET UNITYSDK_OFFSET(0x195F840)

namespace MX::Data
{
	inline static constexpr unsigned int StatLevelInterpolationData_TypeDefinitionIndex = 16415;

	class StatLevelInterpolationData : public Il2CppObject
	{
	public:
		Il2CppObject* interpolationDictionary; // 0x28

		::System::Single GetStatRatio(::FlatData::StatLevelUpType* arg, ::System::Int64 arg)
		{
			return (return (::System::Single(*)(::FlatData::StatLevelUpType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STATLEVELINTERPOLATIONDATA_GETSTATRATIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STATLEVELINTERPOLATIONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Int64 GetEndLevelOfStatLevelInterpolationExcel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STATLEVELINTERPOLATIONDATA_GETENDLEVELOFSTATLEVELINTERPOLATIONEXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STATLEVELINTERPOLATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetObstacleStatRatio(::System::Int64 arg)
		{
			return (return (::System::Single(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STATLEVELINTERPOLATIONDATA_GETOBSTACLESTATRATIO_OFFSET))(arg, nullptr);
		}

	};
}

