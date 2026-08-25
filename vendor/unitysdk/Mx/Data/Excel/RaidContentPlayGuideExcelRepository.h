#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C41DE0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C41F50)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C42270)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C42570)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C42970)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidContentPlayGuideExcelRepository_TypeDefinitionIndex = 19157;

	class RaidContentPlayGuideExcelRepository : public UCPersonalityType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

