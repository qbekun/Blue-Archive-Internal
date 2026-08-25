#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class DamageTransferEffectDAO; }

#define MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1239010)
#define MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1239020)
#define MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_TRANSFERREDDAMAGEEFFECTLEVEL_OFFSET UNITYSDK_OFFSET(0x1239030)
#define MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239040)
#define MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_TRANSFERREDDAMAGEEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1239150)
#define MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_TRANSFERRATIO_OFFSET UNITYSDK_OFFSET(0x1239160)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageTransferEffectValue_TypeDefinitionIndex = 13878;

	class DamageTransferEffectValue : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _TransferRatio_k__BackingField; // 0x48
		::System::Int32 _DurationFrame_k__BackingField; // 0x50
		::System::Boolean _IsDispellable_k__BackingField; // 0x54
		::System::String* _TransferredDamageEffectGroupId_k__BackingField; // 0x58
		::System::Int32 _TransferredDamageEffectLevel_k__BackingField; // 0x60

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_TransferredDamageEffectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_TRANSFERREDDAMAGEEFFECTLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DamageTransferEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DamageTransferEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_TransferredDamageEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_TRANSFERREDDAMAGEEFFECTGROUPID_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TransferRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGETRANSFEREFFECTVALUE_GET_TRANSFERRATIO_OFFSET))(nullptr);
		}

	};
}

