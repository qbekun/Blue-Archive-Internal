#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
class UILabel;
class AssetObjectBase;
class CharacterObject;

#define UIEQUIPMENTBATCHGROWTHEFFECTSLOT_SETRESULTDATA_OFFSET UNITYSDK_OFFSET(0x23FD870)
#define UIEQUIPMENTBATCHGROWTHEFFECTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23FDBB0)
#define UIEQUIPMENTBATCHGROWTHEFFECTSLOT_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x23FDBC0)

	inline static constexpr unsigned int UIEquipmentBatchGrowthEffectSlot_TypeDefinitionIndex = 5438;

	class UIEquipmentBatchGrowthEffectSlot : public Il2CppObject
	{
	public:
		UITexture* texture; // 0x18
		::UnityEngine::GameObject* levelUpUI; // 0x20
		::UnityEngine::GameObject* TierUpUILabelObject; // 0x28
		UILabel* afterTierLabel; // 0x30
		UILabel* curTierLabel; // 0x38
		UILabel* noTierUpLabel; // 0x40
		::System::Boolean isEquipped; // 0x48
		::System::Int64 preTier; // 0x50
		::System::Int64 prelevel; // 0x58
		::System::Int64 preExp; // 0x60
		AssetObjectBase* assetObject; // 0x68
		::System::Int32 gearIndex; // 0x0

		::System::Void SetResultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTHEFFECTSLOT_SETRESULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTHEFFECTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialized(CharacterObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(CharacterObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTHEFFECTSLOT_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

	};

