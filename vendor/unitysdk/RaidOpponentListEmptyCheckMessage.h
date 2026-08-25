#pragma once
#include "unitysdk.h"

#define RAIDOPPONENTLISTEMPTYCHECKMESSAGE_SET_ISLISTEMPTY_OFFSET UNITYSDK_OFFSET(0x2788040)
#define RAIDOPPONENTLISTEMPTYCHECKMESSAGE_GET_NOWUPDATING_OFFSET UNITYSDK_OFFSET(0x2788050)
#define RAIDOPPONENTLISTEMPTYCHECKMESSAGE_GET_ISLISTEMPTY_OFFSET UNITYSDK_OFFSET(0x2788060)
#define RAIDOPPONENTLISTEMPTYCHECKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2787040)
#define RAIDOPPONENTLISTEMPTYCHECKMESSAGE_SET_NOWUPDATING_OFFSET UNITYSDK_OFFSET(0x2788070)

	inline static constexpr unsigned int RaidOpponentListEmptyCheckMessage_TypeDefinitionIndex = 7408;

	class RaidOpponentListEmptyCheckMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Boolean _IsListEmpty_k__BackingField; // 0x18
		::System::Boolean _NowUpdating_k__BackingField; // 0x19

		::System::Void set_IsListEmpty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTEMPTYCHECKMESSAGE_SET_ISLISTEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NowUpdating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTEMPTYCHECKMESSAGE_GET_NOWUPDATING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsListEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTEMPTYCHECKMESSAGE_GET_ISLISTEMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTEMPTYCHECKMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_NowUpdating(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTEMPTYCHECKMESSAGE_SET_NOWUPDATING_OFFSET))(arg, nullptr);
		}

	};

