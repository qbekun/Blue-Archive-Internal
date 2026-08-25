#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BeamSplashValue; }
namespace MX::Logic::Data { class ChainBeamValue; }

#define <>C__DISPLAYCLASS61_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x12441B0)
#define <>C__DISPLAYCLASS61_0__SETDAMAGEDISTRIBUTERATE_B__0_OFFSET UNITYSDK_OFFSET(0x12441E0)
#define <>C__DISPLAYCLASS61_0__SETDAMAGEDISTRIBUTERATE_B__1_OFFSET UNITYSDK_OFFSET(0x1244260)

	inline static constexpr unsigned int <>c__DisplayClass61_0_TypeDefinitionIndex = 13948;

	class <>c__DisplayClass61_0 : public Il2CppObject
	{
	public:
		::System::Int64 rate; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS61_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetDamageDistributeRate_b__0(::MX::Logic::Data::BeamSplashValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BeamSplashValue*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS61_0__SETDAMAGEDISTRIBUTERATE_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetDamageDistributeRate_b__1(::MX::Logic::Data::ChainBeamValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::ChainBeamValue*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS61_0__SETDAMAGEDISTRIBUTERATE_B__1_OFFSET))(arg, nullptr);
		}

	};

