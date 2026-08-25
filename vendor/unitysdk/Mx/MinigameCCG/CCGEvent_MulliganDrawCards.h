#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_MULLIGANDRAWCARDS_GET_CARDS_OFFSET UNITYSDK_OFFSET(0x1DCE800)
#define MX_MINIGAMECCG_CCGEVENT_MULLIGANDRAWCARDS_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCE810)
#define MX_MINIGAMECCG_CCGEVENT_MULLIGANDRAWCARDS_GET_CANMULLIGAN_OFFSET UNITYSDK_OFFSET(0x1DCE820)
#define MX_MINIGAMECCG_CCGEVENT_MULLIGANDRAWCARDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE830)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_MulliganDrawCards_TypeDefinitionIndex = 20572;

	class CCGEvent_MulliganDrawCards : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Cards_k__BackingField; // 0x18
		::System::Boolean _CanMulligan_k__BackingField; // 0x20

		::Il2CppArray<::System::Object*>* get_Cards()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_MULLIGANDRAWCARDS_GET_CARDS_OFFSET))(nullptr);
		}

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_MULLIGANDRAWCARDS_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Boolean get_CanMulligan()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_MULLIGANDRAWCARDS_GET_CANMULLIGAN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_MULLIGANDRAWCARDS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

