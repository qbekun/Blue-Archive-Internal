#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B62870)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B62B90)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B62F90)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B63100)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B63400)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidSkillDescriptionListExcelRepository_TypeDefinitionIndex = 18265;

	class InteractiveWorldRaidSkillDescriptionListExcelRepository : public <GetEnumerator>d__2
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

