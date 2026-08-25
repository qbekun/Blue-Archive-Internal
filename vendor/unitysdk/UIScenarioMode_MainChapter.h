#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
class SwipeDir;

#define UISCENARIOMODE_MAINCHAPTER_SET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x27FE0A0)
#define UISCENARIOMODE_MAINCHAPTER_GET_SHOULDPLAYBGM3RD_OFFSET UNITYSDK_OFFSET(0x27FE0B0)
#define UISCENARIOMODE_MAINCHAPTER_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x27FE210)
#define UISCENARIOMODE_MAINCHAPTER_SETDATA_OFFSET UNITYSDK_OFFSET(0x27FE330)
#define UISCENARIOMODE_MAINCHAPTER_REFRESH_OFFSET UNITYSDK_OFFSET(0x27FE3E0)
#define UISCENARIOMODE_MAINCHAPTER_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x27FE410)
#define UISCENARIOMODE_MAINCHAPTER_REFRESHNAVIGATIONBUTTONSINTERNAL_OFFSET UNITYSDK_OFFSET(0x27FE7C0)
#define UISCENARIOMODE_MAINCHAPTER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x27FEB20)
#define UISCENARIOMODE_MAINCHAPTER_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x27FEBB0)
#define UISCENARIOMODE_MAINCHAPTER_ADDSHOWMOVETOEVENTSHORTCUTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x27FECD0)
#define UISCENARIOMODE_MAINCHAPTER__ADDSHOWMOVETOEVENTSHORTCUTSEQUENCE_B__16_0_OFFSET UNITYSDK_OFFSET(0x27FED90)
#define UISCENARIOMODE_MAINCHAPTER_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x27FEE60)
#define UISCENARIOMODE_MAINCHAPTER_REFRESHINTERNAL_PLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0x27FEE80)
#define UISCENARIOMODE_MAINCHAPTER_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x27FEF30)
#define UISCENARIOMODE_MAINCHAPTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27FEF40)
#define UISCENARIOMODE_MAINCHAPTER_INITCHAPTERID_OFFSET UNITYSDK_OFFSET(0x27FEF50)
#define UISCENARIOMODE_MAINCHAPTER_GET_SHOULDPLAYBGM2ND_OFFSET UNITYSDK_OFFSET(0x27FF0E0)
#define UISCENARIOMODE_MAINCHAPTER___N__0_OFFSET UNITYSDK_OFFSET(0x27FF3C0)
#define UISCENARIOMODE_MAINCHAPTER_SWIPE_OFFSET UNITYSDK_OFFSET(0x27FF3D0)

	inline static constexpr unsigned int UIScenarioMode_MainChapter_TypeDefinitionIndex = 7751;

	class UIScenarioMode_MainChapter : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeSubTypes* _SubType_k__BackingField; // 0x120

		::System::Void set_SubType(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_SET_SUBTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShouldPlayBGM3rd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_GET_SHOULDPLAYBGM3RD_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::FlatData::ScenarioModeReplayTypes* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_REFRESH_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void RefreshNavigationButtonsInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_REFRESHNAVIGATIONBUTTONSINTERNAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Void AddShowMovetoEventShortcutSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_ADDSHOWMOVETOEVENTSHORTCUTSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void _AddShowMovetoEventShortcutSequence_b__16_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER__ADDSHOWMOVETOEVENTSHORTCUTSEQUENCE_B__16_0_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void RefreshInternal_PlaySequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_REFRESHINTERNAL_PLAYSEQUENCE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitChapterId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_INITCHAPTERID_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldPlayBGM2nd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_GET_SHOULDPLAYBGM2ND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER___N__0_OFFSET))(nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTER_SWIPE_OFFSET))(arg, nullptr);
		}

	};

