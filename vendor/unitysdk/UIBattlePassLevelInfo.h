#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class UISlider;
namespace UnityEngine { class ParticleSystem; }
namespace MX::Audio { class AudioPlayer; }
namespace UnityEngine { class AudioSource; }
class BattlePassTask;
class BattlePassPurchasedLevelMessage;
class BattlePassObject;
class BattlePassMissionRewardResponseMessage;

#define UIBATTLEPASSLEVELINFO_ANIMATEEXPGAINS_OFFSET UNITYSDK_OFFSET(0x22418B0)
#define UIBATTLEPASSLEVELINFO_LEVELUP_OFFSET UNITYSDK_OFFSET(0x2241940)
#define UIBATTLEPASSLEVELINFO_PLAYPREMIUMPURCHASELEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0x2241EB0)
#define UIBATTLEPASSLEVELINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22420F0)
#define UIBATTLEPASSLEVELINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x22422C0)
#define UIBATTLEPASSLEVELINFO_ONCLICKBUYLEVEL_OFFSET UNITYSDK_OFFSET(0x2242440)
#define UIBATTLEPASSLEVELINFO_GET_MAXEXPFORNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0x2242590)
#define UIBATTLEPASSLEVELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x22425E0)
#define UIBATTLEPASSLEVELINFO_SETANIMATEDVALUE_OFFSET UNITYSDK_OFFSET(0x2241A30)
#define UIBATTLEPASSLEVELINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22426E0)
#define UIBATTLEPASSLEVELINFO_GET_TASK_OFFSET UNITYSDK_OFFSET(0x22419F0)
#define UIBATTLEPASSLEVELINFO_PLAYGAINEXPANIMATION_OFFSET UNITYSDK_OFFSET(0x2241FC0)
#define UIBATTLEPASSLEVELINFO_ONPURCHASEDLEVEL_OFFSET UNITYSDK_OFFSET(0x2242820)
#define UIBATTLEPASSLEVELINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2242890)
#define UIBATTLEPASSLEVELINFO_UPDATEEXPBAR_OFFSET UNITYSDK_OFFSET(0x2242F30)
#define UIBATTLEPASSLEVELINFO_GET_SERVERDATA_OFFSET UNITYSDK_OFFSET(0x2242690)
#define UIBATTLEPASSLEVELINFO_SETREALVALUE_OFFSET UNITYSDK_OFFSET(0x2242950)
#define UIBATTLEPASSLEVELINFO_ONCOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0x2242F40)
#define UIBATTLEPASSLEVELINFO_ONREACHEDMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x2243430)

	inline static constexpr unsigned int UIBattlePassLevelInfo_TypeDefinitionIndex = 4490;

	class UIBattlePassLevelInfo : public Il2CppObject
	{
	public:
		UILabel* LevelLabel; // 0x18
		UILabel* WeeklyExpLimitLabel; // 0x20
		MXButton* BuyLevelButton; // 0x28
		::UnityEngine::GameObject* NormalExp; // 0x30
		::UnityEngine::GameObject* MaxExp; // 0x38
		UISlider* NormalExpSlider; // 0x40
		UILabel* NormalExpLabel; // 0x48
		::UnityEngine::ParticleSystem* LevelUpFX; // 0x50
		::MX::Audio::AudioPlayer* LevelUpSFX; // 0x58
		::UnityEngine::AudioSource* GaugeUpSFX; // 0x60
		::System::Single GaugeUpSFXFadeOutTime; // 0x68
		::System::Int32 currentLevel; // 0x6C
		::System::Single currentExp; // 0x70
		Il2CppObject* pendingExpGains; // 0x78
		::System::Boolean isAnimating; // 0x80
		::System::Single minAnimationDuration; // 0x84
		::System::Single maxAnimationDuration; // 0x88
		::System::Single expGainThreshold; // 0x8C

		::System::Collections::IEnumerator* AnimateExpGains()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_ANIMATEEXPGAINS_OFFSET))(nullptr);
		}

		::System::Void LevelUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_LEVELUP_OFFSET))(nullptr);
		}

		::System::Void PlayPremiumPurchaseLevelUpAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_PLAYPREMIUMPURCHASELEVELUPANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickBuyLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_ONCLICKBUYLEVEL_OFFSET))(nullptr);
		}

		::System::Single get_MaxExpForNextLevel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_GET_MAXEXPFORNEXTLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetAnimatedValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_SETANIMATEDVALUE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_ONENABLE_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void PlayGainExpAnimation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_PLAYGAINEXPANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnPurchasedLevel(BattlePassPurchasedLevelMessage* arg)
		{
			return ((::System::Boolean(*)(BattlePassPurchasedLevelMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_ONPURCHASEDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void UpdateExpBar(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_UPDATEEXPBAR_OFFSET))(arg, nullptr);
		}

		BattlePassObject* get_ServerData()
		{
			return ((BattlePassObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_GET_SERVERDATA_OFFSET))(nullptr);
		}

		::System::Void SetRealValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_SETREALVALUE_OFFSET))(nullptr);
		}

		::System::Boolean OnCompleteMission(BattlePassMissionRewardResponseMessage* arg)
		{
			return ((::System::Boolean(*)(BattlePassMissionRewardResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_ONCOMPLETEMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnReachedMaxLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLEVELINFO_ONREACHEDMAXLEVEL_OFFSET))(nullptr);
		}

	};

