#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaUnit; }

#define <>C__DISPLAYCLASS121_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x22A88E0)
#define <>C__DISPLAYCLASS121_0__SELECTSQUAD_B__0_OFFSET UNITYSDK_OFFSET(0x22A88F0)

	inline static constexpr unsigned int <>c__DisplayClass121_0_TypeDefinitionIndex = 4747;

	class <>c__DisplayClass121_0 : public Il2CppObject
	{
	public:
		::System::Int64 entityId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS121_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SelectSquad_b__0(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS121_0__SELECTSQUAD_B__0_OFFSET))(arg, nullptr);
		}

	};

