#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign { class Strategy; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexaTile; }
namespace MX::Campaign { class HexaTileState; }

#define MX_CAMPAIGN_HEXATILE_GET_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1432240)
#define MX_CAMPAIGN_HEXATILE_SET_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1432250)
#define MX_CAMPAIGN_HEXATILE_GET_ISBATTLEREADY_OFFSET UNITYSDK_OFFSET(0x1432260)
#define MX_CAMPAIGN_HEXATILE_GET_STARTTILE_OFFSET UNITYSDK_OFFSET(0x1432280)
#define MX_CAMPAIGN_HEXATILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x14322F0)
#define MX_CAMPAIGN_HEXATILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1432300)
#define MX_CAMPAIGN_HEXATILE_CLONE_OFFSET UNITYSDK_OFFSET(0x14323D0)
#define MX_CAMPAIGN_HEXATILE_ISVALIDTILE_OFFSET UNITYSDK_OFFSET(0x1432430)
#define MX_CAMPAIGN_HEXATILE_EXTRACTTILESTATE_OFFSET UNITYSDK_OFFSET(0x1432470)

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaTile_TypeDefinitionIndex = 14884;

	class HexaTile : public Il2CppObject
	{
	public:
		::System::String* ResourcePath; // 0x10
		::System::Boolean IsHide; // 0x18
		::System::Boolean IsFog; // 0x19
		::System::Boolean CanNotMove; // 0x1A
		::MX::Campaign::HexLocation* Location; // 0x1C
		::MX::Campaign::Strategy* Strategy; // 0x28
		::MX::Campaign::HexaUnit* Unit; // 0x30
		::System::Boolean _PlayAnimation_k__BackingField; // 0x38
		::MX::Campaign::HexaUnit* ChallengeUnit; // 0x40

		::System::Boolean get_PlayAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_GET_PLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void set_PlayAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_SET_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBattleReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_GET_ISBATTLEREADY_OFFSET))(nullptr);
		}

		::System::Boolean get_StartTile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_GET_STARTTILE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexaTile* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTile* Clone()
		{
			return ((::MX::Campaign::HexaTile*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean IsValidTile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_ISVALIDTILE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileState* ExtractTileState()
		{
			return ((::MX::Campaign::HexaTileState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILE_EXTRACTTILESTATE_OFFSET))(nullptr);
		}

	};
}

