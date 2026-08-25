#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA690)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int FavorLevelStatModifierData_TypeDefinitionIndex = 13405;

	class FavorLevelStatModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::Int64 FavorCountMin; // 0x18
		::System::Int64 FavorCountMax; // 0x20
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

