#pragma once
#include "unitysdk.h"

class ClanAssistFilter;
class InventoryFilterBase;
class CharacterObject;

#define CLANASSISTINVENTORYOBJECT_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x1AD0260)
#define CLANASSISTINVENTORYOBJECT_GET_ASSISTRENTHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1AD0270)
#define CLANASSISTINVENTORYOBJECT_SET_ASSISTRENTHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1AD0280)
#define CLANASSISTINVENTORYOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AD0290)
#define CLANASSISTINVENTORYOBJECT_GETASSISTLIST_OFFSET UNITYSDK_OFFSET(0x1AD04A0)
#define CLANASSISTINVENTORYOBJECT_ASSISTINFOLISTCLEAR_OFFSET UNITYSDK_OFFSET(0x1AD03F0)
#define CLANASSISTINVENTORYOBJECT_FINDASSIST_OFFSET UNITYSDK_OFFSET(0x1AD04B0)
#define CLANASSISTINVENTORYOBJECT_FINDASSISTS_OFFSET UNITYSDK_OFFSET(0x1AD0580)
#define CLANASSISTINVENTORYOBJECT_GETASSISTLIST_OFFSET UNITYSDK_OFFSET(0x1AD0660)
#define CLANASSISTINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1AD0850)
#define CLANASSISTINVENTORYOBJECT_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1AD10C0)
#define CLANASSISTINVENTORYOBJECT_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1AD1150)
#define CLANASSISTINVENTORYOBJECT_CANADDLEVELUPINGREDIENT_OFFSET UNITYSDK_OFFSET(0x1AD11E0)
#define CLANASSISTINVENTORYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AD11F0)
#define CLANASSISTINVENTORYOBJECT__GETASSISTLIST_B__14_0_OFFSET UNITYSDK_OFFSET(0x1AD12D0)

	inline static constexpr unsigned int ClanAssistInventoryObject_TypeDefinitionIndex = 1422;

	class ClanAssistInventoryObject : public <OnState>d__4
	{
	public:
		ClanAssistFilter* filterOption; // 0x20
		Il2CppObject* assistList; // 0x28
		Il2CppObject* _AssistRentHistoryDBs_k__BackingField; // 0x30

		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistRentHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_GET_ASSISTRENTHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_AssistRentHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_SET_ASSISTRENTHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAssistList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_GETASSISTLIST_OFFSET))(nullptr);
		}

		::System::Void AssistInfoListClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_ASSISTINFOLISTCLEAR_OFFSET))(nullptr);
		}

		CharacterObject* FindAssist(::System::Int64 arg)
		{
			return ((CharacterObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_FINDASSIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindAssists(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_FINDASSISTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAssistList(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_GETASSISTLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanAddLevelUpIngredient(::System::Int64 arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_CANADDLEVELUPINGREDIENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetAssistList_b__14_0(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTINVENTORYOBJECT__GETASSISTLIST_B__14_0_OFFSET))(arg, nullptr);
		}

	};

