#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGStriker; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGEvent_KillStriker; }

#define MX_MINIGAMECCG_CCGEVENT_KILLSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD430)
#define MX_MINIGAMECCG_CCGEVENT_KILLSTRIKER_GET_STRIKERENTITYIDS_OFFSET UNITYSDK_OFFSET(0x1DCD530)
#define MX_MINIGAMECCG_CCGEVENT_KILLSTRIKER_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCD540)
#define MX_MINIGAMECCG_CCGEVENT_KILLSTRIKER_TRYMERGE_OFFSET UNITYSDK_OFFSET(0x1DCD550)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_KillStriker_TypeDefinitionIndex = 20551;

	class CCGEvent_KillStriker : public Il2CppObject
	{
	public:
		Il2CppObject* _StrikerEntityIds_k__BackingField; // 0x10
		::System::Int32 _SourceEntityId_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGStriker* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_KILLSTRIKER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_StrikerEntityIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_KILLSTRIKER_GET_STRIKERENTITYIDS_OFFSET))(nullptr);
		}

		::System::Int32 get_SourceEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_KILLSTRIKER_GET_SOURCEENTITYID_OFFSET))(nullptr);
		}

		::System::Boolean TryMerge(::MX::MinigameCCG::CCGEvent_KillStriker* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGEvent_KillStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_KILLSTRIKER_TRYMERGE_OFFSET))(arg, nullptr);
		}

	};
}

