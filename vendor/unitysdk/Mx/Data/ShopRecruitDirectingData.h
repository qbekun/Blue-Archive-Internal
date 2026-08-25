#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ShopRecruitSettingExcel; }
namespace FlatData { class GachaPhase; }

#define MX_DATA_SHOPRECRUITDIRECTINGDATA_GETCURRENTRECRUITSETTING_OFFSET UNITYSDK_OFFSET(0x195A290)
#define MX_DATA_SHOPRECRUITDIRECTINGDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x195A5B0)
#define MX_DATA_SHOPRECRUITDIRECTINGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195A610)
#define MX_DATA_SHOPRECRUITDIRECTINGDATA_GETDIRECTINGEXCELS_OFFSET UNITYSDK_OFFSET(0x195A620)

namespace MX::Data
{
	inline static constexpr unsigned int ShopRecruitDirectingData_TypeDefinitionIndex = 16402;

	class ShopRecruitDirectingData : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ShopRecruitSettingExcel* GetCurrentRecruitSetting()
		{
			return (return (::MX::Data::Excel::ShopRecruitSettingExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITDIRECTINGDATA_GETCURRENTRECRUITSETTING_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITDIRECTINGDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITDIRECTINGDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetDirectingExcels(::FlatData::GachaPhase* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::GachaPhase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITDIRECTINGDATA_GETDIRECTINGEXCELS_OFFSET))(arg, nullptr);
		}

	};
}

