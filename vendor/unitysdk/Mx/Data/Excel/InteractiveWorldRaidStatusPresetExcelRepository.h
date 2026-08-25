#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B681B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B684D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B68510)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B68810)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B68C10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidStatusPresetExcelRepository_TypeDefinitionIndex = 18282;

	class InteractiveWorldRaidStatusPresetExcelRepository : public Leaf
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

