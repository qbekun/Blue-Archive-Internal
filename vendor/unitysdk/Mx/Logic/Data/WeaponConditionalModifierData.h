#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class WeaponConstraint; }

#define MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA7A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int WeaponConditionalModifierData_TypeDefinitionIndex = 13422;

	class WeaponConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Data::WeaponConstraint* WeaponConstraint; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

