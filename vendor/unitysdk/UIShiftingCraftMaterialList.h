#pragma once
#include "unitysdk.h"

class UIShiftingCraftNode;
class InventoryScrollViewController;
class UICraftSort;
class UIGrid;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class UISprite;
class TooltipButton;
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class ParcelType; }

#define UISHIFTINGCRAFTMATERIALLIST_HANDLECLICKEXPENDABLESMESSAGE_OFFSET UNITYSDK_OFFSET(0x23AAD40)
#define UISHIFTINGCRAFTMATERIALLIST_ASSETCONSUMPTION_OFFSET UNITYSDK_OFFSET(0x23AB010)
#define UISHIFTINGCRAFTMATERIALLIST_ONCLICKRECIPERECIPERESELECTION_OFFSET UNITYSDK_OFFSET(0x23ABAB0)
#define UISHIFTINGCRAFTMATERIALLIST_GET_CANCRAFTCOUNT_OFFSET UNITYSDK_OFFSET(0x23ABD90)
#define UISHIFTINGCRAFTMATERIALLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x23ABDA0)
#define UISHIFTINGCRAFTMATERIALLIST_SETCRAFTCOMPLETESTATE_OFFSET UNITYSDK_OFFSET(0x23AA590)
#define UISHIFTINGCRAFTMATERIALLIST_ONSORT_OFFSET UNITYSDK_OFFSET(0x23AC2D0)
#define UISHIFTINGCRAFTMATERIALLIST_FILLCONSUMEDATA_OFFSET UNITYSDK_OFFSET(0x23AB650)
#define UISHIFTINGCRAFTMATERIALLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23AC7F0)
#define UISHIFTINGCRAFTMATERIALLIST_GET_RECORDMATERIALDATAS_OFFSET UNITYSDK_OFFSET(0x23AC970)
#define UISHIFTINGCRAFTMATERIALLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x23AC980)
#define UISHIFTINGCRAFTMATERIALLIST_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x23ACB20)
#define UISHIFTINGCRAFTMATERIALLIST_ONCLICKSTARTCRAFT_OFFSET UNITYSDK_OFFSET(0x23AE080)
#define UISHIFTINGCRAFTMATERIALLIST_RESETDATA_OFFSET UNITYSDK_OFFSET(0x23ABB50)
#define UISHIFTINGCRAFTMATERIALLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23AE600)
#define UISHIFTINGCRAFTMATERIALLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x23A9F60)

	inline static constexpr unsigned int UIShiftingCraftMaterialList_TypeDefinitionIndex = 5211;

	class UIShiftingCraftMaterialList : public Il2CppObject
	{
	public:
		UIShiftingCraftNode* node; // 0x18
		InventoryScrollViewController* inventoryScrollViewController; // 0x20
		UICraftSort* craftSort; // 0x28
		UIGrid* grid; // 0x30
		UILabel* costLabel; // 0x38
		MXButton* recipeReselectionBtn; // 0x40
		MXButton* startCraftBtn; // 0x48
		::UnityEngine::GameObject* disableStartCraftBtn; // 0x50
		UILabel* keyStoneLabel; // 0x58
		::UnityEngine::GameObject* noHasFavoriteListMessage; // 0x60
		UISprite* keyStoneImage; // 0x68
		TooltipButton* shortcutButton; // 0x70
		::System::Int64 totalExp; // 0x78
		Il2CppObject* consumeItem; // 0x80
		Il2CppObject* consumeEquipment; // 0x88
		Il2CppObject* consumeFurniture; // 0x90
		Il2CppObject* materials; // 0x98
		Il2CppObject* recordMaterialDatas; // 0xA0
		::MX::Data::ShiftingCraftRecipeExcelInfo* recipeInfo; // 0xA8
		::System::Int64 slotId; // 0xB0
		::System::Int64 canCraftCount; // 0xB8
		::System::Int32 columnCount; // 0x0
		UISprite* costSprite; // 0xC0
		::System::Boolean isInputItem; // 0xC8

		::System::Boolean HandleClickExpendablesMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_HANDLECLICKEXPENDABLESMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void AssetConsumption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_ASSETCONSUMPTION_OFFSET))(nullptr);
		}

		::System::Void OnClickRecipeRecipeReselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_ONCLICKRECIPERECIPERESELECTION_OFFSET))(nullptr);
		}

		::System::Int64 get_CanCraftCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_GET_CANCRAFTCOUNT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetCraftCompleteState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_SETCRAFTCOMPLETESTATE_OFFSET))(nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_ONSORT_OFFSET))(arg, nullptr);
		}

		::System::Void FillConsumeData(Il2CppObject* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_FILLCONSUMEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_RecordMaterialDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_GET_RECORDMATERIALDATAS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_REFRESHMATERIAL_OFFSET))(nullptr);
		}

		::System::Void OnClickStartCraft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_ONCLICKSTARTCRAFT_OFFSET))(nullptr);
		}

		::System::Void ResetData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_RESETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::ShiftingCraftRecipeExcelInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTMATERIALLIST_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

