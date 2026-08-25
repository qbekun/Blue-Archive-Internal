#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class MXButton;

#define UIPOPUP_CAFETEMPLATEPREVIEW_FILLTEMPLATEEXCELS_OFFSET UNITYSDK_OFFSET(0x226C100)
#define UIPOPUP_CAFETEMPLATEPREVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x226C1B0)
#define UIPOPUP_CAFETEMPLATEPREVIEW_SETDATA_OFFSET UNITYSDK_OFFSET(0x2268AA0)
#define UIPOPUP_CAFETEMPLATEPREVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x226C4E0)
#define UIPOPUP_CAFETEMPLATEPREVIEW_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x226C500)
#define UIPOPUP_CAFETEMPLATEPREVIEW_SET_TEMPLATELISTINDEX_OFFSET UNITYSDK_OFFSET(0x226C570)
#define UIPOPUP_CAFETEMPLATEPREVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x226C580)
#define UIPOPUP_CAFETEMPLATEPREVIEW_GET_TEMPLATELISTINDEX_OFFSET UNITYSDK_OFFSET(0x226C7A0)
#define UIPOPUP_CAFETEMPLATEPREVIEW_CHECKINDEX_OFFSET UNITYSDK_OFFSET(0x226C250)
#define UIPOPUP_CAFETEMPLATEPREVIEW_SETUI_OFFSET UNITYSDK_OFFSET(0x226C2D0)
#define UIPOPUP_CAFETEMPLATEPREVIEW_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x226C7B0)
#define UIPOPUP_CAFETEMPLATEPREVIEW_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x226C850)

	inline static constexpr unsigned int UIPopup_CafeTemplatePreview_TypeDefinitionIndex = 4615;

	class UIPopup_CafeTemplatePreview : public Il2CppObject
	{
	public:
		UITexture* _texture; // 0xD8
		UILabel* _name; // 0xE0
		MXButton* _prev; // 0xE8
		MXButton* _next; // 0xF0
		Il2CppObject* TemplateExcels; // 0xF8
		::System::Int32 _TemplateListIndex_k__BackingField; // 0x100

		::System::Void FillTemplateExcels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_FILLTEMPLATEEXCELS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void set_TemplateListIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_SET_TEMPLATELISTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Int32 get_TemplateListIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_GET_TEMPLATELISTINDEX_OFFSET))(nullptr);
		}

		::System::Void CheckIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_CHECKINDEX_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEPREVIEW_ONCLICKPREV_OFFSET))(nullptr);
		}

	};

