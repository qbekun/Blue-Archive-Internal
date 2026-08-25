#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace MX::Logic::Data { class AreaCollisionProperty; }

#define MX_LOGIC_DATA_LEVELAREAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAAD0)
#define MX_LOGIC_DATA_LEVELAREAENTITYDATA_SORTANDREMOVEDUPLICATEDHITFRAMES_OFFSET UNITYSDK_OFFSET(0x11FAC00)
#define MX_LOGIC_DATA_LEVELAREAENTITYDATA_SHOULDSERIALIZEHITCHECKCOUPLINGKEY_OFFSET UNITYSDK_OFFSET(0x11FAD90)
#define MX_LOGIC_DATA_LEVELAREAENTITYDATA_SHOULDSERIALIZEHITFRAMES_OFFSET UNITYSDK_OFFSET(0x11FADB0)
#define MX_LOGIC_DATA_LEVELAREAENTITYDATA_SHOULDSERIALIZEAREAABILITIES_OFFSET UNITYSDK_OFFSET(0x11FAE00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelAreaEntityData_TypeDefinitionIndex = 13675;

	class LevelAreaEntityData : public Il2CppObject
	{
	public:
		::System::Boolean AttachTarget; // 0x150
		::System::Boolean AllowDuplicateHit; // 0x151
		::System::Boolean RemoveEntityIfSkillCancel; // 0x152
		::System::Int32 Duration; // 0x154
		::System::Boolean RotateEntityDirectionEveryFrame; // 0x158
		::System::Boolean ApplyOffsetRotateEntityDirection; // 0x159
		::MX::Logic::Skills::MovingAreaOptions* MovingAreaOption; // 0x15C
		Il2CppObject* HitFrames; // 0x160
		::MX::Logic::Data::AreaCollisionProperty* CollisionProperty; // 0x168
		::System::Boolean CheckBlockHit; // 0x170
		Il2CppObject* AreaAbilities; // 0x178
		::System::String* HitCheckCouplingKey; // 0x180

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELAREAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SortAndRemoveDuplicatedHitFrames()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELAREAENTITYDATA_SORTANDREMOVEDUPLICATEDHITFRAMES_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeHitCheckCouplingKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELAREAENTITYDATA_SHOULDSERIALIZEHITCHECKCOUPLINGKEY_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeHitFrames()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELAREAENTITYDATA_SHOULDSERIALIZEHITFRAMES_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAreaAbilities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELAREAENTITYDATA_SHOULDSERIALIZEAREAABILITIES_OFFSET))(nullptr);
		}

	};
}

