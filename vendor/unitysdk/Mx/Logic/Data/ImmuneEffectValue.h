#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ImmuneEffectBaseDAO; }

#define MX_LOGIC_DATA_IMMUNEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x11F4210)
#define MX_LOGIC_DATA_IMMUNEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4220)
#define MX_LOGIC_DATA_IMMUNEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x11F42D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmuneEffectValue_TypeDefinitionIndex = 13608;

	class ImmuneEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _DurationFrame_k__BackingField; // 0x48
		::System::Boolean _Dispellable_k__BackingField; // 0x50

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

