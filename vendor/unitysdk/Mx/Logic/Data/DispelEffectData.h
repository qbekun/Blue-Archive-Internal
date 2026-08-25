#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }

#define MX_LOGIC_DATA_DISPELEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3FD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DispelEffectData_TypeDefinitionIndex = 13582;

	class DispelEffectData : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* DispelTarget; // 0x58
		::System::Int32 DispelCount; // 0x5C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

