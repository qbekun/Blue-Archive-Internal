#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B838F0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_SELECT_GACHASHOPID_OFFSET UNITYSDK_OFFSET(0x1B83A60)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B83D60)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_SELECTFIRST_GACHASHOPID_OFFSET UNITYSDK_OFFSET(0x1B83DA0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_SELECT_GACHASHOPIDS_OFFSET UNITYSDK_OFFSET(0x1B840C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeGachaShopExcelRepository_TypeDefinitionIndex = 18401;

	class LocalizeGachaShopExcelRepository : public <co_InternalInvoke>d__3
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GachaShopId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_SELECT_GACHASHOPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_GachaShopId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_SELECTFIRST_GACHASHOPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GachaShopIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCELREPOSITORY_SELECT_GACHASHOPIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

