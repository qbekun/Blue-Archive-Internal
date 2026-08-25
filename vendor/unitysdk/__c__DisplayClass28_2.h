#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class Strategy; }
class HexaTileVisual;
class <>c__DisplayClass28_0;
class StrategyVisual;

#define <>C__DISPLAYCLASS28_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xF7E450)
#define <>C__DISPLAYCLASS28_2__MAKEHEXATILEMAP_B__2_OFFSET UNITYSDK_OFFSET(0xF7E460)

	inline static constexpr unsigned int <>c__DisplayClass28_2_TypeDefinitionIndex = 841;

	class <>c__DisplayClass28_2 : public Il2CppObject
	{
	public:
		::MX::Campaign::Strategy* strategy; // 0x10
		HexaTileVisual* tileVisual; // 0x18
		<>c__DisplayClass28_0* CS$__8__locals2; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS28_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _MakeHexaTileMap_b__2(StrategyVisual* arg)
		{
			((::System::Void(*)(StrategyVisual*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS28_2__MAKEHEXATILEMAP_B__2_OFFSET))(arg, nullptr);
		}

	};

