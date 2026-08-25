#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class IRandomService; }
namespace MX::Core::Math { class BasisPoint; }

#define MX_GAMELOGIC_SERVICE_PROBABILITYSERVICE_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xFC3990)
#define MX_GAMELOGIC_SERVICE_PROBABILITYSERVICE_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xFC3AE0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ProbabilityService_TypeDefinitionIndex = 12401;

	class ProbabilityService : public Il2CppObject
	{
	public:
		::System::Boolean IsSuccess(::MX::Core::Math::IRandomService* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROBABILITYSERVICE_ISSUCCESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Core::Math::IRandomService* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROBABILITYSERVICE_ISSUCCESS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

