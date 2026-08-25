#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class DispelLogicEffectGroupIdEffectDAO; }

#define MX_LOGIC_DATA_DISPELLOGICEFFECTGROUPIDEFFECTVALUE_GET_LOGICEFFECTGROUPIDTODISPEL_OFFSET UNITYSDK_OFFSET(0x12392B0)
#define MX_LOGIC_DATA_DISPELLOGICEFFECTGROUPIDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12392C0)
#define MX_LOGIC_DATA_DISPELLOGICEFFECTGROUPIDEFFECTVALUE_GET_DISPELCOUNT_OFFSET UNITYSDK_OFFSET(0x1239350)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DispelLogicEffectGroupIdEffectValue_TypeDefinitionIndex = 13881;

	class DispelLogicEffectGroupIdEffectValue : public Il2CppObject
	{
	public:
		::System::String* _LogicEffectGroupIdToDispel_k__BackingField; // 0x48
		::System::Int32 _DispelCount_k__BackingField; // 0x50

		::System::String* get_LogicEffectGroupIdToDispel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELLOGICEFFECTGROUPIDEFFECTVALUE_GET_LOGICEFFECTGROUPIDTODISPEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELLOGICEFFECTGROUPIDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DispelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELLOGICEFFECTGROUPIDEFFECTVALUE_GET_DISPELCOUNT_OFFSET))(nullptr);
		}

	};
}

