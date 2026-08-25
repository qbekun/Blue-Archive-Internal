#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTSHIFTINGREWARDALLNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F55F20)
#define CRAFTSHIFTINGREWARDALLNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F55F30)
#define CRAFTSHIFTINGREWARDALLNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F55F40)
#define CRAFTSHIFTINGREWARDALLNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F55FD0)
#define CRAFTSHIFTINGREWARDALLNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F56060)

	inline static constexpr unsigned int CraftShiftingRewardAllNetworkTask_TypeDefinitionIndex = 2326;

	class CraftShiftingRewardAllNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDALLNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDALLNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDALLNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDALLNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDALLNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

