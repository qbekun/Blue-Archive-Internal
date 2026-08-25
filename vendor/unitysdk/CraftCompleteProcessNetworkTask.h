#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTCOMPLETEPROCESSNETWORKTASK_GET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F51020)
#define CRAFTCOMPLETEPROCESSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F51030)
#define CRAFTCOMPLETEPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F510C0)
#define CRAFTCOMPLETEPROCESSNETWORKTASK_SET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F51570)
#define CRAFTCOMPLETEPROCESSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F51580)
#define CRAFTCOMPLETEPROCESSNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F51590)
#define CRAFTCOMPLETEPROCESSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F515A0)

	inline static constexpr unsigned int CraftCompleteProcessNetworkTask_TypeDefinitionIndex = 2295;

	class CraftCompleteProcessNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CraftSlotId_k__BackingField; // 0x40

		::System::Int64 get_CraftSlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSNETWORKTASK_GET_CRAFTSLOTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_CraftSlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSNETWORKTASK_SET_CRAFTSLOTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

