#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TOASTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CA7150)
#define MX_DATA_EXCEL_TOASTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7550)
#define MX_DATA_EXCEL_TOASTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CA7590)
#define MX_DATA_EXCEL_TOASTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CA78B0)
#define MX_DATA_EXCEL_TOASTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CA7A20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ToastExcelRepository_TypeDefinitionIndex = 19630;

	class ToastExcelRepository : public ::MXUnderCover::UCGameConfig
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

