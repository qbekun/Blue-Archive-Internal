#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTBEGINPROCESSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F39250)
#define CRAFTBEGINPROCESSNETWORKTASK_GET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F39260)
#define CRAFTBEGINPROCESSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F39270)
#define CRAFTBEGINPROCESSNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F39300)
#define CRAFTBEGINPROCESSNETWORKTASK_SET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F39310)
#define CRAFTBEGINPROCESSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F39320)
#define CRAFTBEGINPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F393B0)

	inline static constexpr unsigned int CraftBeginProcessNetworkTask_TypeDefinitionIndex = 2289;

	class CraftBeginProcessNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CraftSlotId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftSlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSNETWORKTASK_GET_CRAFTSLOTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void set_CraftSlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSNETWORKTASK_SET_CRAFTSLOTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

