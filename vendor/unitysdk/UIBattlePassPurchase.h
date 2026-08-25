#pragma once
#include "unitysdk.h"

class MXButton;
class UIBattlePassPurchaseProduct;
class UIBattlePassPurchasePremiumProductRewards;
class UITexture;
class UILabel;
class BattlePassTask;

#define UIBATTLEPASSPURCHASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2249930)
#define UIBATTLEPASSPURCHASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2249940)
#define UIBATTLEPASSPURCHASE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2249B10)
#define UIBATTLEPASSPURCHASE___N__0_OFFSET UNITYSDK_OFFSET(0x2249B80)
#define UIBATTLEPASSPURCHASE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2249B90)
#define UIBATTLEPASSPURCHASE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x224AB70)
#define UIBATTLEPASSPURCHASE_SETUPPRODUCTS_OFFSET UNITYSDK_OFFSET(0x2249C70)
#define UIBATTLEPASSPURCHASE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x2249C30)
#define UIBATTLEPASSPURCHASE_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x224AC00)

	inline static constexpr unsigned int UIBattlePassPurchase_TypeDefinitionIndex = 4511;

	class UIBattlePassPurchase : public Il2CppObject
	{
	public:
		MXButton* BackButton; // 0xD8
		UIBattlePassPurchaseProduct* Product1; // 0xE0
		UIBattlePassPurchaseProduct* Product2; // 0xE8
		UIBattlePassPurchasePremiumProductRewards* PremiumProductRewards; // 0xF0
		UITexture* SeasonProductTexture; // 0xF8
		UILabel* PremiumProductDescriptionLabel; // 0x100
		UILabel* noticeBattlePassExpirationDateLabel; // 0x108
		UILabel* noticeBattlePassExpirationDateLabelGlobal; // 0x110

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetupProducts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE_SETUPPRODUCTS_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void OnPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASE_ONPURCHASE_OFFSET))(nullptr);
		}

	};

