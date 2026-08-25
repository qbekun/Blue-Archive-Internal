#pragma once
#include "unitysdk.h"

namespace FlatData { class School; }
class SortingRule;
class SortingOrder;
namespace FlatData { class ContentLockType; }
class ChatSortingRule;
namespace FlatData { class TacticRole; }
class CharacterObject;
class CharacterGearType;

#define CHARACTERSORTINGSERVICE_GET_CHARACTERECHELONSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FB9C70)
#define CHARACTERSORTINGSERVICE_GET_CHARACTERCOLLECTIONSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FB9CC0)
#define CHARACTERSORTINGSERVICE_GET_TSSCOLLECTIONSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FB9D10)
#define CHARACTERSORTINGSERVICE_GET_CHARACTERSELECTSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FB9D60)
#define CHARACTERSORTINGSERVICE_GET_SHOPPRODUCTAUTOSELECTFAVORCHARACTERSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FB9DB0)
#define CHARACTERSORTINGSERVICE_GET_SHOPPRODUCTAUTOSELECTGROWTHCHARACTERSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FB9E00)
#define CHARACTERSORTINGSERVICE_SCHOOLCOMPARE_OFFSET UNITYSDK_OFFSET(0x1FB9E50)
#define CHARACTERSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FB9EF0)
#define CHARACTERSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FBA050)
#define CHARACTERSORTINGSERVICE_EVENTITEMSORTINGRULETOEVENTCONTENTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1FBA190)
#define CHARACTERSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FBA1F0)
#define CHARACTERSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FBA440)
#define CHARACTERSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FBA580)
#define CHARACTERSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FBA020)
#define CHARACTERSORTINGSERVICE_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FBA6B0)
#define CHARACTERSORTINGSERVICE_GETMESSANGERCHARACTERSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FBA830)
#define CHARACTERSORTINGSERVICE_GETOTHERCHARACTERSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FBA8E0)
#define CHARACTERSORTINGSERVICE_GETMESSAGESORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FBA980)
#define CHARACTERSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FBAA30)
#define CHARACTERSORTINGSERVICE_GETDEFAULTMESSAGESORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FBAB60)
#define CHARACTERSORTINGSERVICE_COMPARETACTICROLE_OFFSET UNITYSDK_OFFSET(0x1FBAB90)
#define CHARACTERSORTINGSERVICE_COMPARESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1FBADF0)
#define CHARACTERSORTINGSERVICE_COMPAREPOTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0x1FBB0C0)
#define CHARACTERSORTINGSERVICE_COMPAREBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1FBB1B0)
#define CHARACTERSORTINGSERVICE_COMPAREGEAR_OFFSET UNITYSDK_OFFSET(0x1FBB2D0)
#define CHARACTERSORTINGSERVICE_GETCHARACTERGEARTYPE_OFFSET UNITYSDK_OFFSET(0x1FBB6D0)
#define CHARACTERSORTINGSERVICE_GETGEARTEXT_OFFSET UNITYSDK_OFFSET(0x1FBB8E0)
#define CHARACTERSORTINGSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB940)
#define CHARACTERSORTINGSERVICE__COMPAREGEAR_G__GETSCORE|36_0_OFFSET UNITYSDK_OFFSET(0x1FBB6C0)

	inline static constexpr unsigned int CharacterSortingService_TypeDefinitionIndex = 2948;

	class CharacterSortingService : public Il2CppObject
	{
	public:
		Il2CppObject* characterSortingList; // 0x0
		Il2CppObject* tssCollectionSortingList; // 0x8
		Il2CppObject* characterSelectSortingList; // 0x10
		Il2CppObject* _shopProductAutoSelectFavorCharacterSortingList; // 0x18
		Il2CppObject* _shopProductAutoSelectGrowthCharacterSortingList; // 0x20

		Il2CppObject* get_CharacterEchelonSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GET_CHARACTERECHELONSORTINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_CharacterCollectionSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GET_CHARACTERCOLLECTIONSORTINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_TSSCollectionSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GET_TSSCOLLECTIONSORTINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_CharacterSelectSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GET_CHARACTERSELECTSORTINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopProductAutoSelectFavorCharacterSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GET_SHOPPRODUCTAUTOSELECTFAVORCHARACTERSORTINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopProductAutoSelectGrowthCharacterSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GET_SHOPPRODUCTAUTOSELECTGROWTHCHARACTERSORTINGLIST_OFFSET))(nullptr);
		}

		::System::Int32 SchoolCompare(::FlatData::School* arg, ::FlatData::School* arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::FlatData::School*, ::FlatData::School*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_SCHOOLCOMPARE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Sort(::System::Int64 arg, SortingRule* arg2, SortingOrder* arg3, Il2CppObject&* arg4)
		{
			((::System::Void(*)(::System::Int64, SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* EventItemSortingRuleToEventContentItemType(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_EVENTITEMSORTINGRULETOEVENTCONTENTITEMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3, ::FlatData::ContentLockType* arg4)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::FlatData::ContentLockType*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Sort(::System::Int64 arg, SortingRule* arg2, SortingOrder* arg3, Il2CppObject&* arg4)
		{
			((::System::Void(*)(::System::Int64, SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		SortingOrder* GetDefaultSortingOrder(SortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(SortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMessangerCharacterSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GETMESSANGERCHARACTERSORTINGRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOtherCharacterSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GETOTHERCHARACTERSORTINGRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMessageSortingRule(ChatSortingRule* arg)
		{
			return ((Il2CppObject*(*)(ChatSortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GETMESSAGESORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void Sort(ChatSortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(ChatSortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		SortingOrder* GetDefaultMessageSortingOrder(ChatSortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(ChatSortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GETDEFAULTMESSAGESORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTacticRole(::FlatData::TacticRole* arg, ::FlatData::TacticRole* arg2)
		{
			return ((::System::Int32(*)(::FlatData::TacticRole*, ::FlatData::TacticRole*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_COMPARETACTICROLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareSkillLevel(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_COMPARESKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 ComparePotentialStats(SortingRule* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Int32(*)(SortingRule*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_COMPAREPOTENTIALSTATS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareBirthDay(CharacterObject* arg, CharacterObject* arg2)
		{
			return ((::System::Int32(*)(CharacterObject*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_COMPAREBIRTHDAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareGear(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_COMPAREGEAR_OFFSET))(arg, arg2, nullptr);
		}

		CharacterGearType* GetCharacterGearType(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((CharacterGearType*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GETCHARACTERGEARTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetGearText(CharacterGearType* arg)
		{
			return ((::System::String*(*)(CharacterGearType*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_GETGEARTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 _CompareGear_g__GetScore|36_0(::System::Boolean arg, ::System::Int64 arg2)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSORTINGSERVICE__COMPAREGEAR_G__GETSCORE|36_0_OFFSET))(arg, arg2, nullptr);
		}

	};

