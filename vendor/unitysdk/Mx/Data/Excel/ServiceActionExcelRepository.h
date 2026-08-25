#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ServiceActionType; }

#define MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C6E980)
#define MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_SELECT_SERVICEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6EAF0)
#define MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_SELECT_SERVICEACTIONTYPES_OFFSET UNITYSDK_OFFSET(0x1C6EE40)
#define MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F240)
#define MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_SELECTFIRST_SERVICEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6F280)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ServiceActionExcelRepository_TypeDefinitionIndex = 19359;

	class ServiceActionExcelRepository : public ::MXUnderCover::UCSectionModel
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ServiceActionType(::FlatData::ServiceActionType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ServiceActionType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_SELECT_SERVICEACTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ServiceActionTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_SELECT_SERVICEACTIONTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_ServiceActionType(::FlatData::ServiceActionType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ServiceActionType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCELREPOSITORY_SELECTFIRST_SERVICEACTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

