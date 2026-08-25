#pragma once
#include "unitysdk.h"

class InventoryScrollViewController;
class UIEquipmentNormalGrowth;
class UIEquipmentInfo;
class UILabel;
class UISlider;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIGrid;
class EquipmentObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIEquipmentExpExpendables;
class AssetObjectBase;

#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_HANDLEEQUIPMENTLEVELUP_OFFSET UNITYSDK_OFFSET(0x2405E20)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_GET_ESTIMATEDLEVEL_OFFSET UNITYSDK_OFFSET(0x2406000)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x2406010)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION__ONCLICKAUTOSELECT_B__48_1_OFFSET UNITYSDK_OFFSET(0x24062D0)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_GET_ASSETOBJECTTOGROW_OFFSET UNITYSDK_OFFSET(0x2406340)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2406350)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_ONCLICKLEVELUP_OFFSET UNITYSDK_OFFSET(0x24063D0)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_CANADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x2406B70)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_UPDATEESTIMATEDSTATCHANGED_OFFSET UNITYSDK_OFFSET(0x2406C60)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2406FE0)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_HANDLECLICKEXPENDABLESMESSAGE_OFFSET UNITYSDK_OFFSET(0x2407160)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2407D20)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_SETACTIVEAUTOSELECTUI_OFFSET UNITYSDK_OFFSET(0x2407F20)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_GET_INGREDIENTDICT_OFFSET UNITYSDK_OFFSET(0x2408820)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_SET_LEVELUPCOSTTABLE_OFFSET UNITYSDK_OFFSET(0x2408830)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_SETUI_OFFSET UNITYSDK_OFFSET(0x24072D0)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_ONCLICKAUTOSELECT_OFFSET UNITYSDK_OFFSET(0x2408850)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_GET_LEVELUPCOSTTABLE_OFFSET UNITYSDK_OFFSET(0x2408C60)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_LEVELUPRENEWAL_OFFSET UNITYSDK_OFFSET(0x2405F70)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x2408C90)
#define UIEQUIPMENTGROWTH_LEVELUPESTIMATION_SETDATA_OFFSET UNITYSDK_OFFSET(0x2409860)

	inline static constexpr unsigned int UIEquipmentGrowth_LevelUpEstimation_TypeDefinitionIndex = 5456;

	class UIEquipmentGrowth_LevelUpEstimation : public Il2CppObject
	{
	public:
		InventoryScrollViewController* scrollViewController; // 0x18
		UIEquipmentNormalGrowth* equipmentGrowth; // 0x20
		Il2CppObject* ExpendableSlotList; // 0x28
		Il2CppObject* ingredientDict; // 0x30
		::System::Int32 columnCount; // 0x0
		UIEquipmentInfo* EquipmentInfo; // 0x38
		UILabel* LevelOriginText; // 0x40
		UILabel* LevelEstimatedText; // 0x48
		UILabel* ExpText; // 0x50
		UILabel* NotEnoughLabel; // 0x58
		UISlider* LevelGaugeCurrent; // 0x60
		::UnityEngine::GameObject* UpGradeEffect; // 0x68
		::UnityEngine::GameObject* NoIngredientToConsume; // 0x70
		UISlider* LevelGaugeEstimated; // 0x78
		Il2CppObject* MaxLevelDisplay; // 0x80
		::UnityEngine::GameObject* MaxLevelGauge; // 0x88
		::Il2CppArray<::System::Object*>* LevelStat_Estimateds; // 0x90
		UILabel* CostText; // 0x98
		MXButton* LevelUpButton; // 0xA0
		MXButton* AutoSelectButton; // 0xA8
		::UnityEngine::GameObject* DisableAutoSelectButton; // 0xB0
		::UnityEngine::GameObject* LevelUpDisableButton; // 0xB8
		::Il2CppArray<::System::Object*>* EstimationStats; // 0xC0
		UIGrid* Grid; // 0xC8
		::System::Int32 levelChanged; // 0xD0
		::System::Int32 slotIndex; // 0xD4
		Il2CppObject* _levelUpCostTable_k__BackingField; // 0xD8
		::System::Int32 estimatedExpTotal; // 0xE0
		::System::Int64 estimatedLevel; // 0xE8
		EquipmentObject* equipToGrow; // 0xF0

		::System::Boolean HandleEquipmentLevelUp(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_HANDLEEQUIPMENTLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EstimatedLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_GET_ESTIMATEDLEVEL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickAutoSelect_b__48_1(UIEquipmentExpExpendables* arg)
		{
			((::System::Void(*)(UIEquipmentExpExpendables*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION__ONCLICKAUTOSELECT_B__48_1_OFFSET))(arg, nullptr);
		}

		AssetObjectBase* get_AssetObjectToGrow()
		{
			return ((AssetObjectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_GET_ASSETOBJECTTOGROW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickLevelUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_ONCLICKLEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean CanAddIngredient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_CANADDINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void UpdateEstimatedStatChanged(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_UPDATEESTIMATEDSTATCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickExpendablesMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_HANDLECLICKEXPENDABLESMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean SetActiveAutoSelectUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_SETACTIVEAUTOSELECTUI_OFFSET))(nullptr);
		}

		Il2CppObject* get_IngredientDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_GET_INGREDIENTDICT_OFFSET))(nullptr);
		}

		::System::Void set_levelUpCostTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_SET_LEVELUPCOSTTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_ONCLICKAUTOSELECT_OFFSET))(nullptr);
		}

		Il2CppObject* get_levelUpCostTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_GET_LEVELUPCOSTTABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* LevelUpRenewal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_LEVELUPRENEWAL_OFFSET))(nullptr);
		}

		::System::Void RefreshMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_REFRESHMATERIAL_OFFSET))(nullptr);
		}

		::System::Void SetData(EquipmentObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(EquipmentObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_LEVELUPESTIMATION_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

