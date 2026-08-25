#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C97FA0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C982A0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C985C0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C98730)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C98B30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StoryStrategyExcelRepository_TypeDefinitionIndex = 19557;

	class StoryStrategyExcelRepository : public <>c__DisplayClass26_0
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

