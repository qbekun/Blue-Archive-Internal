#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA700)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PersonalityIdConditionalModifierData_TypeDefinitionIndex = 13412;

	class PersonalityIdConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		Il2CppObject* PersonalityIdList; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

