#pragma once
#include "unitysdk.h"

class UIDragScrollView;
class MXButton;
class UISprite;
class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIGrid;
class SortingRule;
class CollectionUnitObjectBase;
class UICharacterCollectionPopulator;

#define UICHARACTERCOLLECTIONUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x22B9A80)
#define UICHARACTERCOLLECTIONUNIT_ONDETAILBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x22B9CC0)
#define UICHARACTERCOLLECTIONUNIT_ONCLICKFAVORITE_OFFSET UNITYSDK_OFFSET(0x22B9D80)
#define UICHARACTERCOLLECTIONUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22B9F60)
#define UICHARACTERCOLLECTIONUNIT_SETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x22B8F90)
#define UICHARACTERCOLLECTIONUNIT__ONDETAILBUTTONCLICKED_B__33_0_OFFSET UNITYSDK_OFFSET(0x22B9F70)
#define UICHARACTERCOLLECTIONUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22B86B0)
#define UICHARACTERCOLLECTIONUNIT_GETISINCOLLECTION_OFFSET UNITYSDK_OFFSET(0x22BA8E0)

	inline static constexpr unsigned int UICharacterCollectionUnit_TypeDefinitionIndex = 4783;

	class UICharacterCollectionUnit : public Il2CppObject
	{
	public:
		UIDragScrollView* dragScrollView; // 0x18
		MXButton* detailButton; // 0x20
		UISprite* disableCover; // 0x28
		UITexture* characterTexture; // 0x30
		UILabel* nameLabel; // 0x38
		UILabel* sortLabel; // 0x40
		::UnityEngine::GameObject* sortLabelBg; // 0x48
		UIGrid* starGradeGrid; // 0x50
		::Il2CppArray<::System::Object*>* stars; // 0x58
		UIGrid* weaponGradesGrid; // 0x60
		::Il2CppArray<::System::Object*>* weaponGrades; // 0x68
		::UnityEngine::GameObject* redDot; // 0x70
		::UnityEngine::GameObject* weaponMark; // 0x78
		::UnityEngine::GameObject* roleGroup; // 0x80
		UISprite* roleIcon; // 0x88
		UILabel* roleLabel; // 0x90
		::UnityEngine::GameObject* skillGroup; // 0x98
		::Il2CppArray<::System::Object*>* skillLabel; // 0xA0
		::UnityEngine::GameObject* rarity; // 0xA8
		::UnityEngine::GameObject* obtainableMark; // 0xB0
		::UnityEngine::GameObject* heart; // 0xB8
		UILabel* heartRankLabel; // 0xC0
		::UnityEngine::GameObject* tier; // 0xC8
		UILabel* tierLabel; // 0xD0
		MXButton* favoriteButton; // 0xD8
		::UnityEngine::GameObject* favoriteOn; // 0xE0
		::UnityEngine::GameObject* favoriteOff; // 0xE8
		SortingRule* showRule; // 0xF0
		CollectionUnitObjectBase* obj; // 0xF8
		UICharacterCollectionPopulator* collectionPopulator; // 0x100

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDetailButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONUNIT_ONDETAILBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnClickFavorite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONUNIT_ONCLICKFAVORITE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONUNIT_SETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnDetailButtonClicked_b__33_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONUNIT__ONDETAILBUTTONCLICKED_B__33_0_OFFSET))(nullptr);
		}

		::System::Void SetData(UICharacterCollectionPopulator* arg, CollectionUnitObjectBase* arg2)
		{
			((::System::Void(*)(UICharacterCollectionPopulator*, CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONUNIT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean GetIsInCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONUNIT_GETISINCOLLECTION_OFFSET))(nullptr);
		}

	};

