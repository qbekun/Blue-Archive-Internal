#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ScenarioModeExcel; }

#define MX_DATA_SCENARIOMODEEXCELEXTENSION_OPEN_OFFSET UNITYSDK_OFFSET(0x193A4B0)

namespace MX::Data
{
	inline static constexpr unsigned int ScenarioModeExcelExtension_TypeDefinitionIndex = 16366;

	class ScenarioModeExcelExtension : public Il2CppObject
	{
	public:
		::System::Boolean Open(::MX::Data::Excel::ScenarioModeExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEEXCELEXTENSION_OPEN_OFFSET))(arg, arg, nullptr);
		}

	};
}

