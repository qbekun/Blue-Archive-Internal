#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDDECLINENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F78D80)
#define FRIENDDECLINENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F78D90)
#define FRIENDDECLINENETWORKTASK_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F78FF0)
#define FRIENDDECLINENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F79000)
#define FRIENDDECLINENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F79010)
#define FRIENDDECLINENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F79020)
#define FRIENDDECLINENETWORKTASK_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F790B0)

	inline static constexpr unsigned int FriendDeclineNetworkTask_TypeDefinitionIndex = 2561;

	class FriendDeclineNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDDECLINENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDDECLINENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_TargetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDDECLINENETWORKTASK_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDDECLINENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDDECLINENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDDECLINENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDDECLINENETWORKTASK_GET_TARGETID_OFFSET))(nullptr);
		}

	};

