#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ARENACUMULATIVETIMEREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F088F0)
#define ARENACUMULATIVETIMEREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F08900)
#define ARENACUMULATIVETIMEREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F08990)
#define ARENACUMULATIVETIMEREWARDNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F089A0)
#define ARENACUMULATIVETIMEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F089B0)

	inline static constexpr unsigned int ArenaCumulativeTimeRewardNetworkTask_TypeDefinitionIndex = 1988;

	class ArenaCumulativeTimeRewardNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENACUMULATIVETIMEREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENACUMULATIVETIMEREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENACUMULATIVETIMEREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENACUMULATIVETIMEREWARDNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARENACUMULATIVETIMEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

