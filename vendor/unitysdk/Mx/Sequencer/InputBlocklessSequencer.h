#pragma once
#include "../../unitysdk.h"

#define MX_SEQUENCER_INPUTBLOCKLESSSEQUENCER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF95D0)

namespace MX::Sequencer
{
	inline static constexpr unsigned int InputBlocklessSequencer_TypeDefinitionIndex = 11153;

	class InputBlocklessSequencer : public CollectionFixup
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_INPUTBLOCKLESSSEQUENCER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

