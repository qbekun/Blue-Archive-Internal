#pragma once
#include "../../unitysdk.h"

class UIInput;
class UIScrollView;
class UIGrid;
namespace MXField::UI { class UIFieldSceneSelectElement; }
class MXButton;
class UITexture;
namespace MXField::UI { class UIFieldSeasonSelectElement; }

#define MXFIELD_UI_UIFIELDSCENESELECT_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xE8DAD0)
#define MXFIELD_UI_UIFIELDSCENESELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE8DB30)
#define MXFIELD_UI_UIFIELDSCENESELECT__INITSEASONFILTERSCROLL_G__ADDSCROLLELEMENT|25_0_OFFSET UNITYSDK_OFFSET(0xE8DBA0)
#define MXFIELD_UI_UIFIELDSCENESELECT_APPLYSEASONIDFILTER_OFFSET UNITYSDK_OFFSET(0xE8DD50)
#define MXFIELD_UI_UIFIELDSCENESELECT_START_OFFSET UNITYSDK_OFFSET(0xE8E860)
#define MXFIELD_UI_UIFIELDSCENESELECT_INITSEASONFILTERSCROLL_OFFSET UNITYSDK_OFFSET(0xE8EDB0)
#define MXFIELD_UI_UIFIELDSCENESELECT_ONCLICKCONTINUE_OFFSET UNITYSDK_OFFSET(0xE8F2D0)
#define MXFIELD_UI_UIFIELDSCENESELECT_ONSCENEIDINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0xE8F370)
#define MXFIELD_UI_UIFIELDSCENESELECT_INITSCROLL_OFFSET UNITYSDK_OFFSET(0xE8DE10)
#define MXFIELD_UI_UIFIELDSCENESELECT__START_B__18_0_OFFSET UNITYSDK_OFFSET(0xE90300)
#define MXFIELD_UI_UIFIELDSCENESELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE90360)
#define MXFIELD_UI_UIFIELDSCENESELECT_GETSORTEDSCENEINFOS_OFFSET UNITYSDK_OFFSET(0xE8F540)
#define MXFIELD_UI_UIFIELDSCENESELECT_ONCLICKNEWGAME_OFFSET UNITYSDK_OFFSET(0xE90410)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldSceneSelect_TypeDefinitionIndex = 10680;

	class UIFieldSceneSelect : public Il2CppObject
	{
	public:
		UIInput* seasonIdInput; // 0xE8
		UIInput* openDateInput; // 0xF0
		UIInput* sceneIdInput; // 0xF8
		UIScrollView* scrollView; // 0x100
		UIGrid* grid; // 0x108
		::MXField::UI::UIFieldSceneSelectElement* elementPrefab; // 0x110
		MXButton* newGameButton; // 0x118
		MXButton* continueButton; // 0x120
		MXButton* changeBGButton; // 0x128
		UITexture* bgTexture; // 0x130
		::Il2CppArray<::System::Object*>* bgTextures; // 0x138
		UIScrollView* seasonFilterScrollView; // 0x140
		UIGrid* seasonFilterGrid; // 0x148
		::MXField::UI::UIFieldSeasonSelectElement* seasonFilterElementPrefab; // 0x150
		::System::Int64 sceneId; // 0x158
		::System::Int64 openDate; // 0x160

		::System::Int64 get_OpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _InitSeasonFilterScroll_g__AddScrollElement|25_0(::System::Int64 arg, <>c__DisplayClass25_0&* arg2)
		{
			((::System::Void(*)(::System::Int64, <>c__DisplayClass25_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT__INITSEASONFILTERSCROLL_G__ADDSCROLLELEMENT|25_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplySeasonIdFilter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_APPLYSEASONIDFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_START_OFFSET))(nullptr);
		}

		::System::Void InitSeasonFilterScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_INITSEASONFILTERSCROLL_OFFSET))(nullptr);
		}

		::System::Void OnClickContinue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_ONCLICKCONTINUE_OFFSET))(nullptr);
		}

		::System::Void OnSceneIdInputChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_ONSCENEIDINPUTCHANGED_OFFSET))(nullptr);
		}

		::System::Void InitScroll(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_INITSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void _Start_b__18_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT__START_B__18_0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSortedSceneInfos(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject&* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_GETSORTEDSCENEINFOS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickNewGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECT_ONCLICKNEWGAME_OFFSET))(nullptr);
		}

	};
}

