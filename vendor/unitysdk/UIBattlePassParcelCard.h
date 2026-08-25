#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class TweenScale;
namespace UnityEngine { class GameObject; }
class TooltipButton;
class UIDragScrollView;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIBATTLEPASSPARCELCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x224C150)
#define UIBATTLEPASSPARCELCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x224C160)
#define UIBATTLEPASSPARCELCARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x224C230)
#define UIBATTLEPASSPARCELCARD_INIT_OFFSET UNITYSDK_OFFSET(0x224C300)
#define UIBATTLEPASSPARCELCARD_GET_TOOLTIPBUTTON_OFFSET UNITYSDK_OFFSET(0x224C1A0)
#define UIBATTLEPASSPARCELCARD_SETLOCK_OFFSET UNITYSDK_OFFSET(0x224C550)

	inline static constexpr unsigned int UIBattlePassParcelCard_TypeDefinitionIndex = 4516;

	class UIBattlePassParcelCard : public Il2CppObject
	{
	public:
		UITexture* Texture; // 0x18
		UILabel* CountLabel; // 0x20
		TweenScale* CanReceiveRewardTween; // 0x28
		::UnityEngine::GameObject* CanReceiveReward; // 0x30
		::UnityEngine::GameObject* Lock; // 0x38
		TooltipButton* tooltipButton; // 0x40
		UIDragScrollView* dragScrollView; // 0x48
		::System::Boolean canReceiveReward; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPARCELCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPARCELCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPARCELCARD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Init(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPARCELCARD_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		TooltipButton* get_TooltipButton()
		{
			return ((TooltipButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPARCELCARD_GET_TOOLTIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetLock(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPARCELCARD_SETLOCK_OFFSET))(arg, nullptr);
		}

	};

