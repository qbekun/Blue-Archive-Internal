#pragma once
#include "unitysdk.h"

class BattlePassProductObject;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class BattlePassTask;

#define UIBATTLEPASSPURCHASEPRODUCT__ONCLICKPURCHASE_B__14_2_OFFSET UNITYSDK_OFFSET(0x224B350)
#define UIBATTLEPASSPURCHASEPRODUCT_ONCLICKPURCHASE_OFFSET UNITYSDK_OFFSET(0x224B480)
#define UIBATTLEPASSPURCHASEPRODUCT_SETUP_OFFSET UNITYSDK_OFFSET(0x224B900)
#define UIBATTLEPASSPURCHASEPRODUCT_GET_TASK_OFFSET UNITYSDK_OFFSET(0x224B8C0)
#define UIBATTLEPASSPURCHASEPRODUCT_AWAKE_OFFSET UNITYSDK_OFFSET(0x224BE10)
#define UIBATTLEPASSPURCHASEPRODUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x224BF30)

	inline static constexpr unsigned int UIBattlePassPurchaseProduct_TypeDefinitionIndex = 4515;

	class UIBattlePassPurchaseProduct : public Il2CppObject
	{
	public:
		BattlePassProductObject* data; // 0x18
		::System::Boolean hasAnyBattlePassInMailPurchase; // 0x20
		UILabel* PriceLabel; // 0x28
		MXButton* PurchaseButton; // 0x30
		::UnityEngine::GameObject* PurchaseAbleWidget1; // 0x38
		::UnityEngine::GameObject* PurchaseAbleWidget2; // 0x40
		::UnityEngine::GameObject* PurchaseCompleteWidget; // 0x48
		UILabel* costCodeLabel; // 0x50
		::UnityEngine::GameObject* purchaseItemInMail; // 0x58
		UILabel* WaitIndicatorLabel; // 0x60

		::System::Void _OnClickPurchase_b__14_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPRODUCT__ONCLICKPURCHASE_B__14_2_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPRODUCT_ONCLICKPURCHASE_OFFSET))(nullptr);
		}

		::System::Void Setup(BattlePassProductObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(BattlePassProductObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPRODUCT_SETUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPRODUCT_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPRODUCT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPRODUCT_.CTOR_OFFSET))(nullptr);
		}

	};

