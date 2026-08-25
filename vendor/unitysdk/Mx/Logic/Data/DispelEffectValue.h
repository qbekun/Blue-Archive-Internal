#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::GameData::DAO::Battle { class DispelEffectDAO; }

#define MX_LOGIC_DATA_DISPELEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239210)
#define MX_LOGIC_DATA_DISPELEFFECTVALUE_GET_DISPELTARGET_OFFSET UNITYSDK_OFFSET(0x1239290)
#define MX_LOGIC_DATA_DISPELEFFECTVALUE_GET_DISPELCOUNT_OFFSET UNITYSDK_OFFSET(0x12392A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DispelEffectValue_TypeDefinitionIndex = 13880;

	class DispelEffectValue : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* _DispelTarget_k__BackingField; // 0x48
		::System::Int32 _DispelCount_k__BackingField; // 0x4C

		::System::Void .ctor(::MX::GameData::DAO::Battle::DispelEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DispelEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::LogicEffectCategory* get_DispelTarget()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELEFFECTVALUE_GET_DISPELTARGET_OFFSET))(nullptr);
		}

		::System::Int32 get_DispelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DISPELEFFECTVALUE_GET_DISPELCOUNT_OFFSET))(nullptr);
		}

	};
}

