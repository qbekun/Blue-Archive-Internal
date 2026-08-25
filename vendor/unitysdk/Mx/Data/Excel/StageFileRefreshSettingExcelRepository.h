#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C923C0)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_SELECTFIRST_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C92400)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C92720)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_SELECT_GROUNDIDS_OFFSET UNITYSDK_OFFSET(0x1C92890)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_SELECT_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C92C90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StageFileRefreshSettingExcelRepository_TypeDefinitionIndex = 19529;

	class StageFileRefreshSettingExcelRepository : public <>c
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_GroundId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_SELECTFIRST_GROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroundIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_SELECT_GROUNDIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroundId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCELREPOSITORY_SELECT_GROUNDID_OFFSET))(arg, arg, nullptr);
		}

	};
}

