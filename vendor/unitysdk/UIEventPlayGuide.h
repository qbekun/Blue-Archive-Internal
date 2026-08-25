#pragma once
#include "unitysdk.h"

class MXButton;
class SpineChatDialogContainer;
class UILabel;
class UITexture;
namespace FlatData { class EventContentType; }

#define UIEVENTPLAYGUIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x245C930)
#define UIEVENTPLAYGUIDE_ONCLICKPREVPAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x245CA10)
#define UIEVENTPLAYGUIDE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x245CC50)
#define UIEVENTPLAYGUIDE_SETDATA_OFFSET UNITYSDK_OFFSET(0x245CF50)
#define UIEVENTPLAYGUIDE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x245D110)
#define UIEVENTPLAYGUIDE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x245D1F0)
#define UIEVENTPLAYGUIDE_AWAKE_OFFSET UNITYSDK_OFFSET(0x245D280)
#define UIEVENTPLAYGUIDE_ONCLICKNEXTPAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x245D570)
#define UIEVENTPLAYGUIDE_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x245D580)
#define UIEVENTPLAYGUIDE_SETPAGE_OFFSET UNITYSDK_OFFSET(0x245CA20)
#define UIEVENTPLAYGUIDE___N__0_OFFSET UNITYSDK_OFFSET(0x245D610)

	inline static constexpr unsigned int UIEventPlayGuide_TypeDefinitionIndex = 5591;

	class UIEventPlayGuide : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		SpineChatDialogContainer* spine; // 0xE0
		UILabel* guideTitleLabel; // 0xE8
		UILabel* pageNumberLabel; // 0xF0
		UITexture* guideImageTexture; // 0xF8
		UILabel* guideTextLabel; // 0x100
		MXButton* prevPageButton; // 0x108
		MXButton* nextPageButton; // 0x110
		Il2CppObject* playGuideExcelList; // 0x118
		Il2CppObject* guideImageDict; // 0x120
		::System::Int32 currPageIndex; // 0x128
		::System::Int64 targetEventContentId; // 0x130
		::FlatData::EventContentType* eventContentType; // 0x138

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickPrevPageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_ONCLICKPREVPAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::System::Int64 arg, ::FlatData::EventContentType* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickNextPageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_ONCLICKNEXTPAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetPage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE_SETPAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPLAYGUIDE___N__0_OFFSET))(nullptr);
		}

	};

