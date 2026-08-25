#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ArmorType; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_ARMORCONDITIONMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA440)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ArmorConditionModifierData_TypeDefinitionIndex = 13383;

	class ArmorConditionModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::FlatData::ArmorType* ArmorType; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORCONDITIONMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

