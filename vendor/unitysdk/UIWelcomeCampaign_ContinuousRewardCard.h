#pragma once
#include "unitysdk.h"

class UIParcelCard;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class RewardStatus;

#define UIWELCOMECAMPAIGN_CONTINUOUSREWARDCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD76F0)
#define UIWELCOMECAMPAIGN_CONTINUOUSREWARDCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0xBD3E50)

	inline static constexpr unsigned int UIWelcomeCampaign_ContinuousRewardCard_TypeDefinitionIndex = 8684;

	class UIWelcomeCampaign_ContinuousRewardCard : public Il2CppObject
	{
	public:
		UIParcelCard* parcelCard; // 0x18
		::UnityEngine::GameObject* available; // 0x20
		::UnityEngine::GameObject* received; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_CONTINUOUSREWARDCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg, RewardStatus* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, RewardStatus*, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_CONTINUOUSREWARDCARD_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

