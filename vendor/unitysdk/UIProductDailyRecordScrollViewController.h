#pragma once
#include "unitysdk.h"

class UIProductDailyRecordScrollViewElement;
namespace UnityEngine { class Vector3; }

#define UIPRODUCTDAILYRECORDSCROLLVIEWCONTROLLER_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x267C640)
#define UIPRODUCTDAILYRECORDSCROLLVIEWCONTROLLER_REPOSITIONBYTOOLTIP_OFFSET UNITYSDK_OFFSET(0x267DFB0)
#define UIPRODUCTDAILYRECORDSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x267E330)
#define UIPRODUCTDAILYRECORDSCROLLVIEWCONTROLLER__REPOSITIONBYTOOLTIP_G__SNAP|1_0_OFFSET UNITYSDK_OFFSET(0x267E270)

	inline static constexpr unsigned int UIProductDailyRecordScrollViewController_TypeDefinitionIndex = 6737;

	class UIProductDailyRecordScrollViewController : public ::System::Xml::DocumentXPathNavigator
	{
	public:
		::System::Void RefreshList(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDSCROLLVIEWCONTROLLER_REFRESHLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RepositionByTooltip(UIProductDailyRecordScrollViewElement* arg)
		{
			((::System::Void(*)(UIProductDailyRecordScrollViewElement*, ::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDSCROLLVIEWCONTROLLER_REPOSITIONBYTOOLTIP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RepositionByTooltip_g__Snap|1_0(::UnityEngine::Vector3* arg, <>c__DisplayClass1_0&* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, <>c__DisplayClass1_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDSCROLLVIEWCONTROLLER__REPOSITIONBYTOOLTIP_G__SNAP|1_0_OFFSET))(arg, arg2, nullptr);
		}

	};

