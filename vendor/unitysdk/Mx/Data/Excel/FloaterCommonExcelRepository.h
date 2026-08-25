#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TacticEntityType; }

#define MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_SELECT_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B27150)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B274A0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_SELECTFIRST_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B274E0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B27840)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_SELECT_TACTICENTITYTYPES_OFFSET UNITYSDK_OFFSET(0x1B279B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FloaterCommonExcelRepository_TypeDefinitionIndex = 18009;

	class FloaterCommonExcelRepository : public ::MXUnderCover::UCPlainEntity
	{
	public:
		Il2CppObject* Select_TacticEntityType(::FlatData::TacticEntityType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_SELECT_TACTICENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_TacticEntityType(::FlatData::TacticEntityType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_SELECTFIRST_TACTICENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_TacticEntityTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCELREPOSITORY_SELECT_TACTICENTITYTYPES_OFFSET))(arg, arg, nullptr);
		}

	};
}

