#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CafeInteractionExcel; }

#define MX_DATA_CAFEVISITIGNOREINFO_CANVISITWHENUNOBTAINED_OFFSET UNITYSDK_OFFSET(0x1832D80)
#define MX_DATA_CAFEVISITIGNOREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1832DF0)

namespace MX::Data
{
	inline static constexpr unsigned int CafeVisitIgnoreInfo_TypeDefinitionIndex = 15735;

	class CafeVisitIgnoreInfo : public Il2CppObject
	{
	public:
		::System::Int64 CharacterUniqueId; // 0x10
		::System::Boolean _ignoreIfUnobtained; // 0x18
		::System::DateTime* _startTime; // 0x20
		::System::DateTime* _endTime; // 0x28

		::System::Boolean CanVisitWhenUnobtained(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEVISITIGNOREINFO_CANVISITWHENUNOBTAINED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CafeInteractionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CafeInteractionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEVISITIGNOREINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

