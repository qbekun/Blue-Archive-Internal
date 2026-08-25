#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CAFERECEIVECURRENCYNETWORKTASK_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F12390)
#define CAFERECEIVECURRENCYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F123A0)
#define CAFERECEIVECURRENCYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F12430)
#define CAFERECEIVECURRENCYNETWORKTASK_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F126F0)
#define CAFERECEIVECURRENCYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F12700)
#define CAFERECEIVECURRENCYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F12710)
#define CAFERECEIVECURRENCYNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F127A0)

	inline static constexpr unsigned int CafeReceiveCurrencyNetworkTask_TypeDefinitionIndex = 2038;

	class CafeReceiveCurrencyNetworkTask : public Il2CppObject
	{
	public:
		::System::Int32 _SlotId_k__BackingField; // 0x40

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERECEIVECURRENCYNETWORKTASK_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERECEIVECURRENCYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERECEIVECURRENCYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFERECEIVECURRENCYNETWORKTASK_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERECEIVECURRENCYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERECEIVECURRENCYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERECEIVECURRENCYNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

