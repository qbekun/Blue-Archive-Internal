#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class UITimeAttack_GeasGrid;
class UIScrollView;
class UIGrid;
class UISmallParcelCard;
class InformationGroupOpen;
namespace MX::Data { class TimeAttackDungeonSeasonInfo; }
namespace MX::Data { class TimeAttackDungeonData; }
namespace MX::Data::Excel { class TimeAttackDungeonExcel; }

#define UIPOPUP_TIMEATTACKNEXTSEASON_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB605F0)
#define UIPOPUP_TIMEATTACKNEXTSEASON_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB606E0)
#define UIPOPUP_TIMEATTACKNEXTSEASON_SETREWARDS_OFFSET UNITYSDK_OFFSET(0xB60780)
#define UIPOPUP_TIMEATTACKNEXTSEASON_SETGEASICONS_OFFSET UNITYSDK_OFFSET(0xB60CB0)
#define UIPOPUP_TIMEATTACKNEXTSEASON_.CTOR_OFFSET UNITYSDK_OFFSET(0xB60DF0)
#define UIPOPUP_TIMEATTACKNEXTSEASON_ONBACK_OFFSET UNITYSDK_OFFSET(0xB60E00)
#define UIPOPUP_TIMEATTACKNEXTSEASON_SETINFOGROUP_OFFSET UNITYSDK_OFFSET(0xB60EA0)
#define UIPOPUP_TIMEATTACKNEXTSEASON_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xB60BF0)
#define UIPOPUP_TIMEATTACKNEXTSEASON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB60F70)
#define UIPOPUP_TIMEATTACKNEXTSEASON_SETUI_OFFSET UNITYSDK_OFFSET(0xB60700)
#define UIPOPUP_TIMEATTACKNEXTSEASON_CREATEREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xB60A70)
#define UIPOPUP_TIMEATTACKNEXTSEASON_SETTYPE_OFFSET UNITYSDK_OFFSET(0xB60FA0)

	inline static constexpr unsigned int UIPopup_TimeAttackNextSeason_TypeDefinitionIndex = 8418;

	class UIPopup_TimeAttackNextSeason : public Il2CppObject
	{
	public:
		UITexture* enemyIconTexture; // 0xD8
		UILabel* dungeonTypeLabel; // 0xE0
		UILabel* seasonStartEnd; // 0xE8
		UITimeAttack_GeasGrid* geasGrid; // 0xF0
		UIScrollView* rewardScroll; // 0xF8
		UIGrid* rewardGrid; // 0x100
		UISmallParcelCard* parcelPref; // 0x108
		InformationGroupOpen* infoGroupOpen; // 0x110
		Il2CppObject* _RewardParcels; // 0x118
		::MX::Data::TimeAttackDungeonSeasonInfo* _NextSeasonInfo; // 0x120

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetRewards(::MX::Data::TimeAttackDungeonData* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonData*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_SETREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetGeasIcons(::MX::Data::TimeAttackDungeonData* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonData*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_SETGEASICONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_ONBACK_OFFSET))(nullptr);
		}

		::System::Void SetInfoGroup(::MX::Data::Excel::TimeAttackDungeonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::TimeAttackDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_SETINFOGROUP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_SETUI_OFFSET))(nullptr);
		}

		::System::Void CreateRewardParcels(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_CREATEREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void SetType(::MX::Data::TimeAttackDungeonData* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonData*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKNEXTSEASON_SETTYPE_OFFSET))(arg, nullptr);
		}

	};

