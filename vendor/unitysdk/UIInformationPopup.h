#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class UIGrid;
class UILabel;
class SwipeDir;

#define UIINFORMATIONPOPUP_INDICATORON_OFFSET UNITYSDK_OFFSET(0x26023A0)
#define UIINFORMATIONPOPUP_INDICATOROFF_OFFSET UNITYSDK_OFFSET(0x2602430)
#define UIINFORMATIONPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x26024C0)
#define UIINFORMATIONPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2601CA0)
#define UIINFORMATIONPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26027C0)
#define UIINFORMATIONPOPUP_CREATEPAGE_OFFSET UNITYSDK_OFFSET(0x26027F0)
#define UIINFORMATIONPOPUP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2602880)
#define UIINFORMATIONPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2602910)
#define UIINFORMATIONPOPUP_SWIPE_OFFSET UNITYSDK_OFFSET(0x2602C10)
#define UIINFORMATIONPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2602CA0)
#define UIINFORMATIONPOPUP_SETPAGE_OFFSET UNITYSDK_OFFSET(0x26029C0)
#define UIINFORMATIONPOPUP_SETINDICATOR_OFFSET UNITYSDK_OFFSET(0x2602F00)
#define UIINFORMATIONPOPUP_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x2602C80)
#define UIINFORMATIONPOPUP_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x2602C60)
#define UIINFORMATIONPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2602FD0)
#define UIINFORMATIONPOPUP__AWAKE_B__15_0_OFFSET UNITYSDK_OFFSET(0x2603050)
#define UIINFORMATIONPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0x26030E0)

	inline static constexpr unsigned int UIInformationPopup_TypeDefinitionIndex = 6472;

	class UIInformationPopup : public Il2CppObject
	{
	public:
		MXButton* buttonX; // 0xD8
		MXButton* prevButton; // 0xE0
		MXButton* nextButton; // 0xE8
		::UnityEngine::GameObject* newMark; // 0xF0
		::UnityEngine::Transform* pageParent; // 0xF8
		::UnityEngine::Transform* indiCatorResource; // 0x100
		UIGrid* grid; // 0x108
		UILabel* labelInfo; // 0x110
		Il2CppObject* indiCatorList; // 0x118
		Il2CppObject* pageInfos; // 0x120
		::Il2CppArray<::System::Object*>* informationPages; // 0x128
		::System::Int32 currentPageIndex; // 0x130
		::System::Int32 pageIndexMax; // 0x134

		::UnityEngine::GameObject* IndiCatorOn(::System::Int32 arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_INDICATORON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* IndiCatorOff(::System::Int32 arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_INDICATOROFF_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CreatePage()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_CREATEPAGE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_SWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetPage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_SETPAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIndiCator(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_SETINDICATOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__15_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP__AWAKE_B__15_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINFORMATIONPOPUP___N__0_OFFSET))(nullptr);
		}

	};

