#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x19F93C0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F97C0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x19F9800)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x19F9B20)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19F9E20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeInteractionExcelRepository_TypeDefinitionIndex = 16846;

	class CafeInteractionExcelRepository : public ::FlatData::TBGVoiceCondition
	{
	public:
		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

