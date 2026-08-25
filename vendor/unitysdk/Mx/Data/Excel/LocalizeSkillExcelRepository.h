#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B85380)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_SELECTFIRST_KEY_OFFSET UNITYSDK_OFFSET(0x1B853C0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B856E0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_SELECT_KEY_OFFSET UNITYSDK_OFFSET(0x1B85850)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_SELECT_KEYS_OFFSET UNITYSDK_OFFSET(0x1B85B50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeSkillExcelRepository_TypeDefinitionIndex = 18408;

	class LocalizeSkillExcelRepository : public EnterSection
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_SELECTFIRST_KEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_SELECT_KEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Keys(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCELREPOSITORY_SELECT_KEYS_OFFSET))(arg, arg, nullptr);
		}

	};
}

