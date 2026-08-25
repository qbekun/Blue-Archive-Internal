#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D031D0)
#define MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D03280)
#define MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D03300)
#define MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D03310)
#define MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_ADDORREFRESH_OFFSET UNITYSDK_OFFSET(0x1D03320)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShopCashRenewalSortSaveData_TypeDefinitionIndex = 19983;

	class ShopCashRenewalSortSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* EndDateDict; // 0x10

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean AddOrRefresh(::System::String* str, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPCASHRENEWALSORTSAVEDATA_ADDORREFRESH_OFFSET))(str, arg, nullptr);
		}

	};
}

