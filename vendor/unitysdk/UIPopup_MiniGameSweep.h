#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIGrid;
class UISmallParcelCard;
class StageSweep;
class UIPopup_MiniGameSweepShootingRecord;
class UIPopup_MiniGameSweepCardGameRecord;
class MXButton;
namespace FlatData { class EventContentType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_MINIGAMESWEEP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2097DE0)
#define UIPOPUP_MINIGAMESWEEP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2097F50)
#define UIPOPUP_MINIGAMESWEEP__ONCLICKSTART_B__21_1_OFFSET UNITYSDK_OFFSET(0x2098210)
#define UIPOPUP_MINIGAMESWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2098240)
#define UIPOPUP_MINIGAMESWEEP_ONCLICKSTART_OFFSET UNITYSDK_OFFSET(0x2098250)
#define UIPOPUP_MINIGAMESWEEP_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x20984A0)
#define UIPOPUP_MINIGAMESWEEP_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x2098530)
#define UIPOPUP_MINIGAMESWEEP_HANDLESWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x20985F0)
#define UIPOPUP_MINIGAMESWEEP_SETDATASHOOTING_OFFSET UNITYSDK_OFFSET(0x2098700)
#define UIPOPUP_MINIGAMESWEEP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2098850)
#define UIPOPUP_MINIGAMESWEEP_CREATEPARCELS_OFFSET UNITYSDK_OFFSET(0x2098960)
#define UIPOPUP_MINIGAMESWEEP_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x2098B10)
#define UIPOPUP_MINIGAMESWEEP_SETDATACARDGAME_OFFSET UNITYSDK_OFFSET(0x2098D50)

	inline static constexpr unsigned int UIPopup_MiniGameSweep_TypeDefinitionIndex = 3513;

	class UIPopup_MiniGameSweep : public Il2CppObject
	{
	public:
		::System::Int64 contentId; // 0xD8
		UIScrollView* RewardsScroll; // 0xE0
		UIGrid* RewardsGrid; // 0xE8
		UISmallParcelCard* RewardPrefab; // 0xF0
		StageSweep* SweepObject; // 0xF8
		UIPopup_MiniGameSweepShootingRecord* ShootingRecord; // 0x100
		UIPopup_MiniGameSweepCardGameRecord* CardRecord; // 0x108
		MXButton* startButton; // 0x110
		MXButton* closeButton; // 0x118
		::FlatData::EventContentType* eventContentType; // 0x120
		Il2CppObject* _RewardParcels; // 0x128

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickStart_b__21_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP__ONCLICKSTART_B__21_1_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_ONCLICKSTART_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_ONCANCEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Boolean HandleSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_HANDLESWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataShooting(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_SETDATASHOOTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CreateParcels(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_CREATEPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void SetRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_SETREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataCardGame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEP_SETDATACARDGAME_OFFSET))(arg, nullptr);
		}

	};

