#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANAUTOJOINNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F25410)
#define CLANAUTOJOINNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F25420)
#define CLANAUTOJOINNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F25430)
#define CLANAUTOJOINNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F25440)
#define CLANAUTOJOINNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F25670)

	inline static constexpr unsigned int ClanAutoJoinNetworkTask_TypeDefinitionIndex = 2165;

	class ClanAutoJoinNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAUTOJOINNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAUTOJOINNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAUTOJOINNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANAUTOJOINNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAUTOJOINNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

