#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ScenarioResourceInfoExcel; }

#define MX_DATA_SCENARIORESOURCEINFOEXCELEXTENSION_ISOPENEDSERVERTIME_OFFSET UNITYSDK_OFFSET(0x197CD70)
#define MX_DATA_SCENARIORESOURCEINFOEXCELEXTENSION_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x197CE10)
#define MX_DATA_SCENARIORESOURCEINFOEXCELEXTENSION_ISOPENED_OFFSET UNITYSDK_OFFSET(0x197CE30)
#define MX_DATA_SCENARIORESOURCEINFOEXCELEXTENSION_ISOPENEDORFORCEENTERED_OFFSET UNITYSDK_OFFSET(0x197CF70)

namespace MX::Data
{
	inline static constexpr unsigned int ScenarioResourceInfoExcelExtension_TypeDefinitionIndex = 16510;

	class ScenarioResourceInfoExcelExtension : public Il2CppObject
	{
	public:
		::System::Boolean IsOpenedServerTime(::MX::Data::Excel::ScenarioResourceInfoExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ScenarioResourceInfoExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEINFOEXCELEXTENSION_ISOPENEDSERVERTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefault(::MX::Data::Excel::ScenarioResourceInfoExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ScenarioResourceInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEINFOEXCELEXTENSION_ISDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpened(::MX::Data::Excel::ScenarioResourceInfoExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ScenarioResourceInfoExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEINFOEXCELEXTENSION_ISOPENED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsOpenedOrForceEntered(::MX::Data::Excel::ScenarioResourceInfoExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ScenarioResourceInfoExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEINFOEXCELEXTENSION_ISOPENEDORFORCEENTERED_OFFSET))(arg, arg, nullptr);
		}

	};
}

