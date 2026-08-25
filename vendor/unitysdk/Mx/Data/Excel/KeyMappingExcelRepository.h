#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B6ED00)
#define MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F100)
#define MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B6F140)
#define MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B6F2B0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B6F5C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingExcelRepository_TypeDefinitionIndex = 18310;

	class KeyMappingExcelRepository : public <co_InternalInvoke>d__1
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCELREPOSITORY_SELECT_ID_OFFSET))(str, arg, nullptr);
		}

	};
}

