#pragma once
#include "unitysdk.h"

class <>c__DisplayClass24_0;
namespace MX::Conquest { class ConquestTile; }

#define <>C__DISPLAYCLASS24_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xF95AE0)
#define <>C__DISPLAYCLASS24_2__CREATECONQUESTSTEPSUMMARY_B__7_OFFSET UNITYSDK_OFFSET(0xF965C0)

	inline static constexpr unsigned int <>c__DisplayClass24_2_TypeDefinitionIndex = 12292;

	class <>c__DisplayClass24_2 : public Il2CppObject
	{
	public:
		Il2CppObject* aliveErosionDBs; // 0x10
		<>c__DisplayClass24_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CreateConquestStepSummary_b__7(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_2__CREATECONQUESTSTEPSUMMARY_B__7_OFFSET))(arg, nullptr);
		}

	};

