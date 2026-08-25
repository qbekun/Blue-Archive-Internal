#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetingType; }

#define MX_LOGIC_DATA_REMOVEAREAENTITYEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F43E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RemoveAreaEntityEffectData_TypeDefinitionIndex = 13624;

	class RemoveAreaEntityEffectData : public Il2CppObject
	{
	public:
		::System::String* TargetAreaEntityName; // 0x58
		::MX::Logic::Skills::TargetingType* RemoveAreaType; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REMOVEAREAENTITYEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

