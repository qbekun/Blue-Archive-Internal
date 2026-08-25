#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }

#define MX_DATA_SPOILERDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x195EDC0)
#define MX_DATA_SPOILERDATA_PREPROCESSCLIENT_OFFSET UNITYSDK_OFFSET(0x195EE70)
#define MX_DATA_SPOILERDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x195EE80)
#define MX_DATA_SPOILERDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x195EEF0)
#define MX_DATA_SPOILERDATA_GETALERTPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x195EF60)
#define MX_DATA_SPOILERDATA_GETSCENARIOMODESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x195EFD0)
#define MX_DATA_SPOILERDATA_GETMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x195F210)
#define MX_DATA_SPOILERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195F280)

namespace MX::Data
{
	inline static constexpr unsigned int SpoilerData_TypeDefinitionIndex = 16414;

	class SpoilerData : public Il2CppObject
	{
	public:
		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPOILERDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PreprocessClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPOILERDATA_PREPROCESSCLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetData(::FlatData::ContentType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPOILERDATA_GETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetData(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPOILERDATA_GETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAlertPopupExcel(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPOILERDATA_GETALERTPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetScenarioModeSpoilerPopupExcel(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ScenarioModeSubTypes* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPOILERDATA_GETSCENARIOMODESPOILERPOPUPEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetMomotalkScheduleSpoilerPopupExcel(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPOILERDATA_GETMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPOILERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

