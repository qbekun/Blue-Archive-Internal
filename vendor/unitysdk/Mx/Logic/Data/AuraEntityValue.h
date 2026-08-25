#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SameAuraCheckCondition; }
namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace MX::GameData::DAO::Battle { class AuraEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x12427E0)
#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_AREAABILITIES_OFFSET UNITYSDK_OFFSET(0x12427F0)
#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_ATTACHSPAWNTARGET_OFFSET UNITYSDK_OFFSET(0x1242800)
#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1242810)
#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1242820)
#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_ROTATEENTITYDIRECTIONEVERYFRAME_OFFSET UNITYSDK_OFFSET(0x1242830)
#define MX_LOGIC_DATA_AURAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1242840)
#define MX_LOGIC_DATA_AURAENTITYVALUE_ISREMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x1242C40)
#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_REMOVEENTITYIFSAMEENTITYSPAWN_OFFSET UNITYSDK_OFFSET(0x1242C50)
#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_REMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x1242C60)
#define MX_LOGIC_DATA_AURAENTITYVALUE_GET_APPLYOFFSETROTATEENTITYDIRECTION_OFFSET UNITYSDK_OFFSET(0x1242C70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AuraEntityValue_TypeDefinitionIndex = 13943;

	class AuraEntityValue : public Il2CppObject
	{
	public:
		::System::Boolean _AttachSpawnTarget_k__BackingField; // 0x160
		::System::Boolean RemoveEntityIfAttachSpawnTargetDie; // 0x161
		::System::Boolean _RotateEntityDirectionEveryFrame_k__BackingField; // 0x162
		::System::Boolean _ApplyOffsetRotateEntityDirection_k__BackingField; // 0x163
		::System::Int32 _Duration_k__BackingField; // 0x164
		::System::Int32 _Interval_k__BackingField; // 0x168
		::MX::Logic::Data::SameAuraCheckCondition* _RemoveEntityIfSameEntitySpawn_k__BackingField; // 0x16C
		::System::Boolean _RemoveEntityIfSkillCancel_k__BackingField; // 0x170
		::MX::Logic::Skills::MovingAreaOptions* _MovingAreaOption_k__BackingField; // 0x174
		Il2CppObject* _AreaAbilities_k__BackingField; // 0x178

		::MX::Logic::Skills::MovingAreaOptions* get_MovingAreaOption()
		{
			return ((::MX::Logic::Skills::MovingAreaOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_MOVINGAREAOPTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_AreaAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_AREAABILITIES_OFFSET))(nullptr);
		}

		::System::Boolean get_AttachSpawnTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_ATTACHSPAWNTARGET_OFFSET))(nullptr);
		}

		::System::Int32 get_Interval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_INTERVAL_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_RotateEntityDirectionEveryFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_ROTATEENTITYDIRECTIONEVERYFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AuraEntityDAO* arg, ::System::Int32 arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AuraEntityDAO*, ::System::Int32, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsRemoveEntityIfSkillCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_ISREMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SameAuraCheckCondition* get_RemoveEntityIfSameEntitySpawn()
		{
			return ((::MX::Logic::Data::SameAuraCheckCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_REMOVEENTITYIFSAMEENTITYSPAWN_OFFSET))(nullptr);
		}

		::System::Boolean get_RemoveEntityIfSkillCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_REMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyOffsetRotateEntityDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AURAENTITYVALUE_GET_APPLYOFFSETROTATEENTITYDIRECTION_OFFSET))(nullptr);
		}

	};
}

