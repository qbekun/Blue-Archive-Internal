#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }

#define UIPOPUP_RAIDNEWRECORD_DEFAULT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27993E0)
#define UIPOPUP_RAIDNEWRECORD_DEFAULT_CANREWARD_OFFSET UNITYSDK_OFFSET(0x27994C0)
#define UIPOPUP_RAIDNEWRECORD_DEFAULT_CORANKANI_OFFSET UNITYSDK_OFFSET(0x2799880)
#define UIPOPUP_RAIDNEWRECORD_DEFAULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2799920)
#define UIPOPUP_RAIDNEWRECORD_DEFAULT_COPOINTANI_OFFSET UNITYSDK_OFFSET(0x2799930)
#define UIPOPUP_RAIDNEWRECORD_DEFAULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27999D0)
#define UIPOPUP_RAIDNEWRECORD_DEFAULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x279A010)
#define UIPOPUP_RAIDNEWRECORD_DEFAULT_POINTANISTART_OFFSET UNITYSDK_OFFSET(0x279A1D0)

	inline static constexpr unsigned int UIPopup_RaidNewRecord_Default_TypeDefinitionIndex = 7457;

	class UIPopup_RaidNewRecord_Default : public Il2CppObject
	{
	public:
		UILabel* OldRanking; // 0xD8
		UILabel* NewRanking; // 0xE0
		UILabel* Point; // 0xE8
		UILabel* PlusPoint; // 0xF0
		UILabel* TotalPoint; // 0xF8
		UITexture* TierIcon; // 0x100
		UITexture* RankUp; // 0x108
		UITexture* RankDown; // 0x110
		::UnityEngine::Transform* PreWidget; // 0x118
		::UnityEngine::GameObject* CanRewardObject; // 0x120

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_DEFAULT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Boolean CanReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_DEFAULT_CANREWARD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRankAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_DEFAULT_CORANKANI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_DEFAULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPointAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_DEFAULT_COPOINTANI_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_DEFAULT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_DEFAULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void PointAniStart(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDNEWRECORD_DEFAULT_POINTANISTART_OFFSET))(arg, nullptr);
		}

	};

