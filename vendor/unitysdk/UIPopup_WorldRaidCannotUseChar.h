#pragma once
#include "unitysdk.h"

class FormationCharEditScrollViewController;
class UICharacterSort;
namespace FlatData { class SquadType; }
class SortingRule;

#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBE3C00)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONSORT_OFFSET UNITYSDK_OFFSET(0xBE4360)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE4D20)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xBE4D30)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBE4DC0)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR___N__0_OFFSET UNITYSDK_OFFSET(0xBE4DD0)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_SETDATA_OFFSET UNITYSDK_OFFSET(0xBE4DE0)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONBACK_OFFSET UNITYSDK_OFFSET(0xBE4DF0)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBE4E00)
#define UIPOPUP_WORLDRAIDCANNOTUSECHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xBE4E70)

	inline static constexpr unsigned int UIPopup_WorldRaidCannotUseChar_TypeDefinitionIndex = 8715;

	class UIPopup_WorldRaidCannotUseChar : public Il2CppObject
	{
	public:
		FormationCharEditScrollViewController* ScrollView; // 0xD8
		UICharacterSort* UICharacterSort; // 0xE0
		::System::Int32 characterWrapcontentItemSize; // 0xE8
		Il2CppObject* allCharacters; // 0xF0
		Il2CppObject* availableCharacterIds; // 0xF8
		::System::Int64 groupId; // 0x100
		::System::Int32 columnCount; // 0x0
		::FlatData::SquadType* startSquadType; // 0x108
		Il2CppObject* sortingRuleList; // 0x110

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR___N__0_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDCANNOTUSECHAR_.CTOR_OFFSET))(nullptr);
		}

	};

