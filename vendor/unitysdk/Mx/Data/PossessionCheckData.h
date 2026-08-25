#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class PossessionCheckInfo&; }

#define MX_DATA_POSSESSIONCHECKDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x191E330)
#define MX_DATA_POSSESSIONCHECKDATA_TRYGETPOSSESSIONCHECKINFOCLIENT_OFFSET UNITYSDK_OFFSET(0x191E370)
#define MX_DATA_POSSESSIONCHECKDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x191E5C0)
#define MX_DATA_POSSESSIONCHECKDATA_TRYGETPOSSESSIONCHECKINFO_OFFSET UNITYSDK_OFFSET(0x191E5D0)

namespace MX::Data
{
	inline static constexpr unsigned int PossessionCheckData_TypeDefinitionIndex = 16287;

	class PossessionCheckData : public Il2CppObject
	{
	public:
		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPossessionCheckInfoClient(::System::Int64 arg, ::MX::Data::PossessionCheckInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::PossessionCheckInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKDATA_TRYGETPOSSESSIONCHECKINFOCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPossessionCheckInfo(::System::Int64 arg, ::MX::Data::PossessionCheckInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::PossessionCheckInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKDATA_TRYGETPOSSESSIONCHECKINFO_OFFSET))(arg, arg, nullptr);
		}

	};
}

