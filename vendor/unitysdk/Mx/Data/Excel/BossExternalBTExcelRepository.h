#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F3E20)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19F3E60)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_SELECTFIRST_EXTERNALBTID_OFFSET UNITYSDK_OFFSET(0x19F3FD0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_SELECT_EXTERNALBTID_OFFSET UNITYSDK_OFFSET(0x19F42F0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_SELECT_EXTERNALBTIDS_OFFSET UNITYSDK_OFFSET(0x19F45F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BossExternalBTExcelRepository_TypeDefinitionIndex = 16822;

	class BossExternalBTExcelRepository : public ::FlatData::TBGThemaType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ExternalBTId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_SELECTFIRST_EXTERNALBTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ExternalBTId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_SELECT_EXTERNALBTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ExternalBTIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCELREPOSITORY_SELECT_EXTERNALBTIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

