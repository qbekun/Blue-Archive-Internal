#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B4D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEDBSCHEMA_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1B5B4E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEDBSCHEMA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1B5B4F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidCarrierRecipeDBSchema_TypeDefinitionIndex = 18233;

	class InteractiveWorldRaidCarrierRecipeDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SkillId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SkillId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEDBSCHEMA_SET_SKILLID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SkillId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEDBSCHEMA_GET_SKILLID_OFFSET))(nullptr);
		}

	};
}

