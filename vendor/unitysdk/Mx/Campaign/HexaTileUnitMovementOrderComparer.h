#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexaTile; }

#define MX_CAMPAIGN_HEXATILEUNITMOVEMENTORDERCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14324E0)
#define MX_CAMPAIGN_HEXATILEUNITMOVEMENTORDERCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1432520)

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaTileUnitMovementOrderComparer_TypeDefinitionIndex = 14885;

	class HexaTileUnitMovementOrderComparer : public ::LiveAssist::CrashReporter
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEUNITMOVEMENTORDERCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::MX::Campaign::HexaTile* arg, ::MX::Campaign::HexaTile* arg2)
		{
			return ((::System::Int32(*)(::MX::Campaign::HexaTile*, ::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEUNITMOVEMENTORDERCOMPARER_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

