#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TargetGroup; }

#define MX_DATA_EXCEL_CONTENTTARGETGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A76250)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPDBSCHEMA_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1A76260)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPDBSCHEMA_SET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1A76270)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentTargetGroupDBSchema_TypeDefinitionIndex = 17348;

	class ContentTargetGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::TargetGroup* _TargetGroup_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPDBSCHEMA_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Void set_TargetGroup(::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPDBSCHEMA_SET_TARGETGROUP_OFFSET))(arg, nullptr);
		}

	};
}

