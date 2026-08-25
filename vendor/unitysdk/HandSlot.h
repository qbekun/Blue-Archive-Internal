#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define HANDSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1376770)

	inline static constexpr unsigned int HandSlot_TypeDefinitionIndex = 14380;

	class HandSlot : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* SkillCard; // 0x10
		::System::Int64 SlotCoolFrame; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANDSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

