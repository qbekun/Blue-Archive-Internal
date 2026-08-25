#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class BlackboardKeyType; }

#define MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4560)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int WriteEntityToBlackboardEffectData_TypeDefinitionIndex = 13648;

	class WriteEntityToBlackboardEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* TargetSideFilter; // 0x58
		::MX::Logic::Data::BlackboardKeyType* BlackboardKeyType; // 0x5C
		::System::String* BlackboardKeyToWrite; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

