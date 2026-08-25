#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class MXToggle;
namespace FlatData { class CafePresetType; }

#define UIPOPUP_CAFETEMPLATEAPPLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x226AF50)
#define UIPOPUP_CAFETEMPLATEAPPLY_SETDATA_OFFSET UNITYSDK_OFFSET(0x22691B0)
#define UIPOPUP_CAFETEMPLATEAPPLY_REQUESTAPPLYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x226B430)
#define UIPOPUP_CAFETEMPLATEAPPLY_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x226B600)
#define UIPOPUP_CAFETEMPLATEAPPLY_SETMESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x226B030)
#define UIPOPUP_CAFETEMPLATEAPPLY_AWAKE_OFFSET UNITYSDK_OFFSET(0x226B820)
#define UIPOPUP_CAFETEMPLATEAPPLY_REQUESTAPPLYPRESET_OFFSET UNITYSDK_OFFSET(0x226B640)
#define UIPOPUP_CAFETEMPLATEAPPLY_SETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x226AF60)

	inline static constexpr unsigned int UIPopup_CafeTemplateApply_TypeDefinitionIndex = 4612;

	class UIPopup_CafeTemplateApply : public Il2CppObject
	{
	public:
		UILabel* title; // 0xD8
		UILabel* message; // 0xE0
		MXButton* confirm; // 0xE8
		MXToggle* useOtherCafeFurnitures; // 0xF0
		::FlatData::CafePresetType* presetType; // 0xF8
		::System::Boolean applyTemplate; // 0xFC
		::System::Int64 templateId; // 0x100

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEAPPLY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::CafePresetType* arg, ::System::Boolean arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEAPPLY_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RequestApplyTemplate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEAPPLY_REQUESTAPPLYTEMPLATE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEAPPLY_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void SetMessageText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEAPPLY_SETMESSAGETEXT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEAPPLY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RequestApplyPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEAPPLY_REQUESTAPPLYPRESET_OFFSET))(nullptr);
		}

		::System::Void SetTitleText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEAPPLY_SETTITLETEXT_OFFSET))(nullptr);
		}

	};

