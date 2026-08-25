#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_MONITORINGDESCRIPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B03900)
#define SYSTEM_DIAGNOSTICS_MONITORINGDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9B03960)

namespace System::Diagnostics
{
	inline static constexpr unsigned int MonitoringDescriptionAttribute_TypeDefinitionIndex = 29261;

	class MonitoringDescriptionAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_MONITORINGDESCRIPTIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_MONITORINGDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

	};
}

