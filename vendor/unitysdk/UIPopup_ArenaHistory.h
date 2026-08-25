#pragma once
#include "unitysdk.h"

class UIArenaHistoryController;
class MXButton;

#define UIPOPUP_ARENAHISTORY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x21FFC30)
#define UIPOPUP_ARENAHISTORY___N__0_OFFSET UNITYSDK_OFFSET(0x21FFCC0)
#define UIPOPUP_ARENAHISTORY_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x21FFCD0)
#define UIPOPUP_ARENAHISTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0x21FFCF0)
#define UIPOPUP_ARENAHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x21FFE20)
#define UIPOPUP_ARENAHISTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21FFE30)

	inline static constexpr unsigned int UIPopup_ArenaHistory_TypeDefinitionIndex = 4292;

	class UIPopup_ArenaHistory : public Il2CppObject
	{
	public:
		UIArenaHistoryController* controller; // 0xD8
		MXButton* closeButton; // 0xE0

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAHISTORY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAHISTORY___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAHISTORY_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAHISTORY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAHISTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAHISTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

