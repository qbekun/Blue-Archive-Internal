#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class DispelLogicEffectTemplateEffectDAO; }

#define MX_LOGIC_DATA_DISPELLOGICEFFECTTEMPLATEEFFECTVALUE_GET_DISPELCOUNT_OFFSET UNITYSDK_OFFSET(0x1239360)
#define MX_LOGIC_DATA_DISPELLOGICEFFECTTEMPLATEEFFECTVALUE_GET_LOGICEFFECTTEMPLATEHASHTODISPEL_OFFSET UNITYSDK_OFFSET(0x1239370)
#define MX_LOGIC_DATA_DISPELLOGICEFFECTTEMPLATEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239380)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DispelLogicEffectTemplateEffectValue_TypeDefinitionIndex = 13882;

	class DispelLogicEffectTemplateEffectValue : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _LogicEffectTemplateHashToDispel_k__BackingField; // 0x48
		::System::Int32 _DispelCount_k__BackingField; // 0x50

		::System::Int32 get_DispelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELLOGICEFFECTTEMPLATEEFFECTVALUE_GET_DISPELCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LogicEffectTemplateHashToDispel()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELLOGICEFFECTTEMPLATEEFFECTVALUE_GET_LOGICEFFECTTEMPLATEHASHTODISPEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELLOGICEFFECTTEMPLATEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

