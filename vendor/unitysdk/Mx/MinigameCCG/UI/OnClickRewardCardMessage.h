#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGCardRewardInfo; }

#define MX_MINIGAMECCG_UI_ONCLICKREWARDCARDMESSAGE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E1B3E0)
#define MX_MINIGAMECCG_UI_ONCLICKREWARDCARDMESSAGE_SET_INFO_OFFSET UNITYSDK_OFFSET(0x1E1B3F0)
#define MX_MINIGAMECCG_UI_ONCLICKREWARDCARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B400)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int OnClickRewardCardMessage_TypeDefinitionIndex = 20835;

	class OnClickRewardCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::MinigameCCG::UI::CCGCardRewardInfo* _Info_k__BackingField; // 0x18

		::MX::MinigameCCG::UI::CCGCardRewardInfo* get_Info()
		{
			return (return (::MX::MinigameCCG::UI::CCGCardRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREWARDCARDMESSAGE_GET_INFO_OFFSET))(nullptr);
		}

		::System::Void set_Info(::MX::MinigameCCG::UI::CCGCardRewardInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGCardRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREWARDCARDMESSAGE_SET_INFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::UI::CCGCardRewardInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGCardRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREWARDCARDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

