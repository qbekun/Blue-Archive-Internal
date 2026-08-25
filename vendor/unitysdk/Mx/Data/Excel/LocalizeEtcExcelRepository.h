#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_SELECT_KEY_OFFSET UNITYSDK_OFFSET(0x1B80760)
#define MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B80A60)
#define MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_SELECTFIRST_KEY_OFFSET UNITYSDK_OFFSET(0x1B80AA0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_SELECT_KEYS_OFFSET UNITYSDK_OFFSET(0x1B80DC0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B811C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeEtcExcelRepository_TypeDefinitionIndex = 18387;

	class LocalizeEtcExcelRepository : public <co_InternalInvoke>d__4
	{
	public:
		Il2CppObject* Select_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_SELECT_KEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_SELECTFIRST_KEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Keys(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_SELECT_KEYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

