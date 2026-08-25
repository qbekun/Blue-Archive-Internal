#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FontType; }

#define MX_LOGIC_DATA_IMMUNEGENERALEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F42E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmuneGeneralEffectData_TypeDefinitionIndex = 13609;

	class ImmuneGeneralEffectData : public Il2CppObject
	{
	public:
		::System::String* ImmuneSkillType; // 0x68
		::System::String* ImmuneCategory; // 0x70
		::FlatData::FontType* FloaterType; // 0x78
		::System::String* ExceptLogicTemplateId00; // 0x80
		::System::String* ExceptLogicTemplateId01; // 0x88
		::System::String* ExceptLogicTemplateId02; // 0x90
		::System::String* ExceptLogicTemplateId03; // 0x98
		::System::String* ExceptLogicTemplateId04; // 0xA0
		::System::String* ExceptLogicTemplateId05; // 0xA8
		::System::String* ExceptLogicGroupId00; // 0xB0
		::System::String* ExceptLogicGroupId01; // 0xB8
		::System::String* ExceptLogicGroupId02; // 0xC0
		::System::String* ExceptLogicGroupId03; // 0xC8
		::System::String* ExceptLogicGroupId04; // 0xD0
		::System::String* ExceptLogicGroupId05; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEGENERALEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

