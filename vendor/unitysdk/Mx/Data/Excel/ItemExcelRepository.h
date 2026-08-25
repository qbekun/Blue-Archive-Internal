#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ITEMEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B6AB80)
#define MX_DATA_EXCEL_ITEMEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B6ABC0)
#define MX_DATA_EXCEL_ITEMEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B6AEC0)
#define MX_DATA_EXCEL_ITEMEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B6B2C0)
#define MX_DATA_EXCEL_ITEMEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B6B430)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ItemExcelRepository_TypeDefinitionIndex = 18289;

	class ItemExcelRepository : public <co_InternalInvoke>d__1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

