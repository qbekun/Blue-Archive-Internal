#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class KnockbackDirection; }

#define MX_LOGIC_DATA_KNOCKBACKEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4320)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int KnockbackEffectData_TypeDefinitionIndex = 13613;

	class KnockbackEffectData : public Il2CppObject
	{
	public:
		::System::Int64 MoveDuration; // 0x58
		::System::Int64 MoveDistance; // 0x60
		::FlatData::KnockbackDirection* KnockbackDirection; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_KNOCKBACKEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

