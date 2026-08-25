#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_PLAYTRACKBRANCHDATA_SHOULDSERIALIZEMUTETRACKGROUPNAME_OFFSET UNITYSDK_OFFSET(0x11FC170)
#define MX_LOGIC_DATA_PLAYTRACKBRANCHDATA_SHOULDSERIALIZEPLAYTRACKGROUPNAME_OFFSET UNITYSDK_OFFSET(0x11FC1B0)
#define MX_LOGIC_DATA_PLAYTRACKBRANCHDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC1F0)
#define MX_LOGIC_DATA_PLAYTRACKBRANCHDATA_SHOULDSERIALIZEINTERRUPTSKILLACTIONFRAME_OFFSET UNITYSDK_OFFSET(0x11FC200)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PlayTrackBranchData_TypeDefinitionIndex = 13724;

	class PlayTrackBranchData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* PlayTrackGroupName; // 0x10
		::Il2CppArray<::System::Object*>* MuteTrackGroupName; // 0x18
		::System::Boolean InterruptSkillAction; // 0x20
		::System::Int32 InterruptSkillActionFrame; // 0x24

		::System::Boolean ShouldSerializeMuteTrackGroupName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLAYTRACKBRANCHDATA_SHOULDSERIALIZEMUTETRACKGROUPNAME_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializePlayTrackGroupName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLAYTRACKBRANCHDATA_SHOULDSERIALIZEPLAYTRACKGROUPNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLAYTRACKBRANCHDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeInterruptSkillActionFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLAYTRACKBRANCHDATA_SHOULDSERIALIZEINTERRUPTSKILLACTIONFRAME_OFFSET))(nullptr);
		}

	};
}

