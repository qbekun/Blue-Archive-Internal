#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetingType; }
namespace MX::GameData::DAO::Battle { class RemoveAreaEntityEffectDAO; }

#define MX_LOGIC_DATA_REMOVEAREAENTITYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123DD20)
#define MX_LOGIC_DATA_REMOVEAREAENTITYEFFECTVALUE_GET_REMOVEAREATYPE_OFFSET UNITYSDK_OFFSET(0x123DDB0)
#define MX_LOGIC_DATA_REMOVEAREAENTITYEFFECTVALUE_GET_TARGETAREAENTITYNAME_OFFSET UNITYSDK_OFFSET(0x123DDC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RemoveAreaEntityEffectValue_TypeDefinitionIndex = 13915;

	class RemoveAreaEntityEffectValue : public Il2CppObject
	{
	public:
		::System::String* _TargetAreaEntityName_k__BackingField; // 0x48
		::MX::Logic::Skills::TargetingType* _RemoveAreaType_k__BackingField; // 0x50

		::System::Void .ctor(::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REMOVEAREAENTITYEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::TargetingType* get_RemoveAreaType()
		{
			return ((::MX::Logic::Skills::TargetingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REMOVEAREAENTITYEFFECTVALUE_GET_REMOVEAREATYPE_OFFSET))(nullptr);
		}

		::System::String* get_TargetAreaEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REMOVEAREAENTITYEFFECTVALUE_GET_TARGETAREAENTITYNAME_OFFSET))(nullptr);
		}

	};
}

