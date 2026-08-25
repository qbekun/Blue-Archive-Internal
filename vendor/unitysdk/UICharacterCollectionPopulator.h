#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIWidget;
class UIScrollBar;
class UICharacterNameSearch;
class CollectionUnitObjectBase;
class SortingRule;
class SortingOrder;
namespace FlatData { class SquadType; }
class NameSearchResult;
class UICharacterCollectionPopulatorUnit;
namespace UnityEngine { class Transform; }

#define UICHARACTERCOLLECTIONPOPULATOR_GET_WANTEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x22B5B20)
#define UICHARACTERCOLLECTIONPOPULATOR_ONNAMESEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x22B5B30)
#define UICHARACTERCOLLECTIONPOPULATOR_CHARACTERSEPARATION_OFFSET UNITYSDK_OFFSET(0x22B5B60)
#define UICHARACTERCOLLECTIONPOPULATOR_SORT_OFFSET UNITYSDK_OFFSET(0x22B5330)
#define UICHARACTERCOLLECTIONPOPULATOR_SET_NUMCHARACTERSINCOLLECTION_OFFSET UNITYSDK_OFFSET(0x22B62D0)
#define UICHARACTERCOLLECTIONPOPULATOR_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x22B62E0)
#define UICHARACTERCOLLECTIONPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x22B6670)
#define UICHARACTERCOLLECTIONPOPULATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22B4150)
#define UICHARACTERCOLLECTIONPOPULATOR_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0x22B6B40)
#define UICHARACTERCOLLECTIONPOPULATOR_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x22B5FF0)
#define UICHARACTERCOLLECTIONPOPULATOR_SET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0x22B6B60)
#define UICHARACTERCOLLECTIONPOPULATOR_CACHEUNITPOSITION_OFFSET UNITYSDK_OFFSET(0x22B6B70)
#define UICHARACTERCOLLECTIONPOPULATOR_PREPARELISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x22B6D10)
#define UICHARACTERCOLLECTIONPOPULATOR_GET_CELLHEIGHT_OFFSET UNITYSDK_OFFSET(0x22B6FB0)
#define UICHARACTERCOLLECTIONPOPULATOR_REFRESHUNITS_OFFSET UNITYSDK_OFFSET(0x22B4750)
#define UICHARACTERCOLLECTIONPOPULATOR_INITLISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x22B6FC0)
#define UICHARACTERCOLLECTIONPOPULATOR_INITCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x22B66D0)
#define UICHARACTERCOLLECTIONPOPULATOR_GETHEIGHTFORINIT_OFFSET UNITYSDK_OFFSET(0x22B6C10)
#define UICHARACTERCOLLECTIONPOPULATOR_SET_PIECETUTORIALCHARACTER_OFFSET UNITYSDK_OFFSET(0x22B71A0)
#define UICHARACTERCOLLECTIONPOPULATOR_ITEMVISIBILITYCHANGES_OFFSET UNITYSDK_OFFSET(0x22B71C0)
#define UICHARACTERCOLLECTIONPOPULATOR_SETFAVORITE_OFFSET UNITYSDK_OFFSET(0x22B77B0)
#define UICHARACTERCOLLECTIONPOPULATOR_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0x22B7810)
#define UICHARACTERCOLLECTIONPOPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x22B7820)
#define UICHARACTERCOLLECTIONPOPULATOR_APPLYFILTER_OFFSET UNITYSDK_OFFSET(0x22B5CA0)
#define UICHARACTERCOLLECTIONPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x22B7930)
#define UICHARACTERCOLLECTIONPOPULATOR__AWAKE_B__56_0_OFFSET UNITYSDK_OFFSET(0x22B7990)
#define UICHARACTERCOLLECTIONPOPULATOR_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x22B79D0)
#define UICHARACTERCOLLECTIONPOPULATOR_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x22B79E0)
#define UICHARACTERCOLLECTIONPOPULATOR_GET_PIECETUTORIALCHARACTER_OFFSET UNITYSDK_OFFSET(0x22B79F0)
#define UICHARACTERCOLLECTIONPOPULATOR_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0x22B7A00)
#define UICHARACTERCOLLECTIONPOPULATOR_GET_COLLECTEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x22B7A10)
#define UICHARACTERCOLLECTIONPOPULATOR_GET_NUMCHARACTERSINCOLLECTION_OFFSET UNITYSDK_OFFSET(0x22B7A20)
#define UICHARACTERCOLLECTIONPOPULATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x22B7A30)
#define UICHARACTERCOLLECTIONPOPULATOR_APPLYFAVORITE_OFFSET UNITYSDK_OFFSET(0x22B4D50)
#define UICHARACTERCOLLECTIONPOPULATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x22B7C10)

	inline static constexpr unsigned int UICharacterCollectionPopulator_TypeDefinitionIndex = 4779;

	class UICharacterCollectionPopulator : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::KeyException
	{
	public:
		::UnityEngine::GameObject* noStudentsDisplay; // 0x58
		UIWidget* scrollRectWidget; // 0x60
		UIScrollBar* scrollBar; // 0x68
		UICharacterNameSearch* nameSearch; // 0x70
		::System::Int32 _NumCharactersInCollection_k__BackingField; // 0x78
		Il2CppObject* allCharacters; // 0x80
		Il2CppObject* collectedCharacters; // 0x88
		Il2CppObject* canGainCharacters; // 0x90
		Il2CppObject* canNotGainCharacters; // 0x98
		Il2CppObject* wantedCharacters; // 0xA0
		Il2CppObject* FavoriteActivateByServerIds; // 0xA8
		CollectionUnitObjectBase* _PieceTutorialCharacter_k__BackingField; // 0xB0
		SortingRule* _SortingRule_k__BackingField; // 0xB8
		SortingOrder* _SortingOrder_k__BackingField; // 0xBC
		::FlatData::SquadType* _SquadType_k__BackingField; // 0xC0
		::System::Int32 numCollectionRow; // 0xC4
		::System::Int32 numWantedRow; // 0xC8

		Il2CppObject* get_WantedCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GET_WANTEDCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void OnNameSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_ONNAMESEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void CharacterSeparation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_CHARACTERSEPARATION_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, ::FlatData::SquadType* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_NumCharactersInCollection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_SET_NUMCHARACTERSINCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetItemData(UICharacterCollectionPopulatorUnit* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UICharacterCollectionPopulatorUnit*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_SETITEMDATA_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Transform* GetListUnitParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_INITIALIZE_OFFSET))(nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void InitScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_INITSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void set_SquadType(::FlatData::SquadType* arg)
		{
			((::System::Void(*)(::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_SET_SQUADTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void CacheUnitPosition(::System::Int32 arg, UICharacterCollectionPopulatorUnit* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, UICharacterCollectionPopulatorUnit*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_CACHEUNITPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PrepareListItemWithIndex(UICharacterCollectionPopulatorUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UICharacterCollectionPopulatorUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_PREPARELISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single get_CellHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GET_CELLHEIGHT_OFFSET))(nullptr);
		}

		::System::Void RefreshUnits()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_REFRESHUNITS_OFFSET))(nullptr);
		}

		::System::Void InitListItemWithIndex(UICharacterCollectionPopulatorUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UICharacterCollectionPopulatorUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_INITLISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitCharacterList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_INITCHARACTERLIST_OFFSET))(nullptr);
		}

		::System::Single GetHeightForInit(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GETHEIGHTFORINIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_PieceTutorialCharacter(CollectionUnitObjectBase* arg)
		{
			((::System::Void(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_SET_PIECETUTORIALCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void ItemVisibilityChanges(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_ITEMVISIBILITYCHANGES_OFFSET))(arg, nullptr);
		}

		::System::Void SetFavorite(CollectionUnitObjectBase* arg)
		{
			((::System::Void(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_SETFAVORITE_OFFSET))(arg, nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ApplyFilter(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_APPLYFILTER_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* GetListUnitParentGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__56_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR__AWAKE_B__56_0_OFFSET))(nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		CollectionUnitObjectBase* get_PieceTutorialCharacter()
		{
			return ((CollectionUnitObjectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GET_PIECETUTORIALCHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CollectedCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GET_COLLECTEDCHARACTERS_OFFSET))(nullptr);
		}

		::System::Int32 get_NumCharactersInCollection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_GET_NUMCHARACTERSINCOLLECTION_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ApplyFavorite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_APPLYFAVORITE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATOR_AWAKE_OFFSET))(nullptr);
		}

	};

