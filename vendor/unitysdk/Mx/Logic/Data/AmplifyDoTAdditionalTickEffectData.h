#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class AmplifyDoTRemoveCondition; }

#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3DD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AmplifyDoTAdditionalTickEffectData_TypeDefinitionIndex = 13550;

	class AmplifyDoTAdditionalTickEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::FlatData::AmplifyDoTRemoveCondition* RemoveCondition; // 0x60
		::System::String* RemoveConditionArgument; // 0x68
		::System::Boolean Dispellable; // 0x70
		::System::String* TargetLogicEffectTemplateId; // 0x78
		::System::Int32 AdditionalTickDamageApplyCount; // 0x80
		::System::Int64 AdditionalTickDamageRate; // 0x88
		::System::Int32 AdditionalTickInterval; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

