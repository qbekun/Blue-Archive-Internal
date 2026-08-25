#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_DISPELLOGICEFFECTGROUPIDEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3FE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DispelLogicEffectGroupIdEffectData_TypeDefinitionIndex = 13583;

	class DispelLogicEffectGroupIdEffectData : public Il2CppObject
	{
	public:
		::System::String* LogicEffectGroupIdToDispel; // 0x58
		::System::Int32 DispelCount; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELLOGICEFFECTGROUPIDEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

