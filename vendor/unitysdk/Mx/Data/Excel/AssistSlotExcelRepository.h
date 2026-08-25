#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19DB870)
#define MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_SELECT_SLOTID_OFFSET UNITYSDK_OFFSET(0x19DB9E0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_SELECT_SLOTIDS_OFFSET UNITYSDK_OFFSET(0x19DBCE0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19DC0E0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_SELECTFIRST_SLOTID_OFFSET UNITYSDK_OFFSET(0x19DC120)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistSlotExcelRepository_TypeDefinitionIndex = 16705;

	class AssistSlotExcelRepository : public ::FlatData::DreamMakerResult
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_SlotId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_SELECT_SLOTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SlotIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_SELECT_SLOTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_SlotId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCELREPOSITORY_SELECTFIRST_SLOTID_OFFSET))(arg, arg, nullptr);
		}

	};
}

