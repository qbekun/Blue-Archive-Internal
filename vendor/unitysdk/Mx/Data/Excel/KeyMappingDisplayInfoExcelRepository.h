#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_SELECT_KEYMAPPINGKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6CDB0)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B6D0A0)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B6D210)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_SELECT_KEYMAPPINGKEYCODES_OFFSET UNITYSDK_OFFSET(0x1B6D250)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_SELECTFIRST_KEYMAPPINGKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6D650)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingDisplayInfoExcelRepository_TypeDefinitionIndex = 18303;

	class KeyMappingDisplayInfoExcelRepository : public <>c
	{
	public:
		Il2CppObject* Select_KeyMappingKeyCode(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_SELECT_KEYMAPPINGKEYCODE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_KeyMappingKeyCodes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_SELECT_KEYMAPPINGKEYCODES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_KeyMappingKeyCode(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCELREPOSITORY_SELECTFIRST_KEYMAPPINGKEYCODE_OFFSET))(str, arg, nullptr);
		}

	};
}

