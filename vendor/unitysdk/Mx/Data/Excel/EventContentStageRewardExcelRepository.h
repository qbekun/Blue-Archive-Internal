#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B0CAC0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B0CDE0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B0CE20)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B0D220)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B0D520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentStageRewardExcelRepository_TypeDefinitionIndex = 17890;

	class EventContentStageRewardExcelRepository : public <co_RotateToFront>d__56
	{
	public:
		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

