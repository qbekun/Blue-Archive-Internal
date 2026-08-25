#pragma once
#include "unitysdk.h"

namespace MX::Data { class AcademyLocationData; }

#define <>C__DISPLAYCLASS49_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x275AB70)
#define <>C__DISPLAYCLASS49_3__GETTOOLTIPINFO_B__5_OFFSET UNITYSDK_OFFSET(0x275AB80)

	inline static constexpr unsigned int <>c__DisplayClass49_3_TypeDefinitionIndex = 7266;

	class <>c__DisplayClass49_3 : public Il2CppObject
	{
	public:
		Il2CppObject* openlocationIds; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetTooltipInfo_b__5(::MX::Data::AcademyLocationData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::AcademyLocationData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_3__GETTOOLTIPINFO_B__5_OFFSET))(arg, nullptr);
		}

	};

