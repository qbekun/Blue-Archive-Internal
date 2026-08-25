#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B72110)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_SELECTFIRST_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B72280)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_SELECT_PREFABNAMES_OFFSET UNITYSDK_OFFSET(0x1B72590)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_SELECT_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B72990)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B72C80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingPopupNoneFocusExcelRepository_TypeDefinitionIndex = 18331;

	class KeyMappingPopupNoneFocusExcelRepository : public DebugLog
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_PrefabName(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_SELECTFIRST_PREFABNAME_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_PrefabNames(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_SELECT_PREFABNAMES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_PrefabName(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_SELECT_PREFABNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

