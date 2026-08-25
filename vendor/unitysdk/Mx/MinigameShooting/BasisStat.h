#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::MinigameShooting { class BasisStat; }

#define MX_MINIGAMESHOOTING_BASISSTAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1469AE0)
#define MX_MINIGAMESHOOTING_BASISSTAT_SUM_OFFSET UNITYSDK_OFFSET(0x1469D10)
#define MX_MINIGAMESHOOTING_BASISSTAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1469D70)
#define MX_MINIGAMESHOOTING_BASISSTAT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1469DA0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BasisStat_TypeDefinitionIndex = 15108;

	class BasisStat : public ::System::Xml::Schema::XmlSchemaContentType
	{
	public:
		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BASISSTAT_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* Sum(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BASISSTAT_SUM_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Implicit(::MX::MinigameShooting::BasisStat* arg)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::MinigameShooting::BasisStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BASISSTAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* Multiply(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BASISSTAT_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

