#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaUnit; }

#define <>C__DISPLAYCLASS108_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x22A7890)
#define <>C__DISPLAYCLASS108_1__OPENFORMATION_B__0_OFFSET UNITYSDK_OFFSET(0x22A78A0)

	inline static constexpr unsigned int <>c__DisplayClass108_1_TypeDefinitionIndex = 4739;

	class <>c__DisplayClass108_1 : public Il2CppObject
	{
	public:
		::System::Int32 findIndex; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS108_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OpenFormation_b__0(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS108_1__OPENFORMATION_B__0_OFFSET))(arg, nullptr);
		}

	};

