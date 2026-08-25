#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CAFESUMMONCHARACTERNETWORKTASK_GET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0x1F14830)
#define CAFESUMMONCHARACTERNETWORKTASK_SET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0x1F14840)
#define CAFESUMMONCHARACTERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F14850)
#define CAFESUMMONCHARACTERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F148E0)
#define CAFESUMMONCHARACTERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F14970)
#define CAFESUMMONCHARACTERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F14C20)
#define CAFESUMMONCHARACTERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F14C30)

	inline static constexpr unsigned int CafeSummonCharacterNetworkTask_TypeDefinitionIndex = 2053;

	class CafeSummonCharacterNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetServerId_k__BackingField; // 0x40

		::System::Int64 get_TargetServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESUMMONCHARACTERNETWORKTASK_GET_TARGETSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TargetServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFESUMMONCHARACTERNETWORKTASK_SET_TARGETSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESUMMONCHARACTERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESUMMONCHARACTERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFESUMMONCHARACTERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESUMMONCHARACTERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESUMMONCHARACTERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

