#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaSettingChangeRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ARENASETTINGCHANGENETWORKTASK_GET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0D2A0)
#define ARENASETTINGCHANGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0D2B0)
#define ARENASETTINGCHANGENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F0D2C0)
#define ARENASETTINGCHANGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D2D0)
#define ARENASETTINGCHANGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0D340)
#define ARENASETTINGCHANGENETWORKTASK_SET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0D440)
#define ARENASETTINGCHANGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0D450)

	inline static constexpr unsigned int ArenaSettingChangeNetworkTask_TypeDefinitionIndex = 2012;

	class ArenaSettingChangeNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaSettingChangeRequest* _Req_k__BackingField; // 0x40

		::MX::NetworkProtocol::ArenaSettingChangeRequest* get_Req()
		{
			return ((::MX::NetworkProtocol::ArenaSettingChangeRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASETTINGCHANGENETWORKTASK_GET_REQ_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASETTINGCHANGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASETTINGCHANGENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASETTINGCHANGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARENASETTINGCHANGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_Req(::MX::NetworkProtocol::ArenaSettingChangeRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaSettingChangeRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ARENASETTINGCHANGENETWORKTASK_SET_REQ_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASETTINGCHANGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

