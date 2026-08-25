#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterPotentialStatExcel&; }
namespace FlatData { class PotentialStatBonusRateType; }
namespace MX::Data::Excel { class CharacterPotentialRewardExcel&; }

#define MX_DATA_CHARACTERPOTENTIALDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1838460)
#define MX_DATA_CHARACTERPOTENTIALDATA_TRYGETPOTENTIALS_OFFSET UNITYSDK_OFFSET(0x18384E0)
#define MX_DATA_CHARACTERPOTENTIALDATA_TRYGETPOTENTIALSTAT_OFFSET UNITYSDK_OFFSET(0x1838580)
#define MX_DATA_CHARACTERPOTENTIALDATA_TRYGETPOTENTIALSTAT_OFFSET UNITYSDK_OFFSET(0x1838670)
#define MX_DATA_CHARACTERPOTENTIALDATA_TRYGETPOTENTIALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1838770)
#define MX_DATA_CHARACTERPOTENTIALDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1838850)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterPotentialData_TypeDefinitionIndex = 15749;

	class CharacterPotentialData : public Il2CppObject
	{
	public:
		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERPOTENTIALDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPotentials(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERPOTENTIALDATA_TRYGETPOTENTIALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPotentialStat(::System::Int64 arg, ::System::Int32 arg, ::MX::Data::Excel::CharacterPotentialStatExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::MX::Data::Excel::CharacterPotentialStatExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERPOTENTIALDATA_TRYGETPOTENTIALSTAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetPotentialStat(::System::Int64 arg, ::System::Int32 arg, ::FlatData::PotentialStatBonusRateType* arg, ::MX::Data::Excel::CharacterPotentialStatExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::FlatData::PotentialStatBonusRateType*, ::MX::Data::Excel::CharacterPotentialStatExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERPOTENTIALDATA_TRYGETPOTENTIALSTAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetPotentialRewardExcel(::System::Int64 arg, ::MX::Data::Excel::CharacterPotentialRewardExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterPotentialRewardExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERPOTENTIALDATA_TRYGETPOTENTIALREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERPOTENTIALDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

