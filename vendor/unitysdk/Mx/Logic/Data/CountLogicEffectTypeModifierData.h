#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA5E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountLogicEffectTypeModifierData_TypeDefinitionIndex = 13399;

	class CountLogicEffectTypeModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::String* LogicEffectType; // 0x18
		::System::Int32 CountMin; // 0x20
		::System::Int32 CountMax; // 0x24
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

