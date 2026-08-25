#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_SELECT_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B710E0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_SELECTFIRST_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B713D0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_SELECT_PREFABNAMES_OFFSET UNITYSDK_OFFSET(0x1B716E0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B71AE0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B71B20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingPopupExcelRepository_TypeDefinitionIndex = 18324;

	class KeyMappingPopupExcelRepository : public <co_InternalInvoke>d__2
	{
	public:
		Il2CppObject* Select_PrefabName(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_SELECT_PREFABNAME_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* SelectFirst_PrefabName(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_SELECTFIRST_PREFABNAME_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_PrefabNames(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_SELECT_PREFABNAMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

