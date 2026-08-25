#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERDBSCHEMA_GET_CARRIERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1B57520)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B57530)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERDBSCHEMA_SET_CARRIERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1B57540)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidCarrierDBSchema_TypeDefinitionIndex = 18216;

	class InteractiveWorldRaidCarrierDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CarrierSkillListGroupId_k__BackingField; // 0x20

		::System::Int64 get_CarrierSkillListGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERDBSCHEMA_GET_CARRIERSKILLLISTGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkillListGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERDBSCHEMA_SET_CARRIERSKILLLISTGROUPID_OFFSET))(arg, nullptr);
		}

	};
}

