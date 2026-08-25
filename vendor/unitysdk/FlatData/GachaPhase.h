#pragma once
#include "../unitysdk.h"

namespace FlatData { class GachaPhase; }

namespace FlatData
{
	inline static constexpr unsigned int GachaPhase_TypeDefinitionIndex = 9524;

	class GachaPhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::GachaPhase* GachaIntro; // 0x0
		::FlatData::GachaPhase* CharacterAppearance; // 0x0
		::FlatData::GachaPhase* SignatureIntro; // 0x0
		::FlatData::GachaPhase* SignatureWait; // 0x0
		::FlatData::GachaPhase* SignatureConfirm; // 0x0
		::FlatData::GachaPhase* Result; // 0x0

	};
}

