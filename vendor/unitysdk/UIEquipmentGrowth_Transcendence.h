#pragma once
#include "unitysdk.h"

class UIEquipmentNormalGrowth;
class UITexture;
class UIEquipmentInfo;
class UILabel;
class MXToggle;
class MXButton;
namespace UnityEngine { class GameObject; }
class EquipmentObject;
class UIBatchModeConsumeItem;
class UIGrid;
class UIScrollView;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEQUIPMENTGROWTH_TRANSCENDENCE_LEVELUPRENEWAL_OFFSET UNITYSDK_OFFSET(0x240A350)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x240A3F0)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE__ONCLICKTRANSCENDENCE_G__REQUESTSTART|47_0_OFFSET UNITYSDK_OFFSET(0x240A4D0)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_GET_SLOTPARCELS_OFFSET UNITYSDK_OFFSET(0x240A660)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_GET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x240A750)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x240A760)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_ONCHANGEPIECECALCULATED_OFFSET UNITYSDK_OFFSET(0x240A960)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_SET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x240AAF0)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_USESELECTIONONCHANGED_OFFSET UNITYSDK_OFFSET(0x240AB00)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_SETDATA_OFFSET UNITYSDK_OFFSET(0x240BE60)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_LOADRECIPE_OFFSET UNITYSDK_OFFSET(0x240ABE0)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_HANDLETIERUP_OFFSET UNITYSDK_OFFSET(0x240D2D0)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_SETEQUIPMENTDISPLAY_OFFSET UNITYSDK_OFFSET(0x240C340)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_ONCLICKTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x240D4C0)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_HANDLESYNCEQUIPMENTLIST_OFFSET UNITYSDK_OFFSET(0x240D6A0)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_SET_SLOTPARCELS_OFFSET UNITYSDK_OFFSET(0x240DA40)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x240DA60)
#define UIEQUIPMENTGROWTH_TRANSCENDENCE_AWAKE_OFFSET UNITYSDK_OFFSET(0x240DBE0)

	inline static constexpr unsigned int UIEquipmentGrowth_Transcendence_TypeDefinitionIndex = 5460;

	class UIEquipmentGrowth_Transcendence : public Il2CppObject
	{
	public:
		UIEquipmentNormalGrowth* equipmentGrowth; // 0x18
		UITexture* LeftEquipTexture; // 0x20
		UIEquipmentInfo* LeftEquipmentInfo; // 0x28
		UITexture* RightEquipTexture; // 0x30
		UIEquipmentInfo* RightEquipmentInfo; // 0x38
		::Il2CppArray<::System::Object*>* LeftStats; // 0x40
		::Il2CppArray<::System::Object*>* RightStats; // 0x48
		UILabel* NotEnoughLabel; // 0x50
		UILabel* CostText; // 0x58
		MXToggle* UseSelectionItemToggle; // 0x60
		MXButton* UpGradeButton; // 0x68
		::UnityEngine::GameObject* UpGradeButtonDisable; // 0x70
		::UnityEngine::GameObject* UpGradeEffect; // 0x78
		UITexture* EffectTexture; // 0x80
		UILabel* EffectCurTier; // 0x88
		UILabel* EffectNextTier; // 0x90
		Il2CppObject* EffectSlot; // 0x98
		Il2CppObject* EffectLight; // 0xA0
		::UnityEngine::GameObject* MaxNotice; // 0xA8
		Il2CppObject* MaxTierUpDisableDisplay; // 0xB0
		::Il2CppArray<::System::Object*>* EstimationStats; // 0xB8
		Il2CppObject* consumeTable; // 0xC0
		EquipmentObject* equipmentToGrow; // 0xC8
		::System::Int32 slotIndex; // 0xD0
		::System::Int64 boundCharacterServerId; // 0xD8
		::System::Boolean _UseSelectionItem_k__BackingField; // 0xE0
		Il2CppObject* ingredients; // 0xE8
		Il2CppObject* replaceInfos; // 0xF0
		Il2CppObject* items; // 0xF8
		Il2CppObject* changePieceInfos; // 0x100
		Il2CppObject* onChangePieceCalculated; // 0x108
		UIBatchModeConsumeItem* ingredientPrefab; // 0x110
		UIGrid* grid; // 0x118
		UIScrollView* RecipeScrollView; // 0x120

		::System::Collections::IEnumerator* LevelUpRenewal(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_LEVELUPRENEWAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickTranscendence_g__RequestStart|47_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE__ONCLICKTRANSCENDENCE_G__REQUESTSTART|47_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_SlotParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_GET_SLOTPARCELS_OFFSET))(nullptr);
		}

		::System::Boolean get_UseSelectionItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_GET_USESELECTIONITEM_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnChangePieceCalculated(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_ONCHANGEPIECECALCULATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_UseSelectionItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_SET_USESELECTIONITEM_OFFSET))(arg, nullptr);
		}

		::System::Void UseSelectionOnChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_USESELECTIONONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadRecipe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_LOADRECIPE_OFFSET))(nullptr);
		}

		::System::Boolean HandleTierUp(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_HANDLETIERUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetEquipmentDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_SETEQUIPMENTDISPLAY_OFFSET))(nullptr);
		}

		::System::Void OnClickTranscendence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_ONCLICKTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Boolean HandleSyncEquipmentList(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_HANDLESYNCEQUIPMENTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_SET_SLOTPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_TRANSCENDENCE_AWAKE_OFFSET))(nullptr);
		}

	};

