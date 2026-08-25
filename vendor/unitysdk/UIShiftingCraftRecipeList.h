#pragma once
#include "unitysdk.h"

class ShiftingCraftRecipeScrollViewController;
class UIShiftingCraftRecipeSort;
namespace UnityEngine { class GameObject; }
class SortingRule;

#define UISHIFTINGCRAFTRECIPELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x23B0C20)
#define UISHIFTINGCRAFTRECIPELIST_REFRESH_OFFSET UNITYSDK_OFFSET(0x23B0C30)
#define UISHIFTINGCRAFTRECIPELIST_ONSORT_OFFSET UNITYSDK_OFFSET(0x23B1080)
#define UISHIFTINGCRAFTRECIPELIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x23A9780)

	inline static constexpr unsigned int UIShiftingCraftRecipeList_TypeDefinitionIndex = 5222;

	class UIShiftingCraftRecipeList : public Il2CppObject
	{
	public:
		ShiftingCraftRecipeScrollViewController* scrollViewController; // 0x18
		UIShiftingCraftRecipeSort* recipeSort; // 0x20
		::UnityEngine::GameObject* EmptyLabel; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPELIST_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPELIST_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPELIST_SETDATA_OFFSET))(nullptr);
		}

	};

