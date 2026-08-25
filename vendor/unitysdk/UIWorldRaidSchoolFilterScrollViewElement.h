#pragma once
#include "unitysdk.h"

class MXToggle;
class UITexture;
class UILabel;
namespace FlatData { class School; }

#define UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_GET_ISFILTERON_OFFSET UNITYSDK_OFFSET(0xBF13D0)
#define UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_SETTOGGLEVALUE_OFFSET UNITYSDK_OFFSET(0xBF1150)
#define UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF14F0)
#define UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_ONFILTERTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0xBF1530)
#define UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBF1690)
#define UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBF1060)
#define UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xBF12E0)

	inline static constexpr unsigned int UIWorldRaidSchoolFilterScrollViewElement_TypeDefinitionIndex = 8742;

	class UIWorldRaidSchoolFilterScrollViewElement : public ::System::Xml::Serialization::ReflectionHelper
	{
	public:
		MXToggle* FilterToggle; // 0x28
		UITexture* FilterOnTexture; // 0x30
		UILabel* FilterOnLabel; // 0x38
		UITexture* FilterOffTexture; // 0x40
		UILabel* FilterOffLabel; // 0x48
		::System::Boolean lastFilterReset; // 0x50
		::System::Boolean initialized; // 0x51

		::System::Boolean get_IsFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_GET_ISFILTERON_OFFSET))(nullptr);
		}

		::System::Void SetToggleValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_SETTOGGLEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnFilterToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_ONFILTERTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::FlatData::School* arg)
		{
			((::System::Void(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSCHOOLFILTERSCROLLVIEWELEMENT_ONCLOSED_OFFSET))(nullptr);
		}

	};

