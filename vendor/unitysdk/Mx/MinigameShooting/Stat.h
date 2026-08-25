#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::MinigameShooting { class Stat; }

#define MX_MINIGAMESHOOTING_STAT_SUM_OFFSET UNITYSDK_OFFSET(0x1469CA0)
#define MX_MINIGAMESHOOTING_STAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1469A40)
#define MX_MINIGAMESHOOTING_STAT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1469CB0)
#define MX_MINIGAMESHOOTING_STAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1464340)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Stat_TypeDefinitionIndex = 15105;

	class Stat : public ::System::Xml::Schema::XmlSchemaDatatype
	{
	public:
		::System::Int64 Sum(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT_SUM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 Multiply(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 op_Implicit(::MX::MinigameShooting::Stat* arg)
		{
			return ((::System::Int64(*)(::MX::MinigameShooting::Stat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

