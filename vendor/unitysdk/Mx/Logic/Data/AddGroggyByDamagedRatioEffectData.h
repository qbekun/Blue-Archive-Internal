#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3D90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddGroggyByDamagedRatioEffectData_TypeDefinitionIndex = 13546;

	class AddGroggyByDamagedRatioEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::String* EndConditionArgument; // 0x60
		::System::Int64 GroggyRatioByDamaged; // 0x68
		::System::Boolean Dispellable; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

