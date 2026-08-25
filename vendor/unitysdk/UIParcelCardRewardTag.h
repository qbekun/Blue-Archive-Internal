#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }

#define UIPARCELCARDREWARDTAG_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x22071D0)
#define UIPARCELCARDREWARDTAG_REFRESH_OFFSET UNITYSDK_OFFSET(0x22072D0)
#define UIPARCELCARDREWARDTAG_REFRESH_OFFSET UNITYSDK_OFFSET(0x22073A0)
#define UIPARCELCARDREWARDTAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x2207890)
#define UIPARCELCARDREWARDTAG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x22078A0)

	inline static constexpr unsigned int UIParcelCardRewardTag_TypeDefinitionIndex = 4339;

	class UIParcelCardRewardTag : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* firstClearRewardTag; // 0x18
		::UnityEngine::GameObject* strategyObjectRewardTag; // 0x20
		::UnityEngine::GameObject* threeStarRewardTag; // 0x28
		::UnityEngine::GameObject* productMonthlyRewardTag; // 0x30
		::UnityEngine::GameObject* productWeeklyRewardTag; // 0x38
		::UnityEngine::GameObject* productBiweeklyRewardTag; // 0x40
		::UnityEngine::GameObject* rareRewardTag; // 0x48
		::UnityEngine::GameObject* eventBonusRewardTag; // 0x50
		::UnityEngine::GameObject* timeWeightRewardTag; // 0x58
		::UnityEngine::GameObject* rewardPenaltyTag; // 0x60
		::UnityEngine::GameObject* gemBonusTag; // 0x68
		::UnityEngine::GameObject* gemPaidTag; // 0x70
		Il2CppObject* Priority; // 0x0

		::System::Int32 GetPriority(::FlatData::RewardTag* arg)
		{
			return ((::System::Int32(*)(::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARDREWARDTAG_GETPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh(::FlatData::RewardTag* arg, ::FlatData::ParcelType* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::RewardTag*, ::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARDREWARDTAG_REFRESH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Refresh(::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARDREWARDTAG_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARDREWARDTAG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARDREWARDTAG_.CCTOR_OFFSET))(nullptr);
		}

	};

