#pragma once
#include "../unitysdk.h"

class MXButton;
class UIEventTrigger;
namespace MXUnderCover { class UCPlayStateHandler; }

#define MXUNDERCOVER_UIPOPUP_UCPAUSE_ONCLICKRETRY_OFFSET UNITYSDK_OFFSET(0xDCC590)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCC640)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xDCC650)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xDCC700)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xDCC730)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_GET_PLAYSTATEHANDLER_OFFSET UNITYSDK_OFFSET(0xDCC7C0)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_SET_PLAYSTATEHANDLER_OFFSET UNITYSDK_OFFSET(0xDCC7D0)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_ONBACK_OFFSET UNITYSDK_OFFSET(0xDCC7F0)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCC820)
#define MXUNDERCOVER_UIPOPUP_UCPAUSE_ONDOUBLECLICKCHEAT_OFFSET UNITYSDK_OFFSET(0xDCCBF0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIPopup_UCPause_TypeDefinitionIndex = 10047;

	class UIPopup_UCPause : public Il2CppObject
	{
	public:
		MXButton* Cancel; // 0xD8
		MXButton* Retry; // 0xE0
		MXButton* Exit; // 0xE8
		UIEventTrigger* triggerForCheat; // 0xF0
		::MXUnderCover::UCPlayStateHandler* _PlayStateHandler_k__BackingField; // 0xF8

		::System::Void OnClickRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_ONCLICKRETRY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_ONCLICKEXIT_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::MXUnderCover::UCPlayStateHandler* get_PlayStateHandler()
		{
			return ((::MXUnderCover::UCPlayStateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_GET_PLAYSTATEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_PlayStateHandler(::MXUnderCover::UCPlayStateHandler* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayStateHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_SET_PLAYSTATEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDoubleClickCheat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UCPAUSE_ONDOUBLECLICKCHEAT_OFFSET))(nullptr);
		}

	};
}

