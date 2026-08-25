#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11FB320)
#define MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_SHOULDSERIALIZERETREATLOGICEFFECTGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x11FB5E0)
#define MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FB630)
#define MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FB830)
#define MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBB10)
#define MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11FBB20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RetreatAppliedLogicEffectGroupid_TypeDefinitionIndex = 13686;

	class RetreatAppliedLogicEffectGroupid : public Il2CppObject
	{
	public:
		Il2CppObject* RetreatLogicEffectGroupIdList; // 0x10

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeRetreatLogicEffectGroupIdList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_SHOULDSERIALIZERETREATLOGICEFFECTGROUPIDLIST_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::RetreatAppliedLogicEffectGroupid&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::RetreatAppliedLogicEffectGroupid&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::RetreatAppliedLogicEffectGroupid&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::RetreatAppliedLogicEffectGroupid&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RETREATAPPLIEDLOGICEFFECTGROUPID_.CCTOR_OFFSET))(nullptr);
		}

	};
}

