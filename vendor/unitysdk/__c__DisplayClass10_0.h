#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MiniGameShootingGeasExcel; }

#define <>C__DISPLAYCLASS10_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1476B40)
#define <>C__DISPLAYCLASS10_0__PICKRANDOMGEAS_B__0_OFFSET UNITYSDK_OFFSET(0x1476B50)

	inline static constexpr unsigned int <>c__DisplayClass10_0_TypeDefinitionIndex = 15148;

	class <>c__DisplayClass10_0 : public Il2CppObject
	{
	public:
		Il2CppObject* hasGeas; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS10_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PickRandomGeas_b__0(::MX::Data::Excel::MiniGameShootingGeasExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::MiniGameShootingGeasExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS10_0__PICKRANDOMGEAS_B__0_OFFSET))(arg, nullptr);
		}

	};

