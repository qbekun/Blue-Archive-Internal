#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::GameData::DAO::Battle { class HealConvertDamageEffectDAO; }

#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123B0F0)
#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x123B220)
#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_TRANSFERREDHEALDAMAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x123B230)
#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123B240)
#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x123B250)
#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_DAMAGECHECKGROUPID_OFFSET UNITYSDK_OFFSET(0x123B260)
#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x123B270)
#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_TRANSFERRATIO_OFFSET UNITYSDK_OFFSET(0x123B280)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealConvertDamageEffectValue_TypeDefinitionIndex = 13894;

	class HealConvertDamageEffectValue : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _TransferRatio_k__BackingField; // 0x48
		::System::Int32 _Duration_k__BackingField; // 0x50
		::System::Boolean _Dispellable_k__BackingField; // 0x54
		::System::String* _DamageCheckGroupID_k__BackingField; // 0x58
		::System::String* _TransferredHealDamageGroupID_k__BackingField; // 0x60
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio_k__BackingField; // 0x68
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio2_k__BackingField; // 0x6C

		::System::Void .ctor(::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::String* get_TransferredHealDamageGroupID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_TRANSFERREDHEALDAMAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio2()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET))(nullptr);
		}

		::System::String* get_DamageCheckGroupID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_DAMAGECHECKGROUPID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TransferRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTVALUE_GET_TRANSFERRATIO_OFFSET))(nullptr);
		}

	};
}

