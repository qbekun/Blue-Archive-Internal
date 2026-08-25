#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A5CF50)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_SELECT_CONQUESTBONUSID_OFFSET UNITYSDK_OFFSET(0x1A5D0C0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_SELECT_CONQUESTBONUSIDS_OFFSET UNITYSDK_OFFSET(0x1A5D3C0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D7C0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_SELECTFIRST_CONQUESTBONUSID_OFFSET UNITYSDK_OFFSET(0x1A5D800)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestGroupBonusExcelRepository_TypeDefinitionIndex = 17239;

	class ConquestGroupBonusExcelRepository : public ::FlatData::MemoryLobbyCategory
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ConquestBonusId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_SELECT_CONQUESTBONUSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ConquestBonusIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_SELECT_CONQUESTBONUSIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_ConquestBonusId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCELREPOSITORY_SELECTFIRST_CONQUESTBONUSID_OFFSET))(arg, arg, nullptr);
		}

	};
}

