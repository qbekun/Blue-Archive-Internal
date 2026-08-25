#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPExposureHistoryAlertView; }

#define NPA_EDITOR_PLATE_NXPEXPOSUREHISTORYALERTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBF200)
#define NPA_EDITOR_PLATE_NXPEXPOSUREHISTORYALERTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DBF3B0)
#define NPA_EDITOR_PLATE_NXPEXPOSUREHISTORYALERTDIALOG__SETCALLBACK_B__3_0_OFFSET UNITYSDK_OFFSET(0x9DBF440)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPExposureHistoryAlertDialog_TypeDefinitionIndex = 26431;

	class NXPExposureHistoryAlertDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPExposureHistoryAlertView* exposureHistoryAlertView; // 0x30
		Il2CppObject* confirmCallback; // 0x38

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPEXPOSUREHISTORYALERTDIALOG_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPEXPOSUREHISTORYALERTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__3_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPEXPOSUREHISTORYALERTDIALOG__SETCALLBACK_B__3_0_OFFSET))(arg, nullptr);
		}

	};
}

