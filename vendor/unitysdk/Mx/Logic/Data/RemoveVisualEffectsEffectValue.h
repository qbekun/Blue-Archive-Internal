#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class RemoveVisualEffectsEffectDAO; }

#define MX_LOGIC_DATA_REMOVEVISUALEFFECTSEFFECTVALUE_GET_TARGETEFFECTPREFABNAME_OFFSET UNITYSDK_OFFSET(0x123DDD0)
#define MX_LOGIC_DATA_REMOVEVISUALEFFECTSEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123DDE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RemoveVisualEffectsEffectValue_TypeDefinitionIndex = 13916;

	class RemoveVisualEffectsEffectValue : public Il2CppObject
	{
	public:
		::System::String* _TargetEffectPrefabName_k__BackingField; // 0x48

		::System::String* get_TargetEffectPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REMOVEVISUALEFFECTSEFFECTVALUE_GET_TARGETEFFECTPREFABNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REMOVEVISUALEFFECTSEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

