#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FontType; }

#define MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4300)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmuneInvokerLogicEffectIdCondtionEffectData_TypeDefinitionIndex = 13612;

	class ImmuneInvokerLogicEffectIdCondtionEffectData : public Il2CppObject
	{
	public:
		::System::String* ImmuneSkillType; // 0x68
		::System::String* ImmuneCategory; // 0x70
		::System::String* CheckLogicEffectGroupId; // 0x78
		::FlatData::FontType* FloaterType; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

