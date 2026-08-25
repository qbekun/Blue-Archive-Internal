#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class HeroSummary; }

#define ALMOSTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x13AFEE0)
#define ALMOSTEQUALITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13AFD50)
#define ALMOSTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13B00B0)

	inline static constexpr unsigned int AlmostEqualityComparer_TypeDefinitionIndex = 14467;

	class AlmostEqualityComparer : public Il2CppObject
	{
	public:
		::System::Boolean Equals(::MX::Logic::Battles::Summary::HeroSummary* arg, ::MX::Logic::Battles::Summary::HeroSummary* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::HeroSummary*, ::MX::Logic::Battles::Summary::HeroSummary*, ::PVOID))((::PBYTE)hIl2Cpp + ALMOSTEQUALITYCOMPARER_EQUALS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMOSTEQUALITYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode(::MX::Logic::Battles::Summary::HeroSummary* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Summary::HeroSummary*, ::PVOID))((::PBYTE)hIl2Cpp + ALMOSTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};

