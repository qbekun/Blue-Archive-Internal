#pragma once
#include "unitysdk.h"

class MXButton;

#define UIEMPTYSAVEDATARESULTPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA86010)
#define UIEMPTYSAVEDATARESULTPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA86100)
#define UIEMPTYSAVEDATARESULTPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA86130)
#define UIEMPTYSAVEDATARESULTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA86200)
#define UIEMPTYSAVEDATARESULTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA86210)
#define UIEMPTYSAVEDATARESULTPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xA864E0)

	inline static constexpr unsigned int UIEmptySaveDataResultPopup_TypeDefinitionIndex = 7908;

	class UIEmptySaveDataResultPopup : public Il2CppObject
	{
	public:
		MXButton* confirmBtn; // 0x18
		MXButton* closeBtn; // 0x20
		MXButton* exitBtn; // 0x28
		::System::Action* confirm; // 0x30

		::System::Void SetData(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMPTYSAVEDATARESULTPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMPTYSAVEDATARESULTPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMPTYSAVEDATARESULTPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMPTYSAVEDATARESULTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMPTYSAVEDATARESULTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMPTYSAVEDATARESULTPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

	};

