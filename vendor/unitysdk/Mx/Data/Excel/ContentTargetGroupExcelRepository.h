#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TargetGroup; }

#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_SELECT_TARGETGROUPS_OFFSET UNITYSDK_OFFSET(0x1A76280)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_SELECT_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1A76680)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A769D0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_SELECTFIRST_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1A76B40)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A76EA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentTargetGroupExcelRepository_TypeDefinitionIndex = 17353;

	class ContentTargetGroupExcelRepository : public ::FlatData::BillingTransactionEndType
	{
	public:
		Il2CppObject* Select_TargetGroups(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_SELECT_TARGETGROUPS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TargetGroup(::FlatData::TargetGroup* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TargetGroup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_SELECT_TARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_TargetGroup(::FlatData::TargetGroup* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TargetGroup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_SELECTFIRST_TARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

