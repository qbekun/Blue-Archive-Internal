#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
namespace MX::Data::Excel { class EventContentSpoilerPopupExcel; }
namespace MX::Data::Excel { class ContentSpoilerPopupExcel; }
namespace MX::Data::Excel { class AlertPopupExcel; }
namespace MX::Data::Excel { class ScenarioModeSpoilerPopupExcel; }
namespace MX::Data::Excel { class MomotalkScheduleSpoilerPopupExcel; }
namespace FlatData { class SpoilerPopupType; }
class UIScrollView;

#define UIPOPUP_SPOILER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2774BB0)
#define UIPOPUP_SPOILER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2774DB0)
#define UIPOPUP_SPOILER_SETDATA_OFFSET UNITYSDK_OFFSET(0x2774EE0)
#define UIPOPUP_SPOILER_SETDATA_OFFSET UNITYSDK_OFFSET(0x2775660)
#define UIPOPUP_SPOILER_SETDATA_OFFSET UNITYSDK_OFFSET(0x27757D0)
#define UIPOPUP_SPOILER_SETDATA_OFFSET UNITYSDK_OFFSET(0x2775830)
#define UIPOPUP_SPOILER_SETDATA_OFFSET UNITYSDK_OFFSET(0x27758A0)
#define UIPOPUP_SPOILER_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x2775050)
#define UIPOPUP_SPOILER_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x2775A00)
#define UIPOPUP_SPOILER_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x2775AD0)
#define UIPOPUP_SPOILER_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x2775AE0)
#define UIPOPUP_SPOILER_CLOSEANDFINISH_OFFSET UNITYSDK_OFFSET(0x2775A10)
#define UIPOPUP_SPOILER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2775B10)
#define UIPOPUP_SPOILER__AWAKE_B__11_0_OFFSET UNITYSDK_OFFSET(0x2775B20)
#define UIPOPUP_SPOILER__AWAKE_B__11_1_OFFSET UNITYSDK_OFFSET(0x2775C40)
#define UIPOPUP_SPOILER__ONOPENED_G__RESETSCROLLVIEW|12_1_OFFSET UNITYSDK_OFFSET(0x2775D60)

	inline static constexpr unsigned int UIPopup_Spoiler_TypeDefinitionIndex = 7358;

	class UIPopup_Spoiler : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		Il2CppObject* titleLabels; // 0xE0
		Il2CppObject* descriptionScrollViews; // 0xE8
		Il2CppObject* descriptionLabels; // 0xF0
		Il2CppObject* cancelButtons; // 0xF8
		Il2CppObject* okButtons; // 0x100
		::UnityEngine::GameObject* defaultRoot; // 0x108
		::UnityEngine::GameObject* warningRoot; // 0x110
		::UnityEngine::GameObject* warningNoGoContent; // 0x118
		::System::Action* _confirmAction; // 0x120
		::System::Action* _finishAction; // 0x128

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::EventContentSpoilerPopupExcel* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentSpoilerPopupExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ContentSpoilerPopupExcel* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ContentSpoilerPopupExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::AlertPopupExcel* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::AlertPopupExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ScenarioModeSpoilerPopupExcel* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioModeSpoilerPopupExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetDataInternal(::System::UInt32 arg, ::System::UInt32 arg2, ::System::Int64 arg3, ::FlatData::SpoilerPopupType* arg4, ::System::Action* arg5)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Int64, ::FlatData::SpoilerPopupType*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_SETDATAINTERNAL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void CloseAndFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_CLOSEANDFINISH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__11_0(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER__AWAKE_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__11_1(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER__AWAKE_B__11_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_g__ResetScrollView|12_1(UIScrollView* arg)
		{
			((::System::Void(*)(UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPOILER__ONOPENED_G__RESETSCROLLVIEW|12_1_OFFSET))(arg, nullptr);
		}

	};

