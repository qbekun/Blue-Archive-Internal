#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_SELECT_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2F380)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_SELECTFIRST_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2F680)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B2F9A0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_SELECT_FURNITURETEMPLATEIDS_OFFSET UNITYSDK_OFFSET(0x1B2FB10)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FF10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureTemplateExcelRepository_TypeDefinitionIndex = 18044;

	class FurnitureTemplateExcelRepository : public ::MXUnderCover::EventBlackboardProperty
	{
	public:
		Il2CppObject* Select_FurnitureTemplateId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_SELECT_FURNITURETEMPLATEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_FurnitureTemplateId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_SELECTFIRST_FURNITURETEMPLATEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_FurnitureTemplateIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_SELECT_FURNITURETEMPLATEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

