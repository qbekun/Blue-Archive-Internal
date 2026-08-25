#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C1ED30)
#define MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EEA0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_SELECT_STRINGIDS_OFFSET UNITYSDK_OFFSET(0x1C1EEE0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_SELECT_STRINGID_OFFSET UNITYSDK_OFFSET(0x1C1F2E0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_SELECTFIRST_STRINGID_OFFSET UNITYSDK_OFFSET(0x1C1F5E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ObstacleStatExcelRepository_TypeDefinitionIndex = 18994;

	class ObstacleStatExcelRepository : public Melee
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_StringIDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_SELECT_STRINGIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_StringID(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_SELECT_STRINGID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_StringID(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCELREPOSITORY_SELECTFIRST_STRINGID_OFFSET))(arg, arg, nullptr);
		}

	};
}

