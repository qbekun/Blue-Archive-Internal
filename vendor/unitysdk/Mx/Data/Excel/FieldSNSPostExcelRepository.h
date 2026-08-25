#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EBA0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B1EBE0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B1EF00)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B1F070)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B1F370)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldSNSPostExcelRepository_TypeDefinitionIndex = 17981;

	class FieldSNSPostExcelRepository : public <>c__10`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

