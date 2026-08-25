#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B4D9D0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DB40)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B4DB80)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B4DE80)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B4E1A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int IdCardBackgroundExcelRepository_TypeDefinitionIndex = 18183;

	class IdCardBackgroundExcelRepository : public Once
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

