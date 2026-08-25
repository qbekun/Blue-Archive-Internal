#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }

#define UIPOPUP_RAIDNEWRECORD_POINTANISTART_OFFSET UNITYSDK_OFFSET(0x27979C0)
#define UIPOPUP_RAIDNEWRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2797B60)
#define UIPOPUP_RAIDNEWRECORD_CANREWARD_OFFSET UNITYSDK_OFFSET(0x2797B70)
#define UIPOPUP_RAIDNEWRECORD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2797F30)
#define UIPOPUP_RAIDNEWRECORD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27986A0)
#define UIPOPUP_RAIDNEWRECORD_COPOINTANI_OFFSET UNITYSDK_OFFSET(0x2797AE0)
#define UIPOPUP_RAIDNEWRECORD_CORANKANI_OFFSET UNITYSDK_OFFSET(0x2798850)
#define UIPOPUP_RAIDNEWRECORD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2798910)

	inline static constexpr unsigned int UIPopup_RaidNewRecord_TypeDefinitionIndex = 7454;

	class UIPopup_RaidNewRecord : public Il2CppObject
	{
	public:
		UILabel* ResultDescriptionLabel; // 0xD8
		UILabel* OldRanking; // 0xE0
		UILabel* NewRanking; // 0xE8
		UILabel* Point; // 0xF0
		UILabel* PlusPoint; // 0xF8
		UILabel* TotalPoint; // 0x100
		UITexture* TierIcon; // 0x108
		UITexture* RankUp; // 0x110
		UITexture* RankDown; // 0x118
		::UnityEngine::Transform* PreWidget; // 0x120
		::UnityEngine::GameObject* CanRewardObject; // 0x128

		::System::Void PointAniStart(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_POINTANISTART_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_CANREWARD_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPointAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_COPOINTANI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoRankAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_CORANKANI_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_ONCLOSED_OFFSET))(nullptr);
		}

	};

