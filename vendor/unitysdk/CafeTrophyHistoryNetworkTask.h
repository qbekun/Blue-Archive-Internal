#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CAFETROPHYHISTORYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F14F50)
#define CAFETROPHYHISTORYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F14FE0)
#define CAFETROPHYHISTORYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F15170)
#define CAFETROPHYHISTORYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F15200)
#define CAFETROPHYHISTORYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F15210)

	inline static constexpr unsigned int CafeTrophyHistoryNetworkTask_TypeDefinitionIndex = 2055;

	class CafeTrophyHistoryNetworkTask : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETROPHYHISTORYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETROPHYHISTORYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETROPHYHISTORYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETROPHYHISTORYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETROPHYHISTORYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

	};

