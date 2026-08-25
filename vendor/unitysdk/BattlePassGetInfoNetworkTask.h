#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define BATTLEPASSGETINFONETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F0E410)
#define BATTLEPASSGETINFONETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0E420)
#define BATTLEPASSGETINFONETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0E4B0)
#define BATTLEPASSGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0E4C0)
#define BATTLEPASSGETINFONETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0E720)

	inline static constexpr unsigned int BattlePassGetInfoNetworkTask_TypeDefinitionIndex = 2019;

	class BattlePassGetInfoNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSGETINFONETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSGETINFONETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSGETINFONETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSGETINFONETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

