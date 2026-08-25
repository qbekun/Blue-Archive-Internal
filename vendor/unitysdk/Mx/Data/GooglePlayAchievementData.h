#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class GooglePlayAchievementExcel&; }
namespace FlatData { class ConditionType; }

#define MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1869770)
#define MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1869D50)
#define MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x18697D0)
#define MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_TRYGETEXCELBYID_OFFSET UNITYSDK_OFFSET(0x1869E20)
#define MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_GETALL_OFFSET UNITYSDK_OFFSET(0x1869E80)
#define MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_GETALLBYCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1869ED0)

namespace MX::Data
{
	inline static constexpr unsigned int GooglePlayAchievementData_TypeDefinitionIndex = 15936;

	class GooglePlayAchievementData : public Il2CppObject
	{
	public:
		Il2CppObject* _achievementById; // 0x28
		Il2CppObject* _achievementsByConditionType; // 0x30

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetExcelById(::System::Int64 arg, ::MX::Data::Excel::GooglePlayAchievementExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::GooglePlayAchievementExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_TRYGETEXCELBYID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_GETALL_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllByConditionType(::FlatData::ConditionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GOOGLEPLAYACHIEVEMENTDATA_GETALLBYCONDITIONTYPE_OFFSET))(arg, nullptr);
		}

	};
}

