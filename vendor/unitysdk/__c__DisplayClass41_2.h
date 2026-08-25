#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ShopRecruitExcel; }

#define <>C__DISPLAYCLASS41_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xA90190)
#define <>C__DISPLAYCLASS41_2__CHECKDUPLICATETHREESTARTAB_B__6_OFFSET UNITYSDK_OFFSET(0xA901E0)

	inline static constexpr unsigned int <>c__DisplayClass41_2_TypeDefinitionIndex = 7917;

	class <>c__DisplayClass41_2 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ShopRecruitExcel* x; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS41_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CheckDuplicateThreeStarTab_b__6(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS41_2__CHECKDUPLICATETHREESTARTAB_B__6_OFFSET))(arg, nullptr);
		}

	};

