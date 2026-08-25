#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class ICCGCardData; }

#define MX_MINIGAMECCG_EVENTCARDSNAPSHOT_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1DCE640)
#define MX_MINIGAMECCG_EVENTCARDSNAPSHOT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1DCE650)
#define MX_MINIGAMECCG_EVENTCARDSNAPSHOT_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCE660)
#define MX_MINIGAMECCG_EVENTCARDSNAPSHOT_GET_ACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DCE670)
#define MX_MINIGAMECCG_EVENTCARDSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE680)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int EventCardSnapShot_TypeDefinitionIndex = 20570;

	class EventCardSnapShot : public Il2CppObject
	{
	public:
		::System::Int32 _EntityId_k__BackingField; // 0x10
		::System::Int32 _ActiveCost_k__BackingField; // 0x14
		::MX::MinigameCCG::CCGPlayer* _Owner_k__BackingField; // 0x18
		::MX::MinigameCCG::ICCGCardData* _Data_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGPlayer* get_Owner()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTCARDSNAPSHOT_GET_OWNER_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::ICCGCardData* get_Data()
		{
			return (return (::MX::MinigameCCG::ICCGCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTCARDSNAPSHOT_GET_DATA_OFFSET))(nullptr);
		}

		::System::Int32 get_EntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTCARDSNAPSHOT_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTCARDSNAPSHOT_GET_ACTIVECOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCardData* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCardData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTCARDSNAPSHOT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

