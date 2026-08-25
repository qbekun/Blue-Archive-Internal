#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A7B6F0)
#define MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A7B860)
#define MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A7BB60)
#define MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BF60)
#define MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A7BFA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CurrencyExcelRepository_TypeDefinitionIndex = 17370;

	class CurrencyExcelRepository : public ::FlatData::ShopRefresherType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_IDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

