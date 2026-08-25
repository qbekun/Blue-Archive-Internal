#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4EF20)
#define MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B4F220)
#define MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B4F390)
#define MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F790)
#define MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4F7D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InformationExcelRepository_TypeDefinitionIndex = 18190;

	class InformationExcelRepository : public Count
	{
	public:
		Il2CppObject* Select_GroupID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupIDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_GroupID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

