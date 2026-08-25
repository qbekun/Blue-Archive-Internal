#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint&; }

#define MX_DATA_LEVELEXPMASTERCOINDATA_TRYGETMASTERCOINRATIOBYLEVEL_OFFSET UNITYSDK_OFFSET(0x18E8840)
#define MX_DATA_LEVELEXPMASTERCOINDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18E8990)
#define MX_DATA_LEVELEXPMASTERCOINDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E8A80)
#define MX_DATA_LEVELEXPMASTERCOINDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18E8B00)

namespace MX::Data
{
	inline static constexpr unsigned int LevelExpMasterCoinData_TypeDefinitionIndex = 16166;

	class LevelExpMasterCoinData : public Il2CppObject
	{
	public:
		Il2CppObject* masterCoinExcels; // 0x28

		::System::Boolean TryGetMasterCoinRatioByLevel(::System::Int64 arg, ::MX::Core::Math::BasisPoint&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Core::Math::BasisPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LEVELEXPMASTERCOINDATA_TRYGETMASTERCOINRATIOBYLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LEVELEXPMASTERCOINDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LEVELEXPMASTERCOINDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LEVELEXPMASTERCOINDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

	};
}

