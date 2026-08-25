#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexaTileState; }

#define MX_CAMPAIGN_HEXATILESTATE_GET_ID_OFFSET UNITYSDK_OFFSET(0x14388C0)
#define MX_CAMPAIGN_HEXATILESTATE_SET_ID_OFFSET UNITYSDK_OFFSET(0x14388D0)
#define MX_CAMPAIGN_HEXATILESTATE_GET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x14388E0)
#define MX_CAMPAIGN_HEXATILESTATE_SET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x14388F0)
#define MX_CAMPAIGN_HEXATILESTATE_GET_ISFOG_OFFSET UNITYSDK_OFFSET(0x1438900)
#define MX_CAMPAIGN_HEXATILESTATE_SET_ISFOG_OFFSET UNITYSDK_OFFSET(0x1438910)
#define MX_CAMPAIGN_HEXATILESTATE_GET_CANNOTMOVE_OFFSET UNITYSDK_OFFSET(0x1438920)
#define MX_CAMPAIGN_HEXATILESTATE_SET_CANNOTMOVE_OFFSET UNITYSDK_OFFSET(0x1438930)
#define MX_CAMPAIGN_HEXATILESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1438940)
#define MX_CAMPAIGN_HEXATILESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1438950)
#define MX_CAMPAIGN_HEXATILESTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x1438990)

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaTileState_TypeDefinitionIndex = 14896;

	class HexaTileState : public Il2CppObject
	{
	public:
		::System::Int32 _Id_k__BackingField; // 0x10
		::System::Boolean _IsHide_k__BackingField; // 0x14
		::System::Boolean _IsFog_k__BackingField; // 0x15
		::System::Boolean _CanNotMove_k__BackingField; // 0x16

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_GET_ISHIDE_OFFSET))(nullptr);
		}

		::System::Void set_IsHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_SET_ISHIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_GET_ISFOG_OFFSET))(nullptr);
		}

		::System::Void set_IsFog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_SET_ISFOG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanNotMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_GET_CANNOTMOVE_OFFSET))(nullptr);
		}

		::System::Void set_CanNotMove(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_SET_CANNOTMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexaTileState* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileState* Clone()
		{
			return ((::MX::Campaign::HexaTileState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILESTATE_CLONE_OFFSET))(nullptr);
		}

	};
}

