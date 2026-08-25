#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
class OpenConditionButtonController;
class SmallBannerBase;
class EventContentSmallBanner;

#define UISMALLBANNERSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26811B0)
#define UISMALLBANNERSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2681B80)
#define UISMALLBANNERSCROLLVIEWELEMENT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2681A40)
#define UISMALLBANNERSCROLLVIEWELEMENT_ONCLICKBANNERBUTTON_OFFSET UNITYSDK_OFFSET(0x2681CF0)
#define UISMALLBANNERSCROLLVIEWELEMENT_SETOPENCONDITIONBUTTON_OFFSET UNITYSDK_OFFSET(0x26817C0)
#define UISMALLBANNERSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2681D80)
#define UISMALLBANNERSCROLLVIEWELEMENT_SETEVENTCONTENTBANNERUIS_OFFSET UNITYSDK_OFFSET(0x26813B0)
#define UISMALLBANNERSCROLLVIEWELEMENT__SETEVENTCONTENTBANNERUIS_G__ENDTIMESPANTOTEXT|13_0_OFFSET UNITYSDK_OFFSET(0x2681DC0)

	inline static constexpr unsigned int UISmallBannerScrollViewElement_TypeDefinitionIndex = 6747;

	class UISmallBannerScrollViewElement : public ::System::Xml::Serialization::TypeData
	{
	public:
		MXButton* bannerButton; // 0x28
		UITexture* bannerImageTexture; // 0x30
		UITexture* bannerImageTextureDisable; // 0x38
		UITexture* contentsLockTexture; // 0x40
		UILabel* endDayLabel; // 0x48
		::Il2CppArray<::System::Object*>* reddotSprites; // 0x50
		UITexture* ComebackLabelTextureEnabled; // 0x58
		UITexture* ComebackLabelTextureDisabled; // 0x60
		OpenConditionButtonController* openConditionButton; // 0x68
		SmallBannerBase* smallBannerBase; // 0x70
		EventContentSmallBanner* eventBanner; // 0x78

		::System::Void SetData(SmallBannerBase* arg)
		{
			((::System::Void(*)(SmallBannerBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetReddot(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWELEMENT_SETREDDOT_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnClickBannerButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWELEMENT_ONCLICKBANNERBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetOpenConditionButton(SmallBannerBase* arg)
		{
			((::System::Void(*)(SmallBannerBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWELEMENT_SETOPENCONDITIONBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEventContentBannerUIs(EventContentSmallBanner* arg)
		{
			((::System::Void(*)(EventContentSmallBanner*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWELEMENT_SETEVENTCONTENTBANNERUIS_OFFSET))(arg, nullptr);
		}

		::System::String* _SetEventContentBannerUIs_g__EndTimeSpanToText|13_0(::System::TimeSpan* arg)
		{
			return ((::System::String*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWELEMENT__SETEVENTCONTENTBANNERUIS_G__ENDTIMESPANTOTEXT|13_0_OFFSET))(arg, nullptr);
		}

	};

