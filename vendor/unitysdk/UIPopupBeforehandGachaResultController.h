#pragma once
#include "unitysdk.h"

class UIBeforehandGachaSavedResultViewPopup;
class UIBeforehandGachaSaveReplacePopup;
class UIBeforehandGachaFinalSelectPopup;
class UIPopupBeforehandGachaReplaceConfirm;
class MXButton;
class BeforehandGachaResultPopupType;

#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6FE10)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_CLOSECONTROLLER_OFFSET UNITYSDK_OFFSET(0xA6FE20)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONSAVEREPLACESLOTCONFIRMED_OFFSET UNITYSDK_OFFSET(0xA6FF00)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_SETREPLACEDATA_OFFSET UNITYSDK_OFFSET(0xA6FFA0)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONPCBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xA701F0)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xA70350)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_RESTOREESCABLETUTORIALPOPUP_OFFSET UNITYSDK_OFFSET(0xA70280)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_CLOSECHILDPOPUPS_OFFSET UNITYSDK_OFFSET(0xA6FE60)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA70630)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_GET_SELECTEDRESULTS_OFFSET UNITYSDK_OFFSET(0xA70700)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA70710)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_REQUESTPICK_OFFSET UNITYSDK_OFFSET(0xA70880)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA70BD0)
#define UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONFINALSELECTCONFIRMED_OFFSET UNITYSDK_OFFSET(0xA70C10)

	inline static constexpr unsigned int UIPopupBeforehandGachaResultController_TypeDefinitionIndex = 7856;

	class UIPopupBeforehandGachaResultController : public Il2CppObject
	{
	public:
		UIBeforehandGachaSavedResultViewPopup* savedResultViewPopup; // 0x18
		UIBeforehandGachaSaveReplacePopup* saveReplacePopup; // 0x20
		UIBeforehandGachaFinalSelectPopup* finalSelectPopup; // 0x28
		UIPopupBeforehandGachaReplaceConfirm* replaceConfirmPopup; // 0x30
		MXButton* blackBgBtn; // 0x38
		Il2CppObject* saveReplaceConfirmCallback; // 0x40
		Il2CppObject* selectedResults; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CloseController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_CLOSECONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnSaveReplaceSlotConfirmed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONSAVEREPLACESLOTCONFIRMED_OFFSET))(arg, nullptr);
		}

		::System::Void SetReplaceData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_SETREPLACEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnPcBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONPCBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(BeforehandGachaResultPopupType* arg)
		{
			((::System::Void(*)(BeforehandGachaResultPopupType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RestoreEscableTutorialPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_RESTOREESCABLETUTORIALPOPUP_OFFSET))(nullptr);
		}

		::System::Void CloseChildPopups()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_CLOSECHILDPOPUPS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SelectedResults()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_GET_SELECTEDRESULTS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RequestPick(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_REQUESTPICK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnFinalSelectConfirmed(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHARESULTCONTROLLER_ONFINALSELECTCONFIRMED_OFFSET))(arg, arg2, nullptr);
		}

	};

