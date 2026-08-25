#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B41DA0)
#define MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B41DE0)
#define MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B420E0)
#define MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B42400)
#define MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B42570)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GroundExcelRepository_TypeDefinitionIndex = 18127;

	class GroundExcelRepository : public ::MXUnderCover::UCEventBlackboardTrigger
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

