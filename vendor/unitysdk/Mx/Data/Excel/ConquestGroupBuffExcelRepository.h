#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_SELECT_CONQUESTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A5E230)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E530)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_SELECT_CONQUESTBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1A5E570)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A5E970)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_SELECTFIRST_CONQUESTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A5EAE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestGroupBuffExcelRepository_TypeDefinitionIndex = 17246;

	class ConquestGroupBuffExcelRepository : public ::FlatData::PurchaseCountResetType
	{
	public:
		Il2CppObject* Select_ConquestBuffId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_SELECT_CONQUESTBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_ConquestBuffIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_SELECT_CONQUESTBUFFIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ConquestBuffId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCELREPOSITORY_SELECTFIRST_CONQUESTBUFFID_OFFSET))(arg, arg, nullptr);
		}

	};
}

