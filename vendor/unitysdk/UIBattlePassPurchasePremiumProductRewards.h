#pragma once
#include "unitysdk.h"

class UIEmblemParcel;
class BattlePassTask;

#define UIBATTLEPASSPURCHASEPREMIUMPRODUCTREWARDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x224AF60)
#define UIBATTLEPASSPURCHASEPREMIUMPRODUCTREWARDS_GET_TASK_OFFSET UNITYSDK_OFFSET(0x224AF70)
#define UIBATTLEPASSPURCHASEPREMIUMPRODUCTREWARDS_SETUP_OFFSET UNITYSDK_OFFSET(0x224AFB0)
#define UIBATTLEPASSPURCHASEPREMIUMPRODUCTREWARDS__SETUP_G__SETREWARDS|4_0_OFFSET UNITYSDK_OFFSET(0x224B030)

	inline static constexpr unsigned int UIBattlePassPurchasePremiumProductRewards_TypeDefinitionIndex = 4513;

	class UIBattlePassPurchasePremiumProductRewards : public Il2CppObject
	{
	public:
		UIEmblemParcel* Emblem; // 0x18
		::Il2CppArray<::System::Object*>* Rewards; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPREMIUMPRODUCTREWARDS_.CTOR_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPREMIUMPRODUCTREWARDS_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void Setup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPREMIUMPRODUCTREWARDS_SETUP_OFFSET))(nullptr);
		}

		::System::Void _Setup_g__SetRewards|4_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPREMIUMPRODUCTREWARDS__SETUP_G__SETREWARDS|4_0_OFFSET))(nullptr);
		}

	};

