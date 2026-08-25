#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_DISPELLOGICEFFECTTEMPLATEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3FF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DispelLogicEffectTemplateEffectData_TypeDefinitionIndex = 13584;

	class DispelLogicEffectTemplateEffectData : public Il2CppObject
	{
	public:
		::System::String* LogicEffectTemplateToDispel; // 0x58
		::System::Int32 DispelCount; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELLOGICEFFECTTEMPLATEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

