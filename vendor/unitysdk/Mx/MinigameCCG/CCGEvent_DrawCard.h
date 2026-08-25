#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class EventCardSnapShot; }
namespace MX::MinigameCCG { class CCGEntityLocation; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGCard; }

#define MX_MINIGAMECCG_CCGEVENT_DRAWCARD_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1DCE6E0)
#define MX_MINIGAMECCG_CCGEVENT_DRAWCARD_GET_ISPREVIEW_OFFSET UNITYSDK_OFFSET(0x1DCE6F0)
#define MX_MINIGAMECCG_CCGEVENT_DRAWCARD_GET_CARDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1DCE700)
#define MX_MINIGAMECCG_CCGEVENT_DRAWCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE710)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_DrawCard_TypeDefinitionIndex = 20571;

	class CCGEvent_DrawCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::EventCardSnapShot* _CardSnapShot_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGEntityLocation* _Destination_k__BackingField; // 0x18
		::System::Boolean _IsPreview_k__BackingField; // 0x1C

		::MX::MinigameCCG::CCGEntityLocation* get_Destination()
		{
			return (return (::MX::MinigameCCG::CCGEntityLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DRAWCARD_GET_DESTINATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPreview()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DRAWCARD_GET_ISPREVIEW_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::EventCardSnapShot* get_CardSnapShot()
		{
			return (return (::MX::MinigameCCG::EventCardSnapShot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DRAWCARD_GET_CARDSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::CCGCard* arg, ::MX::MinigameCCG::CCGEntityLocation* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::CCGCard*, ::MX::MinigameCCG::CCGEntityLocation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DRAWCARD_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

