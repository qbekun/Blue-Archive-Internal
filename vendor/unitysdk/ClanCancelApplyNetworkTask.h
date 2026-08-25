#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANCANCELAPPLYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F25970)
#define CLANCANCELAPPLYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F25980)
#define CLANCANCELAPPLYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F25990)
#define CLANCANCELAPPLYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F259A0)
#define CLANCANCELAPPLYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F25A30)

	inline static constexpr unsigned int ClanCancelApplyNetworkTask_TypeDefinitionIndex = 2167;

	class ClanCancelApplyNetworkTask : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCANCELAPPLYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCANCELAPPLYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCANCELAPPLYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCANCELAPPLYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCANCELAPPLYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

