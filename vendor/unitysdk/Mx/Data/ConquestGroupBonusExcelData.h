#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ConquestGroupBonusExcel; }

#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_SET_CONQUESTBONUSID_OFFSET UNITYSDK_OFFSET(0x18398F0)
#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_GET_CONQUESTBONUSID_OFFSET UNITYSDK_OFFSET(0x1839900)
#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_SET_SCHOOLS_OFFSET UNITYSDK_OFFSET(0x1839910)
#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_GET_BONUSELEMENTS_OFFSET UNITYSDK_OFFSET(0x1839920)
#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_SET_RECOMMENDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1839930)
#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1839940)
#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_GET_RECOMMENDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1839E50)
#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_GET_SCHOOLS_OFFSET UNITYSDK_OFFSET(0x1839E60)
#define MX_DATA_CONQUESTGROUPBONUSEXCELDATA_SET_BONUSELEMENTS_OFFSET UNITYSDK_OFFSET(0x1839E70)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestGroupBonusExcelData_TypeDefinitionIndex = 15757;

	class ConquestGroupBonusExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _ConquestBonusId_k__BackingField; // 0x10
		::System::UInt32 _RecommendLocalizeEtcId_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _Schools_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _BonusElements_k__BackingField; // 0x28

		::System::Void set_ConquestBonusId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_SET_CONQUESTBONUSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConquestBonusId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_GET_CONQUESTBONUSID_OFFSET))(nullptr);
		}

		::System::Void set_Schools(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_SET_SCHOOLS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BonusElements()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_GET_BONUSELEMENTS_OFFSET))(nullptr);
		}

		::System::Void set_RecommendLocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_SET_RECOMMENDLOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestGroupBonusExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestGroupBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_RecommendLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_GET_RECOMMENDLOCALIZEETCID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Schools()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_GET_SCHOOLS_OFFSET))(nullptr);
		}

		::System::Void set_BonusElements(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTGROUPBONUSEXCELDATA_SET_BONUSELEMENTS_OFFSET))(arg, nullptr);
		}

	};
}

