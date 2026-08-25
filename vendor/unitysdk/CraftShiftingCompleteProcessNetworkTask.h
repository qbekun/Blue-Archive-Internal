#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F558A0)
#define CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F55930)
#define CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F55B80)
#define CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_SET_CRAFTSHIFTINGSLOTID_OFFSET UNITYSDK_OFFSET(0x1F55B90)
#define CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F55BA0)
#define CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_GET_CRAFTSHIFTINGSLOTID_OFFSET UNITYSDK_OFFSET(0x1F55C30)
#define CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F55C40)

	inline static constexpr unsigned int CraftShiftingCompleteProcessNetworkTask_TypeDefinitionIndex = 2323;

	class CraftShiftingCompleteProcessNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CraftShiftingSlotId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CraftShiftingSlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_SET_CRAFTSHIFTINGSLOTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftShiftingSlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK_GET_CRAFTSHIFTINGSLOTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

