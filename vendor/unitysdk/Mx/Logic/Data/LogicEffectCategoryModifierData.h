#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA6D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectCategoryModifierData_TypeDefinitionIndex = 13409;

	class LogicEffectCategoryModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::FlatData::LogicEffectCategory* LogicEffectCategory; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

