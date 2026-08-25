#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_GROUNDPASSIVESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E4F70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int GroundPassiveSetting_TypeDefinitionIndex = 13448;

	class GroundPassiveSetting : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GROUNDPASSIVESETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

