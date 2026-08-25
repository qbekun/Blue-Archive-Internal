#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B737A0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B737E0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B73AE0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B73DC0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B741B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingTabExcelRepository_TypeDefinitionIndex = 18338;

	class KeyMappingTabExcelRepository : public <>c
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_SELECT_ID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

