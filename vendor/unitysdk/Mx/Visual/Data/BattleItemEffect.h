#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class VisualEffectData; }

#define MX_VISUAL_DATA_BATTLEITEMEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA90)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int BattleItemEffect_TypeDefinitionIndex = 20227;

	class BattleItemEffect : public Il2CppObject
	{
	public:
		::System::String* BattleItemName; // 0x10
		::MX::Visual::Data::VisualEffectData* Effect; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_BATTLEITEMEFFECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

