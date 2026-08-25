#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B81AC0)
#define MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_SELECTFIRST_KEY_OFFSET UNITYSDK_OFFSET(0x1B81B00)
#define MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_SELECT_KEY_OFFSET UNITYSDK_OFFSET(0x1B81E20)
#define MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_SELECT_KEYS_OFFSET UNITYSDK_OFFSET(0x1B82120)
#define MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B82520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeExcelRepository_TypeDefinitionIndex = 18394;

	class LocalizeExcelRepository : public ActivateEntity
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_SELECTFIRST_KEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_SELECT_KEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Keys(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_SELECT_KEYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

