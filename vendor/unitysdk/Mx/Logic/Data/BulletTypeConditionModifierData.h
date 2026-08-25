#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA450)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BulletTypeConditionModifierData_TypeDefinitionIndex = 13384;

	class BulletTypeConditionModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::FlatData::BulletType* BulletType; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

