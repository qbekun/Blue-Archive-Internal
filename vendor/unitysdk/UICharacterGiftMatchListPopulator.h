#pragma once
#include "unitysdk.h"

class UICharacterGiftMatchListPopulatorUnit;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }

#define UICHARACTERGIFTMATCHLISTPOPULATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x22C07C0)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x22C0940)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_INITLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x22C0950)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x22C0BA0)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_INITLISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x22C0D70)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_PREPARELISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x22C0F00)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x22C1160)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x22C1170)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C12F0)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_PREPARELOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x22C14B0)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_BUILDGIFTSEPARATIONS_OFFSET UNITYSDK_OFFSET(0x22C14D0)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_ITEMVISIBILITYCHANGES_OFFSET UNITYSDK_OFFSET(0x22C1840)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x22C1860)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x22C18C0)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x22C1920)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x22C1A00)
#define UICHARACTERGIFTMATCHLISTPOPULATOR_BUILDFAVORITEMS_OFFSET UNITYSDK_OFFSET(0x22C1BC0)

	inline static constexpr unsigned int UICharacterGiftMatchListPopulator_TypeDefinitionIndex = 4797;

	class UICharacterGiftMatchListPopulator : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities
	{
	public:
		Il2CppObject* favorItems; // 0x58
		Il2CppObject* giftSeperations; // 0x60
		Il2CppObject* paddedIndices; // 0x68
		Il2CppObject* indexToTagCount; // 0x70
		::System::Int64 _TargetCharacterId_k__BackingField; // 0x78
		Il2CppObject* targetCharacterTags; // 0x80

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void InitLocalPosition(UICharacterGiftMatchListPopulatorUnit* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UICharacterGiftMatchListPopulatorUnit*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_INITLOCALPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetItemData(UICharacterGiftMatchListPopulatorUnit* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UICharacterGiftMatchListPopulatorUnit*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_SETITEMDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitListItemWithIndex(UICharacterGiftMatchListPopulatorUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UICharacterGiftMatchListPopulatorUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_INITLISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PrepareListItemWithIndex(UICharacterGiftMatchListPopulatorUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UICharacterGiftMatchListPopulatorUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_PREPARELISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareLocalPosition(UICharacterGiftMatchListPopulatorUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UICharacterGiftMatchListPopulatorUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_PREPARELOCALPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void BuildGiftSeparations(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_BUILDGIFTSEPARATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ItemVisibilityChanges(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_ITEMVISIBILITYCHANGES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* GetListUnitParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetListUnitParentGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void ClearData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_CLEARDATA_OFFSET))(nullptr);
		}

		::System::Void InitScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_INITSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void BuildFavorItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATOR_BUILDFAVORITEMS_OFFSET))(arg, nullptr);
		}

	};

