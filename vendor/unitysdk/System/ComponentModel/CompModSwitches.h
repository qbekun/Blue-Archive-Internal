#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COMPMODSWITCHES_GET_COMMONDESIGNERSERVICES_OFFSET UNITYSDK_OFFSET(0x9B4C430)
#define SYSTEM_COMPONENTMODEL_COMPMODSWITCHES_GET_EVENTLOG_OFFSET UNITYSDK_OFFSET(0x9B4C510)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CompModSwitches_TypeDefinitionIndex = 29489;

	class CompModSwitches : public Il2CppObject
	{
	public:
		::System::Diagnostics::BooleanSwitch* commonDesignerServices; // 0x0
		::System::Diagnostics::TraceSwitch* eventLog; // 0x8

		::System::Diagnostics::BooleanSwitch* get_CommonDesignerServices()
		{
			return (return (::System::Diagnostics::BooleanSwitch*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPMODSWITCHES_GET_COMMONDESIGNERSERVICES_OFFSET))(nullptr);
		}

		::System::Diagnostics::TraceSwitch* get_EventLog()
		{
			return (return (::System::Diagnostics::TraceSwitch*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPMODSWITCHES_GET_EVENTLOG_OFFSET))(nullptr);
		}

	};
}

