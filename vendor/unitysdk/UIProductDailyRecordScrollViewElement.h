#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UIGrid;
class UIWidget;
class DailyRecordScrollViewItemData;

#define UIPRODUCTDAILYRECORDSCROLLVIEWELEMENT_GETBGWIDGET_OFFSET UNITYSDK_OFFSET(0x267E490)
#define UIPRODUCTDAILYRECORDSCROLLVIEWELEMENT__SETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x267E4A0)
#define UIPRODUCTDAILYRECORDSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x267E530)
#define UIPRODUCTDAILYRECORDSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x267E940)

	inline static constexpr unsigned int UIProductDailyRecordScrollViewElement_TypeDefinitionIndex = 6738;

	class UIProductDailyRecordScrollViewElement : public ::System::Xml::Ucs4Decoder3412
	{
	public:
		UILabel* _dayLabel; // 0x28
		::UnityEngine::GameObject* _attendedMarkObject; // 0x30
		::UnityEngine::GameObject* _dimObject; // 0x38
		Il2CppObject* _rewardParcels; // 0x40
		UIGrid* _parcelGrid; // 0x48
		UIWidget* _bgWidget; // 0x50

		UIWidget* GetBGWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDSCROLLVIEWELEMENT_GETBGWIDGET_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__7_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDSCROLLVIEWELEMENT__SETDATA_B__7_0_OFFSET))(nullptr);
		}

		::System::Void SetData(DailyRecordScrollViewItemData* arg)
		{
			((::System::Void(*)(DailyRecordScrollViewItemData*, ::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

