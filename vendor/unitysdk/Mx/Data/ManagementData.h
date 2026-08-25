#pragma once
#include "../../unitysdk.h"

#define MX_DATA_MANAGEMENTDATA_SET_GUIDEPOPUP_OFFSET UNITYSDK_OFFSET(0x1853D10)
#define MX_DATA_MANAGEMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1853D20)
#define MX_DATA_MANAGEMENTDATA_SET_BANNERS_OFFSET UNITYSDK_OFFSET(0x1853D30)
#define MX_DATA_MANAGEMENTDATA_GET_RAIDPERIODDISPLAY_OFFSET UNITYSDK_OFFSET(0x1853D40)
#define MX_DATA_MANAGEMENTDATA_SET_RAIDPERIODDISPLAY_OFFSET UNITYSDK_OFFSET(0x1853D50)
#define MX_DATA_MANAGEMENTDATA_GET_GUIDEPOPUP_OFFSET UNITYSDK_OFFSET(0x1853D60)
#define MX_DATA_MANAGEMENTDATA_GET_BANNERS_OFFSET UNITYSDK_OFFSET(0x1853D70)
#define MX_DATA_MANAGEMENTDATA_GET_CONTENTLOCK_OFFSET UNITYSDK_OFFSET(0x1853D80)
#define MX_DATA_MANAGEMENTDATA_SET_CONTENTLOCK_OFFSET UNITYSDK_OFFSET(0x1853D90)

namespace MX::Data
{
	inline static constexpr unsigned int ManagementData_TypeDefinitionIndex = 15855;

	class ManagementData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Banners_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _ContentLock_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _RaidPeriodDisplay_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _GuidePopup_k__BackingField; // 0x28

		::System::Void set_GuidePopup(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_SET_GUIDEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Banners(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_SET_BANNERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RaidPeriodDisplay()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_GET_RAIDPERIODDISPLAY_OFFSET))(nullptr);
		}

		::System::Void set_RaidPeriodDisplay(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_SET_RAIDPERIODDISPLAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_GuidePopup()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_GET_GUIDEPOPUP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Banners()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_GET_BANNERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ContentLock()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_GET_CONTENTLOCK_OFFSET))(nullptr);
		}

		::System::Void set_ContentLock(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTDATA_SET_CONTENTLOCK_OFFSET))(arg, nullptr);
		}

	};
}

