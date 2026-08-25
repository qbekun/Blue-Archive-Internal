#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class Transform; }
class UILabel;
class DescTooltipInfo;

#define DESCRIPTIONTOOLTIPWIDGET_SETDATA_OFFSET UNITYSDK_OFFSET(0x273FAA0)
#define DESCRIPTIONTOOLTIPWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2740660)
#define DESCRIPTIONTOOLTIPWIDGET_GET_LEFTARROW_OFFSET UNITYSDK_OFFSET(0x27406B0)
#define DESCRIPTIONTOOLTIPWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x27406C0)
#define DESCRIPTIONTOOLTIPWIDGET__SETDATA_G__GETDESCRIPTION|20_0_OFFSET UNITYSDK_OFFSET(0x27402C0)
#define DESCRIPTIONTOOLTIPWIDGET_GET_BACKGROUND_OFFSET UNITYSDK_OFFSET(0x27406D0)
#define DESCRIPTIONTOOLTIPWIDGET_GET_UPARROW_OFFSET UNITYSDK_OFFSET(0x27406E0)
#define DESCRIPTIONTOOLTIPWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27406F0)
#define DESCRIPTIONTOOLTIPWIDGET_GET_DOWNARROW_OFFSET UNITYSDK_OFFSET(0x2740740)
#define DESCRIPTIONTOOLTIPWIDGET_GET_RIGHTARROW_OFFSET UNITYSDK_OFFSET(0x2740750)

	inline static constexpr unsigned int DescriptionTooltipWidget_TypeDefinitionIndex = 7225;

	class DescriptionTooltipWidget : public Il2CppObject
	{
	public:
		UIWidget* background; // 0x18
		::UnityEngine::Transform* downArrow; // 0x20
		::UnityEngine::Transform* rightArrow; // 0x28
		::UnityEngine::Transform* leftArrow; // 0x30
		::UnityEngine::Transform* upArrow; // 0x38
		UILabel* nameLabel; // 0x40
		UILabel* descLabel; // 0x48
		UILabel* amountLabel; // 0x50

		::System::Void SetData(DescTooltipInfo* arg)
		{
			((::System::Void(*)(DescTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_ONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LeftArrow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_GET_LEFTARROW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::String* _SetData_g__GetDescription|20_0(<>c__DisplayClass20_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass20_0&*, ::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET__SETDATA_G__GETDESCRIPTION|20_0_OFFSET))(arg, nullptr);
		}

		UIWidget* get_Background()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_GET_BACKGROUND_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_UpArrow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_GET_UPARROW_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_DownArrow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_GET_DOWNARROW_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_RightArrow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCRIPTIONTOOLTIPWIDGET_GET_RIGHTARROW_OFFSET))(nullptr);
		}

	};

