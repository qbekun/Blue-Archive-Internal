#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CircleAuraEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_CIRCLEAURAENTITYVALUE_GETBARRIERTRANSFERABILITIES_OFFSET UNITYSDK_OFFSET(0x1245C90)
#define MX_LOGIC_DATA_CIRCLEAURAENTITYVALUE_GET_BARRIERTRANSFERABILITIES_OFFSET UNITYSDK_OFFSET(0x1245CA0)
#define MX_LOGIC_DATA_CIRCLEAURAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1245CB0)
#define MX_LOGIC_DATA_CIRCLEAURAENTITYVALUE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1246010)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CircleAuraEntityValue_TypeDefinitionIndex = 13959;

	class CircleAuraEntityValue : public MeshTransformList
	{
	public:
		Il2CppObject* _BarrierTransferAbilities_k__BackingField; // 0x180
		::System::Int64 _Radius_k__BackingField; // 0x188

		Il2CppObject* GetBarrierTransferAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CIRCLEAURAENTITYVALUE_GETBARRIERTRANSFERABILITIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_BarrierTransferAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CIRCLEAURAENTITYVALUE_GET_BARRIERTRANSFERABILITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CircleAuraEntityDAO* arg, ::System::Int32 arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CircleAuraEntityDAO*, ::System::Int32, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CIRCLEAURAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 get_Radius()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CIRCLEAURAENTITYVALUE_GET_RADIUS_OFFSET))(nullptr);
		}

	};
}

