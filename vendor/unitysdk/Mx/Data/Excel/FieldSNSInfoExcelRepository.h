#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D540)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B1D580)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B1D880)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B1DC80)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B1DDF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldSNSInfoExcelRepository_TypeDefinitionIndex = 17974;

	class FieldSNSInfoExcelRepository : public ::MXUnderCover::UCEntity
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

