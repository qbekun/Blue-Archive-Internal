#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace MX::GameData::DAO::Battle { class AreaEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_APPLYOFFSETROTATEENTITYDIRECTION_OFFSET UNITYSDK_OFFSET(0x1240B00)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_ROTATEENTITYDIRECTIONEVERYFRAME_OFFSET UNITYSDK_OFFSET(0x1240B10)
#define MX_LOGIC_DATA_AREAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1240B20)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_AREAABILITIES_OFFSET UNITYSDK_OFFSET(0x1241230)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_REMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x1241240)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_ATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x1241250)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1241260)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_CHECKBLOCKHIT_OFFSET UNITYSDK_OFFSET(0x1241270)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_ALLOWDUPLICATEHIT_OFFSET UNITYSDK_OFFSET(0x1241280)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x1241290)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_HITCHECKCOUPLINGKEY_OFFSET UNITYSDK_OFFSET(0x12412A0)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_COLLISIONPROPERTY_OFFSET UNITYSDK_OFFSET(0x12412B0)
#define MX_LOGIC_DATA_AREAENTITYVALUE_GET_HITFRAMES_OFFSET UNITYSDK_OFFSET(0x12412D0)
#define MX_LOGIC_DATA_AREAENTITYVALUE_ISREMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x12412E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AreaEntityValue_TypeDefinitionIndex = 13940;

	class AreaEntityValue : public Il2CppObject
	{
	public:
		::System::Boolean _AttachEntity_k__BackingField; // 0x160
		::System::Boolean _AllowDuplicateHit_k__BackingField; // 0x161
		::System::Int32 _Duration_k__BackingField; // 0x164
		::System::Boolean _RotateEntityDirectionEveryFrame_k__BackingField; // 0x168
		::System::Boolean _ApplyOffsetRotateEntityDirection_k__BackingField; // 0x169
		Il2CppObject* _HitFrames_k__BackingField; // 0x170
		::System::Boolean _RemoveEntityIfSkillCancel_k__BackingField; // 0x178
		Il2CppObject* _CollisionProperty_k__BackingField; // 0x17C
		::System::Boolean _CheckBlockHit_k__BackingField; // 0x188
		Il2CppObject* _AreaAbilities_k__BackingField; // 0x190
		::System::String* _HitCheckCouplingKey_k__BackingField; // 0x198
		::MX::Logic::Skills::MovingAreaOptions* _MovingAreaOption_k__BackingField; // 0x1A0

		::System::Boolean get_ApplyOffsetRotateEntityDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_APPLYOFFSETROTATEENTITYDIRECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_RotateEntityDirectionEveryFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_ROTATEENTITYDIRECTIONEVERYFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AreaEntityDAO* arg, ::System::Int32 arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AreaEntityDAO*, ::System::Int32, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* get_AreaAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_AREAABILITIES_OFFSET))(nullptr);
		}

		::System::Boolean get_RemoveEntityIfSkillCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_REMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_AttachEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_ATTACHENTITY_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckBlockHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_CHECKBLOCKHIT_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowDuplicateHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_ALLOWDUPLICATEHIT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::MovingAreaOptions* get_MovingAreaOption()
		{
			return ((::MX::Logic::Skills::MovingAreaOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_MOVINGAREAOPTION_OFFSET))(nullptr);
		}

		::System::String* get_HitCheckCouplingKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_HITCHECKCOUPLINGKEY_OFFSET))(nullptr);
		}

		Il2CppObject* get_CollisionProperty()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_COLLISIONPROPERTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_HitFrames()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_GET_HITFRAMES_OFFSET))(nullptr);
		}

		::System::Boolean IsRemoveEntityIfSkillCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAENTITYVALUE_ISREMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

	};
}

