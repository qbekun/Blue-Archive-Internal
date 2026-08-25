#pragma once
#include "unitysdk.h"

class UIWorldRaidSchoolFilterScrollViewController;
class FormationCharEditScrollViewController;
class UICharacterSort;
namespace FlatData { class ContentType; }
class SortingRule;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_WORLDRAID_FORMATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBEEC10)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xBEF040)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xBEF270)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_ONSORT_OFFSET UNITYSDK_OFFSET(0xBEF300)
#define UIPOPUP_WORLDRAID_FORMATIONINFO___N__0_OFFSET UNITYSDK_OFFSET(0xBEF9C0)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBEF9D0)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBEFAE0)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_HANDLEWORLDRAIDSCHOOLFILTERCLICKMESSAGE_OFFSET UNITYSDK_OFFSET(0xBEFC40)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBF0420)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xBE5EF0)
#define UIPOPUP_WORLDRAID_FORMATIONINFO_REFRESHCHARACTERSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xBEFEA0)

	inline static constexpr unsigned int UIPopup_WorldRaid_FormationInfo_TypeDefinitionIndex = 8739;

	class UIPopup_WorldRaid_FormationInfo : public Il2CppObject
	{
	public:
		UIWorldRaidSchoolFilterScrollViewController* SchoolFilterScrollView; // 0xD8
		FormationCharEditScrollViewController* CharacterScrollView; // 0xE0
		UICharacterSort* UICharacterSort; // 0xE8
		::System::Int32 characterWrapcontentItemSize; // 0xF0
		Il2CppObject* availableCharactersDic; // 0xF8
		::FlatData::ContentType* contentType; // 0x100
		::System::Int64 groupId; // 0x108
		::System::Int32 columnCount; // 0x0
		Il2CppObject* sortingRuleList; // 0x110

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO___N__0_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleWorldRaidSchoolFilterClickMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_HANDLEWORLDRAIDSCHOOLFILTERCLICKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::FlatData::ContentType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCharacterScrollView(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_FORMATIONINFO_REFRESHCHARACTERSCROLLVIEW_OFFSET))(arg, nullptr);
		}

	};

