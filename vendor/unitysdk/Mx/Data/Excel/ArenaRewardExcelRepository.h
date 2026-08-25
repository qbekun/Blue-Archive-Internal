#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ArenaRewardType; }

#define MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECT_ARENAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D39A0)
#define MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x19D3CF0)
#define MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D40F0)
#define MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19D4130)
#define MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECTFIRST_ARENAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D4390)
#define MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECT_ARENAREWARDTYPES_OFFSET UNITYSDK_OFFSET(0x19D4700)
#define MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D4B10)
#define MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D4E10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaRewardExcelRepository_TypeDefinitionIndex = 16667;

	class ArenaRewardExcelRepository : public ::FlatData::CCGStageRewardType
	{
	public:
		Il2CppObject* Select_ArenaRewardType(::FlatData::ArenaRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ArenaRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECT_ARENAREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ArenaRewardType(::FlatData::ArenaRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ArenaRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECTFIRST_ARENAREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ArenaRewardTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECT_ARENAREWARDTYPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

