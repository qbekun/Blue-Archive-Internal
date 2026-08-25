#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B46680)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B46A80)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B46BF0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B46EF0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B47210)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GuideMissionExcelRepository_TypeDefinitionIndex = 18148;

	class GuideMissionExcelRepository : public Base
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

