#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_SELECT_FURNITURETEMPLATEIDS_OFFSET UNITYSDK_OFFSET(0x1B2E1A0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_SELECTFIRST_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2E5A0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_SELECT_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2E8C0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B2EBC0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B2ED30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureTemplateElementExcelRepository_TypeDefinitionIndex = 18037;

	class FurnitureTemplateElementExcelRepository : public ::MXUnderCover::EventBlackboardAsset
	{
	public:
		Il2CppObject* Select_FurnitureTemplateIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_SELECT_FURNITURETEMPLATEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_FurnitureTemplateId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_SELECTFIRST_FURNITURETEMPLATEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_FurnitureTemplateId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_SELECT_FURNITURETEMPLATEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

