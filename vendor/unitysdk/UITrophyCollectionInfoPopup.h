#pragma once
#include "unitysdk.h"

class UITrophyCollectionItem;
class UITrophyCollectionRaidHistoryScrollViewController;
class UILabel;
class IntTabController;
namespace UnityEngine { class GameObject; }

#define UITROPHYCOLLECTIONINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xB7E6E0)
#define UITROPHYCOLLECTIONINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB7EA90)
#define UITROPHYCOLLECTIONINFOPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB7EBB0)
#define UITROPHYCOLLECTIONINFOPOPUP_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xB7EC20)
#define UITROPHYCOLLECTIONINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7EEE0)
#define UITROPHYCOLLECTIONINFOPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB7EF60)

	inline static constexpr unsigned int UITrophyCollectionInfoPopup_TypeDefinitionIndex = 8507;

	class UITrophyCollectionInfoPopup : public Il2CppObject
	{
	public:
		UITrophyCollectionItem* ItemCard; // 0xD8
		UITrophyCollectionRaidHistoryScrollViewController* ScrollView; // 0xE0
		UILabel* FurnitureName; // 0xE8
		IntTabController* TabController; // 0xF0
		::UnityEngine::GameObject* AnyRecordRoot; // 0xF8
		::UnityEngine::GameObject* NoRecordRoot; // 0x100
		Il2CppObject* DBs; // 0x108

		::System::Void SetData(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFOPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFOPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFOPOPUP_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFOPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

