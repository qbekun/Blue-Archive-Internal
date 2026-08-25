#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F67500)
#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F67510)
#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1F67730)
#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F67740)
#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F677D0)
#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F677E0)
#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F677F0)
#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1F67800)
#define EVENTCONTENTCOLLECTIONLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F67810)

	inline static constexpr unsigned int EventContentCollectionListNetworkTask_TypeDefinitionIndex = 2449;

	class EventContentCollectionListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		Il2CppObject* _GroupId_k__BackingField; // 0x48

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_GroupId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GroupId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};

