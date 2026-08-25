#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1D24F60)
#define MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D24F80)
#define MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D24FE0)
#define MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D24FF0)
#define MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D25000)

namespace MX::SaveData
{
	inline static constexpr unsigned int ProductDailyRecordSaveData_TypeDefinitionIndex = 20002;

	class ProductDailyRecordSaveData : public Il2CppObject
	{
	public:
		::System::Boolean IsPurchaseNoticeAlreadyDisplayed; // 0x10

		::System::Void Set(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_SET_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTDAILYRECORDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

