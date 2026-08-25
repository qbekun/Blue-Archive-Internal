#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CostRegenBanEffectDAO; }

#define MX_LOGIC_DATA_COSTREGENBANEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236DF0)
#define MX_LOGIC_DATA_COSTREGENBANEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1236EA0)
#define MX_LOGIC_DATA_COSTREGENBANEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1236EB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CostRegenBanEffectValue_TypeDefinitionIndex = 13870;

	class CostRegenBanEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _DurationFrame_k__BackingField; // 0x48
		::System::Boolean _Dispellable_k__BackingField; // 0x50

		::System::Void .ctor(::MX::GameData::DAO::Battle::CostRegenBanEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CostRegenBanEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTREGENBANEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTREGENBANEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTREGENBANEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

	};
}

