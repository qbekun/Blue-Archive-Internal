#pragma once
#include "unitysdk.h"

class UIParcelCard;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }
namespace MX::SaveData { class ShiftingCraftRecipeFavorites; }

#define UICRAFTRECIPELISTITEM_ONCLICKFAVORITES_OFFSET UNITYSDK_OFFSET(0x23961A0)
#define UICRAFTRECIPELISTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x23962E0)
#define UICRAFTRECIPELISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2396570)
#define UICRAFTRECIPELISTITEM_ONCLICKRECIPE_OFFSET UNITYSDK_OFFSET(0x23965B0)
#define UICRAFTRECIPELISTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x2396660)

	inline static constexpr unsigned int UICraftRecipeListItem_TypeDefinitionIndex = 5169;

	class UICraftRecipeListItem : public ::System::Xml::Serialization::XmlTypeSerializationSource
	{
	public:
		UIParcelCard* parcel; // 0x28
		UILabel* recipeName; // 0x30
		MXButton* selectBtn; // 0x38
		::UnityEngine::GameObject* favoritesIcon; // 0x40
		MXButton* favoritesButton; // 0x48
		::MX::Data::ShiftingCraftRecipeExcelInfo* recipeData; // 0x50
		::MX::SaveData::ShiftingCraftRecipeFavorites* recipeFavoriteSaveData; // 0x58

		::System::Void OnClickFavorites()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTRECIPELISTITEM_ONCLICKFAVORITES_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTRECIPELISTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTRECIPELISTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickRecipe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTRECIPELISTITEM_ONCLICKRECIPE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTRECIPELISTITEM_SETDATA_OFFSET))(arg, nullptr);
		}

	};

