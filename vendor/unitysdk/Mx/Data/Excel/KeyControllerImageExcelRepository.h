#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B6BD80)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_SELECT_CONTROLLERKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6BEF0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_SELECT_CONTROLLERKEYCODES_OFFSET UNITYSDK_OFFSET(0x1B6C1E0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_SELECTFIRST_CONTROLLERKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6C5E0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C8F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyControllerImageExcelRepository_TypeDefinitionIndex = 18296;

	class KeyControllerImageExcelRepository : public Serial
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ControllerKeyCode(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_SELECT_CONTROLLERKEYCODE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_ControllerKeyCodes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_SELECT_CONTROLLERKEYCODES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ControllerKeyCode(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_SELECTFIRST_CONTROLLERKEYCODE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

