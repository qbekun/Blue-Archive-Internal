#pragma once
#include "unitysdk.h"

class StageOpenConditionController;
namespace MX::Data { class CampaignStageInfo; }
namespace UnityEngine { class Vector3; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define UISTAGESELECTITEMACTIVE_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xB24BE0)
#define UISTAGESELECTITEMACTIVE_CHANGEUNLOCKANIMATIONCLIPTOFADEINEX_OFFSET UNITYSDK_OFFSET(0xB30660)
#define UISTAGESELECTITEMACTIVE_DISAPPEAR_OFFSET UNITYSDK_OFFSET(0xB24140)
#define UISTAGESELECTITEMACTIVE_PLAYCLEARANIMATION_OFFSET UNITYSDK_OFFSET(0xB235F0)
#define UISTAGESELECTITEMACTIVE_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xB306B0)
#define UISTAGESELECTITEMACTIVE_MOVEUP_OFFSET UNITYSDK_OFFSET(0xB241E0)
#define UISTAGESELECTITEMACTIVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB206D0)
#define UISTAGESELECTITEMACTIVE_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xB306C0)
#define UISTAGESELECTITEMACTIVE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xB306D0)
#define UISTAGESELECTITEMACTIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB306E0)
#define UISTAGESELECTITEMACTIVE_CHECKLOCKOBJECTACTIVATION_OFFSET UNITYSDK_OFFSET(0xB21EE0)
#define UISTAGESELECTITEMACTIVE_CHECKNEWSTAGEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB22820)
#define UISTAGESELECTITEMACTIVE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xB306F0)

	inline static constexpr unsigned int UIStageSelectItemActive_TypeDefinitionIndex = 8285;

	class UIStageSelectItemActive : public Il2CppObject
	{
	public:
		StageOpenConditionController* stageOpenConditionController; // 0x18
		::Il2CppArray<::System::Object*>* ItemList; // 0x20
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x28
		::System::Boolean _isOpen_k__BackingField; // 0x30

		::System::Single PlayUnlockAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void ChangeUnlockAnimationClipToFadeInEx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_CHANGEUNLOCKANIMATIONCLIPTOFADEINEX_OFFSET))(nullptr);
		}

		::System::Single Disappear()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_DISAPPEAR_OFFSET))(nullptr);
		}

		::System::Single PlayClearAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_PLAYCLEARANIMATION_OFFSET))(nullptr);
		}

		::System::Boolean get_isOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Single MoveUp(::System::Single arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_MOVEUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_isOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckLockObjectActivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_CHECKLOCKOBJECTACTIVATION_OFFSET))(nullptr);
		}

		::System::Boolean CheckNewStageUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_CHECKNEWSTAGEUNLOCKED_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECTITEMACTIVE_GET_STAGEINFO_OFFSET))(nullptr);
		}

	};

