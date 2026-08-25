#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class CharacterPotentialRewardExcel; }

#define MX_DATA_CHARACTERPOTENTIALREWARDEXCELEXTENSION_ASPARCEL_OFFSET UNITYSDK_OFFSET(0x1838860)
#define MX_DATA_CHARACTERPOTENTIALREWARDEXCELEXTENSION_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x18388F0)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterPotentialRewardExcelExtension_TypeDefinitionIndex = 15750;

	class CharacterPotentialRewardExcelExtension : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* AsParcel(::MX::Data::Excel::CharacterPotentialRewardExcel* arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::Data::Excel::CharacterPotentialRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERPOTENTIALREWARDEXCELEXTENSION_ASPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveReward(::MX::Data::Excel::CharacterPotentialRewardExcel* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CharacterPotentialRewardExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERPOTENTIALREWARDEXCELEXTENSION_CANRECEIVEREWARD_OFFSET))(arg, arg, nullptr);
		}

	};
}

