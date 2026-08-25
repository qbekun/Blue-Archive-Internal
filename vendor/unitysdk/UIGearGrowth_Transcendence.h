#pragma once
#include "unitysdk.h"

class UIEquipmentNormalGrowth;
class UIScrollView;
class UIGearInfo;
class UIGearOption;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class MXToggle;
class UIGrid;
class GearObject;
class UIBatchModeConsumeItem;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class GearOptionDataInfo; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIGEARGROWTH_TRANSCENDENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2412950)
#define UIGEARGROWTH_TRANSCENDENCE_HANDLETIERUP_OFFSET UNITYSDK_OFFSET(0x2412960)
#define UIGEARGROWTH_TRANSCENDENCE__SETDATA_B__32_0_OFFSET UNITYSDK_OFFSET(0x2412B50)
#define UIGEARGROWTH_TRANSCENDENCE_LOADRECIPE_OFFSET UNITYSDK_OFFSET(0x2412BB0)
#define UIGEARGROWTH_TRANSCENDENCE_LEVELUPRENEWAL_OFFSET UNITYSDK_OFFSET(0x2412AE0)
#define UIGEARGROWTH_TRANSCENDENCE_SET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x2413FF0)
#define UIGEARGROWTH_TRANSCENDENCE_GET_SLOTPARCELS_OFFSET UNITYSDK_OFFSET(0x2413D60)
#define UIGEARGROWTH_TRANSCENDENCE_SETMAXSTATE_OFFSET UNITYSDK_OFFSET(0x2414000)
#define UIGEARGROWTH_TRANSCENDENCE_GET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x2414280)
#define UIGEARGROWTH_TRANSCENDENCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2414290)
#define UIGEARGROWTH_TRANSCENDENCE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2414390)
#define UIGEARGROWTH_TRANSCENDENCE_SET_SLOTPARCELS_OFFSET UNITYSDK_OFFSET(0x24145C0)
#define UIGEARGROWTH_TRANSCENDENCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24145E0)
#define UIGEARGROWTH_TRANSCENDENCE__ONCLICKTIERUP_G__REQUESTSTART|36_0_OFFSET UNITYSDK_OFFSET(0x2414760)
#define UIGEARGROWTH_TRANSCENDENCE_SETDATA_OFFSET UNITYSDK_OFFSET(0x2414890)
#define UIGEARGROWTH_TRANSCENDENCE_SETSLOTPARCELS_OFFSET UNITYSDK_OFFSET(0x2413E50)
#define UIGEARGROWTH_TRANSCENDENCE_ONCLICKTIERUP_OFFSET UNITYSDK_OFFSET(0x2415640)
#define UIGEARGROWTH_TRANSCENDENCE_USESELECTIONONCHANGED_OFFSET UNITYSDK_OFFSET(0x2415820)

	inline static constexpr unsigned int UIGearGrowth_Transcendence_TypeDefinitionIndex = 5471;

	class UIGearGrowth_Transcendence : public Il2CppObject
	{
	public:
		UIEquipmentNormalGrowth* equipmentGrowth; // 0x18
		UIScrollView* scrollView; // 0x20
		UIGearInfo* gearInfo; // 0x28
		UIGearOption* option; // 0x30
		UILabel* costLebel; // 0x38
		::UnityEngine::GameObject* upGradeLockButtonDisable; // 0x40
		::UnityEngine::GameObject* upGradeButtonDisable; // 0x48
		MXButton* upGradeButton; // 0x50
		UILabel* openFavorRankLabel; // 0x58
		UILabel* openFavorRankBtnLabel; // 0x60
		::UnityEngine::GameObject* effect; // 0x68
		UILabel* notEnoughLabel; // 0x70
		MXToggle* UseSelectionItemToggle; // 0x78
		Il2CppObject* ifMaxTierDisableObjs; // 0x80
		Il2CppObject* ifMaxTierEnableObjs; // 0x88
		UIGrid* tierObjGrid; // 0x90
		UIGrid* grid; // 0x98
		GearObject* gear; // 0xA0
		::System::Boolean _UseSelectionItem_k__BackingField; // 0xA8
		Il2CppObject* ingredients; // 0xB0
		Il2CppObject* replaceInfos; // 0xB8
		Il2CppObject* items; // 0xC0
		UIBatchModeConsumeItem* ingredientPrefab; // 0xC8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleTierUp(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_HANDLETIERUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetData_b__32_0(::MX::Data::GearOptionDataInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::GearOptionDataInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE__SETDATA_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void LoadRecipe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_LOADRECIPE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* LevelUpRenewal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_LEVELUPRENEWAL_OFFSET))(nullptr);
		}

		::System::Void set_UseSelectionItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_SET_USESELECTIONITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SlotParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_GET_SLOTPARCELS_OFFSET))(nullptr);
		}

		::System::Void SetMaxState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_SETMAXSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseSelectionItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_GET_USESELECTIONITEM_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_SlotParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_SET_SLOTPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _OnClickTierUp_g__RequestStart|36_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE__ONCLICKTIERUP_G__REQUESTSTART|36_0_OFFSET))(nullptr);
		}

		::System::Void SetData(GearObject* arg)
		{
			((::System::Void(*)(GearObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetSlotParcels(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_SETSLOTPARCELS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickTierUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_ONCLICKTIERUP_OFFSET))(nullptr);
		}

		::System::Void UseSelectionOnChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARGROWTH_TRANSCENDENCE_USESELECTIONONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

