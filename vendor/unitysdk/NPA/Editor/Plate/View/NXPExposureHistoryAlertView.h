#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9DC9050)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9DC9060)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SETCANCELBUTTONACTIVE_OFFSET UNITYSDK_OFFSET(0x9DC9070)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DC9080)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9DC9090)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SELECTIONGROUPEXIT_OFFSET UNITYSDK_OFFSET(0x9DC9680)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9DC96C0)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBF320)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW__LOAD_B__10_0_OFFSET UNITYSDK_OFFSET(0x9DC9700)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW__LOAD_B__10_1_OFFSET UNITYSDK_OFFSET(0x9DC9740)
#define NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW__LOAD_B__10_2_OFFSET UNITYSDK_OFFSET(0x9DC9780)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPExposureHistoryAlertView_TypeDefinitionIndex = 26456;

	class NXPExposureHistoryAlertView : public Il2CppObject
	{
	public:
		::System::String* exposureHistoryviewPrefabUrl; // 0x48
		::System::String* basePath; // 0x50
		::System::String* title; // 0x58
		::System::String* description; // 0x60
		::System::Boolean isActiveForCancelButton; // 0x68
		Il2CppObject* clickCallback; // 0x70

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetCancelButtonActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SETCANCELBUTTONACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SelectionGroupExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_SELECTIONGROUPEXIT_OFFSET))(nullptr);
		}

		::System::Void OnClick(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_ONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__10_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW__LOAD_B__10_0_OFFSET))(nullptr);
		}

		::System::Void _Load_b__10_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW__LOAD_B__10_1_OFFSET))(nullptr);
		}

		::System::Void _Load_b__10_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPEXPOSUREHISTORYALERTVIEW__LOAD_B__10_2_OFFSET))(nullptr);
		}

	};
}

