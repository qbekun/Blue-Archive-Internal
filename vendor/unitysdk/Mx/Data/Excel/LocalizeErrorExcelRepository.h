#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_SELECTFIRST_KEY_OFFSET UNITYSDK_OFFSET(0x1B7F070)
#define MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_SELECT_KEY_OFFSET UNITYSDK_OFFSET(0x1B7F390)
#define MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B7F690)
#define MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F800)
#define MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_SELECT_KEYS_OFFSET UNITYSDK_OFFSET(0x1B7F840)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeErrorExcelRepository_TypeDefinitionIndex = 18380;

	class LocalizeErrorExcelRepository : public EventBlackboard
	{
	public:
		Il2CppObject* SelectFirst_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_SELECTFIRST_KEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_SELECT_KEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Keys(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCELREPOSITORY_SELECT_KEYS_OFFSET))(arg, arg, nullptr);
		}

	};
}

