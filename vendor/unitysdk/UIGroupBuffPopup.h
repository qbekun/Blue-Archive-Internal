#pragma once
#include "unitysdk.h"

class GroupBuffPopupTabController;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace FlatData { class WeekDungeonType; }
class MXButton;

#define UIGROUPBUFFPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xBC0D00)
#define UIGROUPBUFFPOPUP_SETFORMATIONTAB_OFFSET UNITYSDK_OFFSET(0xBC0D80)
#define UIGROUPBUFFPOPUP_SETWEEKDEGEONTAB_OFFSET UNITYSDK_OFFSET(0xBC1460)
#define UIGROUPBUFFPOPUP__AWAKE_B__6_0_OFFSET UNITYSDK_OFFSET(0xBC1530)
#define UIGROUPBUFFPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xBC0F10)
#define UIGROUPBUFFPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xBC1660)
#define UIGROUPBUFFPOPUP_CHANGEWEEKDEGEONTAB_OFFSET UNITYSDK_OFFSET(0xBBFDE0)

	inline static constexpr unsigned int UIGroupBuffPopup_TypeDefinitionIndex = 8622;

	class UIGroupBuffPopup : public Il2CppObject
	{
	public:
		Il2CppObject* buffElements; // 0xD8
		Il2CppObject* closeButtons; // 0xE0
		GroupBuffPopupTabController* tabController; // 0xE8
		::UnityEngine::GameObject* formationTab; // 0xF0
		UILabel* formationTabLabel; // 0xF8
		Il2CppObject* weekdungeonBuffTable; // 0x100

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFormationTab(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFPOPUP_SETFORMATIONTAB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetWeekDegeonTab(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFPOPUP_SETWEEKDEGEONTAB_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__6_0(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFPOPUP__AWAKE_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ChangeWeekDegeonTab(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFPOPUP_CHANGEWEEKDEGEONTAB_OFFSET))(arg, nullptr);
		}

	};

