#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
namespace UnityEngine { class Transform; }

#define UIPOPUP_ELIMINATERAIDNEWRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E7B30)
#define UIPOPUP_ELIMINATERAIDNEWRECORD_CANREWARD_OFFSET UNITYSDK_OFFSET(0x23E7B40)
#define UIPOPUP_ELIMINATERAIDNEWRECORD_CORANKANI_OFFSET UNITYSDK_OFFSET(0x23E7D80)
#define UIPOPUP_ELIMINATERAIDNEWRECORD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23E7E20)
#define UIPOPUP_ELIMINATERAIDNEWRECORD_COTOTALPOINTANI_OFFSET UNITYSDK_OFFSET(0x23E8870)
#define UIPOPUP_ELIMINATERAIDNEWRECORD_POINTANISTART_OFFSET UNITYSDK_OFFSET(0x23E8910)

	inline static constexpr unsigned int UIPopup_EliminateRaidNewRecord_TypeDefinitionIndex = 5393;

	class UIPopup_EliminateRaidNewRecord : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* RankPrefab; // 0xD8
		::UnityEngine::GameObject* EmptyRankPrefab; // 0xE0
		::UnityEngine::GameObject* CompensateResultPrefab; // 0xE8
		::UnityEngine::GameObject* BestRecordMark; // 0xF0
		UILabel* OldRanking; // 0xF8
		UILabel* NewRanking; // 0x100
		UITexture* TierIcon; // 0x108
		UITexture* RankUp; // 0x110
		::UnityEngine::Transform* PreWidget; // 0x118
		UILabel* ScoreLabel; // 0x120
		UILabel* ScorePlusPointLabel; // 0x128
		UILabel* TotalPointLabel; // 0x130
		UILabel* TotalPlusPointLabel; // 0x138
		::Il2CppArray<::System::Object*>* TypeRecordInfos; // 0x140
		::UnityEngine::GameObject* CanRewardObject; // 0x148

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDNEWRECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDNEWRECORD_CANREWARD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRankAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDNEWRECORD_CORANKANI_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDNEWRECORD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoTotalPointAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDNEWRECORD_COTOTALPOINTANI_OFFSET))(arg, nullptr);
		}

		::System::Void PointAniStart(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDNEWRECORD_POINTANISTART_OFFSET))(arg, nullptr);
		}

	};

