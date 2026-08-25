#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C2C950)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CAC0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C2CB00)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1C2CE20)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C2D220)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PossessionCheckExcelRepository_TypeDefinitionIndex = 19063;

	class PossessionCheckExcelRepository : public <co_InternalInvoke>d__3
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

