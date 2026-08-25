#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class PortraitSpineCharacter;
class UIWidget;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UIMiniGameShootingArriveSection;
class UIMiniGameShootingArriveSection_FreeGame;
class UIParcelCard;
class UIScrollView;
class UIGrid;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define UIMINIGAMESHOOTINGRESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2083B40)
#define UIMINIGAMESHOOTINGRESULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2083B50)
#define UIMINIGAMESHOOTINGRESULT__SETSPINE_B__24_0_OFFSET UNITYSDK_OFFSET(0x20847E0)
#define UIMINIGAMESHOOTINGRESULT_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x2084720)
#define UIMINIGAMESHOOTINGRESULT_SETSPINE_OFFSET UNITYSDK_OFFSET(0x2084270)
#define UIMINIGAMESHOOTINGRESULT_CREATEPARCELS_OFFSET UNITYSDK_OFFSET(0x2084820)
#define UIMINIGAMESHOOTINGRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2084990)
#define UIMINIGAMESHOOTINGRESULT_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x2084490)
#define UIMINIGAMESHOOTINGRESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0x20849A0)
#define UIMINIGAMESHOOTINGRESULT_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2084AD0)

	inline static constexpr unsigned int UIMiniGameShootingResult_TypeDefinitionIndex = 3433;

	class UIMiniGameShootingResult : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* SpineParent; // 0xD8
		PortraitSpineCharacter* portraitSpineCharacter; // 0xE0
		UIWidget* SpineOrder; // 0xE8
		::UnityEngine::GameObject* VictoryImg; // 0xF0
		::UnityEngine::GameObject* DefeatImg; // 0xF8
		UILabel* StageName; // 0x100
		UILabel* PlayerCharacter; // 0x108
		UILabel* BattleTime; // 0x110
		UILabel* ClearStage; // 0x118
		UILabel* Empty; // 0x120
		::Il2CppArray<::System::Object*>* Rewards; // 0x128
		MXButton* OkButton; // 0x130
		UIMiniGameShootingArriveSection* UIArriveSection; // 0x138
		UIMiniGameShootingArriveSection_FreeGame* UIArriveSectionFreeGame; // 0x140
		::UnityEngine::Transform* SizeBox; // 0x148
		UIParcelCard* RewardPrefab; // 0x150
		UIScrollView* RewardsScroll; // 0x158
		UIGrid* RewardsGrid; // 0x160
		Il2CppObject* _RewardParcels; // 0x168

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Boolean arg, ::System::Int32 arg2, ::MX::GameLogic::Parcel::ParcelResultDB* arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _SetSpine_b__24_0(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT__SETSPINE_B__24_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void SetSpine(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_SETSPINE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateParcels(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_CREATEPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_SETREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGRESULT_ONCLICKOK_OFFSET))(nullptr);
		}

	};

