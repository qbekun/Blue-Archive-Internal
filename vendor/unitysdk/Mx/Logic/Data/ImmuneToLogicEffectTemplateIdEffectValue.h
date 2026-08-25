#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FontType; }
namespace MX::GameData::DAO::Battle { class ImmuneEffectDAO; }

#define MX_LOGIC_DATA_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECTVALUE_GET_FLOATERTYPE_OFFSET UNITYSDK_OFFSET(0x123C720)
#define MX_LOGIC_DATA_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123C730)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmuneToLogicEffectTemplateIdEffectValue_TypeDefinitionIndex = 13904;

	class ImmuneToLogicEffectTemplateIdEffectValue : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* TargetLogicEffectTemplateIds; // 0x58
		::FlatData::FontType* _FloaterType_k__BackingField; // 0x60

		::FlatData::FontType* get_FloaterType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECTVALUE_GET_FLOATERTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ImmuneEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ImmuneEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

