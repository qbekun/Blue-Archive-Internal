#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FontType; }

#define MX_LOGIC_DATA_IMMUNEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F41F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmuneEffectData_TypeDefinitionIndex = 13606;

	class ImmuneEffectData : public Il2CppObject
	{
	public:
		::System::String* TargetLogicEffectTemplateId00; // 0x68
		::System::String* TargetLogicEffectTemplateId01; // 0x70
		::System::String* TargetLogicEffectTemplateId02; // 0x78
		::System::String* TargetLogicEffectTemplateId03; // 0x80
		::System::String* TargetLogicEffectTemplateId04; // 0x88
		::System::String* TargetLogicEffectTemplateId05; // 0x90
		::System::String* TargetLogicEffectTemplateId06; // 0x98
		::System::String* TargetLogicEffectTemplateId07; // 0xA0
		::System::String* TargetLogicEffectTemplateId08; // 0xA8
		::System::String* TargetLogicEffectTemplateId09; // 0xB0
		::System::String* TargetLogicEffectTemplateId10; // 0xB8
		::System::String* TargetLogicEffectTemplateId11; // 0xC0
		::System::String* TargetLogicEffectTemplateId12; // 0xC8
		::FlatData::FontType* FloaterType; // 0xD0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

