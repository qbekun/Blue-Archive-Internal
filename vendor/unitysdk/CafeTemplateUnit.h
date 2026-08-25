#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class MXButton;
class ButtonActivator;
class UIPopup_CafeTemplatePreview;
class UIPopup_CafeTemplateApply;

#define CAFETEMPLATEUNIT__ONCLICKPREVIEWBUTTON_B__18_0_OFFSET UNITYSDK_OFFSET(0x2268A40)
#define CAFETEMPLATEUNIT_ONCLICKPREVIEWBUTTON_OFFSET UNITYSDK_OFFSET(0x2268BF0)
#define CAFETEMPLATEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2268CE0)
#define CAFETEMPLATEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2268520)
#define CAFETEMPLATEUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2268D40)
#define CAFETEMPLATEUNIT_SET_TEMPLATENAMEHASH_OFFSET UNITYSDK_OFFSET(0x22690F0)
#define CAFETEMPLATEUNIT_GET_TEMPLATENAMEHASH_OFFSET UNITYSDK_OFFSET(0x2269100)
#define CAFETEMPLATEUNIT__ONCLICKAPPLYBUTTON_B__17_0_OFFSET UNITYSDK_OFFSET(0x2269110)
#define CAFETEMPLATEUNIT_ONCLICKLISTBUTTON_OFFSET UNITYSDK_OFFSET(0x2269200)
#define CAFETEMPLATEUNIT_ONCLICKAPPLYBUTTON_OFFSET UNITYSDK_OFFSET(0x22697C0)
#define CAFETEMPLATEUNIT_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x2269950)
#define CAFETEMPLATEUNIT_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x2269960)

	inline static constexpr unsigned int CafeTemplateUnit_TypeDefinitionIndex = 4603;

	class CafeTemplateUnit : public Il2CppObject
	{
	public:
		UILabel* _templateName; // 0x18
		UILabel* _furnitureCount; // 0x20
		UITexture* _templateTexture; // 0x28
		MXButton* _furnitureListButton; // 0x30
		ButtonActivator* _applyButton; // 0x38
		MXButton* _previewButton; // 0x40
		Il2CppObject* _TemplateId_k__BackingField; // 0x48
		::System::UInt32 _TemplateNameHash_k__BackingField; // 0x58

		::System::Void _OnClickPreviewButton_b__18_0(UIPopup_CafeTemplatePreview* arg)
		{
			((::System::Void(*)(UIPopup_CafeTemplatePreview*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT__ONCLICKPREVIEWBUTTON_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPreviewButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_ONCLICKPREVIEWBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_TemplateNameHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_SET_TEMPLATENAMEHASH_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_TemplateNameHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_GET_TEMPLATENAMEHASH_OFFSET))(nullptr);
		}

		::System::Void _OnClickApplyButton_b__17_0(UIPopup_CafeTemplateApply* arg)
		{
			((::System::Void(*)(UIPopup_CafeTemplateApply*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT__ONCLICKAPPLYBUTTON_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickListButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_ONCLICKLISTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickApplyButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_ONCLICKAPPLYBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_TemplateId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_SET_TEMPLATEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TemplateId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEUNIT_GET_TEMPLATEID_OFFSET))(nullptr);
		}

	};

