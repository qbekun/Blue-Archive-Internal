#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterCalculationLimitExcel; }

#define DAMAGELIMITCHECKER_APPLYLIMIT_OFFSET UNITYSDK_OFFSET(0x189ACE0)
#define DAMAGELIMITCHECKER_GETIDEALMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0x1899F00)
#define DAMAGELIMITCHECKER_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x189AEF0)
#define DAMAGELIMITCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1899BC0)

	inline static constexpr unsigned int DamageLimitChecker_TypeDefinitionIndex = 15993;

	class DamageLimitChecker : public Il2CppObject
	{
	public:
		Il2CppObject* reductionRanges; // 0x10
		::System::Int64 MinDamage; // 0x18
		::System::Int64 MaxDamage; // 0x20

		::System::Int64 ApplyLimit(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGELIMITCHECKER_APPLYLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetIdealMaxDamage()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGELIMITCHECKER_GETIDEALMAXDAMAGE_OFFSET))(nullptr);
		}

		::System::Void Deconstruct(int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGELIMITCHECKER_DECONSTRUCT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterCalculationLimitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterCalculationLimitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGELIMITCHECKER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

