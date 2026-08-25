#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestTile; }

#define <>C__DISPLAYCLASS24_4_.CTOR_OFFSET UNITYSDK_OFFSET(0xF96580)
#define <>C__DISPLAYCLASS24_4__CREATECONQUESTSTEPSUMMARY_B__11_OFFSET UNITYSDK_OFFSET(0xF96700)

	inline static constexpr unsigned int <>c__DisplayClass24_4_TypeDefinitionIndex = 12294;

	class <>c__DisplayClass24_4 : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTile* eroded; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CreateConquestStepSummary_b__11(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_4__CREATECONQUESTSTEPSUMMARY_B__11_OFFSET))(arg, nullptr);
		}

	};

