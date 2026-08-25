#pragma once
#include "unitysdk.h"

class UISprite;
class MXButton;
class TooltipButton;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class BattlePassTask;

#define UIBATTLEPASSFEATUREDREWARD_ONCLICKFEATUREDREWARD_OFFSET UNITYSDK_OFFSET(0x2241200)
#define UIBATTLEPASSFEATUREDREWARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2241410)
#define UIBATTLEPASSFEATUREDREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2241860)
#define UIBATTLEPASSFEATUREDREWARD_GET_TASK_OFFSET UNITYSDK_OFFSET(0x2241820)

	inline static constexpr unsigned int UIBattlePassFeaturedReward_TypeDefinitionIndex = 4487;

	class UIBattlePassFeaturedReward : public Il2CppObject
	{
	public:
		UISprite* Sprite; // 0x18
		MXButton* InfoButton; // 0x20
		TooltipButton* TooltipButton; // 0x28
		::MX::GameLogic::Parcel::ParcelInfo* featuredReward; // 0x30

		::System::Void OnClickFeaturedReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSFEATUREDREWARD_ONCLICKFEATUREDREWARD_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSFEATUREDREWARD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSFEATUREDREWARD_.CTOR_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSFEATUREDREWARD_GET_TASK_OFFSET))(nullptr);
		}

	};

