#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGCardRewardInfo; }

#define MX_MINIGAMECCG_UI_ONCLICKUICARDMESSAGE_SET_INFO_OFFSET UNITYSDK_OFFSET(0x1DFACB0)
#define MX_MINIGAMECCG_UI_ONCLICKUICARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFACC0)
#define MX_MINIGAMECCG_UI_ONCLICKUICARDMESSAGE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DFACF0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int OnClickUICardMessage_TypeDefinitionIndex = 20735;

	class OnClickUICardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::MinigameCCG::UI::CCGCardRewardInfo* _Info_k__BackingField; // 0x18

		::System::Void set_Info(::MX::MinigameCCG::UI::CCGCardRewardInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGCardRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKUICARDMESSAGE_SET_INFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::UI::CCGCardRewardInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGCardRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKUICARDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::UI::CCGCardRewardInfo* get_Info()
		{
			return (return (::MX::MinigameCCG::UI::CCGCardRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKUICARDMESSAGE_GET_INFO_OFFSET))(nullptr);
		}

	};
}

