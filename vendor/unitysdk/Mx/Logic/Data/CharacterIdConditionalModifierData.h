#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA460)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CharacterIdConditionalModifierData_TypeDefinitionIndex = 13385;

	class CharacterIdConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		Il2CppObject* CharacterIdList; // 0x18
		::MX::Logic::Skills::TargetSideId* TargetSide; // 0x20
		::MX::Logic::Data::IncludeType* IncludeType; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

