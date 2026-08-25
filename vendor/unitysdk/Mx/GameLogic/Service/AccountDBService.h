#pragma once
#include "../../../unitysdk.h"

class LevelExpResult;
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_TRYGETLEVELUPAPREWARDS_OFFSET UNITYSDK_OFFSET(0xF54540)
#define MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_CALCLEVELANDEXPAFTERFEEDEXP_OFFSET UNITYSDK_OFFSET(0xF546A0)
#define MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_CORRECTMASTERCOINAMOUNT_OFFSET UNITYSDK_OFFSET(0xF54D30)
#define MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_GETACCOUNTEXPGAINAMOUNT_OFFSET UNITYSDK_OFFSET(0xF54E00)
#define MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF54E90)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int AccountDBService_TypeDefinitionIndex = 12220;

	class AccountDBService : public Il2CppObject
	{
	public:
		::System::Boolean TryGetLevelUpAPRewards(::System::Int32 arg, ::System::Int32 arg2, ::MX::GameLogic::Parcel::CurrencyTransaction&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::MX::GameLogic::Parcel::CurrencyTransaction&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_TRYGETLEVELUPAPREWARDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		LevelExpResult* CalcLevelAndExpAfterFeedExp(::System::Int32 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			return ((LevelExpResult*(*)(::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_CALCLEVELANDEXPAFTERFEEDEXP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 CorrectMasterCoinAmount(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_CORRECTMASTERCOINAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetAccountExpGainAmount(::System::Int64 arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_GETACCOUNTEXPGAINAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACCOUNTDBSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

