#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTSELECTBUFFNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F70F30)
#define EVENTCONTENTSELECTBUFFNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F70FC0)
#define EVENTCONTENTSELECTBUFFNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F70FD0)
#define EVENTCONTENTSELECTBUFFNETWORKTASK_SET_SELECTEDBUFFID_OFFSET UNITYSDK_OFFSET(0x1F70FE0)
#define EVENTCONTENTSELECTBUFFNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F70FF0)
#define EVENTCONTENTSELECTBUFFNETWORKTASK_GET_SELECTEDBUFFID_OFFSET UNITYSDK_OFFSET(0x1F71000)
#define EVENTCONTENTSELECTBUFFNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F71010)

	inline static constexpr unsigned int EventContentSelectBuffNetworkTask_TypeDefinitionIndex = 2512;

	class EventContentSelectBuffNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SelectedBuffId_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_SelectedBuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFNETWORKTASK_SET_SELECTEDBUFFID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedBuffId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFNETWORKTASK_GET_SELECTEDBUFFID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

