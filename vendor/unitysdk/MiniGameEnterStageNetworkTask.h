#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MINIGAMEENTERSTAGENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F82150)
#define MINIGAMEENTERSTAGENETWORKTASK_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F82160)
#define MINIGAMEENTERSTAGENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F82170)
#define MINIGAMEENTERSTAGENETWORKTASK_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F82180)
#define MINIGAMEENTERSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F82190)
#define MINIGAMEENTERSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F82310)
#define MINIGAMEENTERSTAGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F82320)
#define MINIGAMEENTERSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F82330)
#define MINIGAMEENTERSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F823C0)

	inline static constexpr unsigned int MiniGameEnterStageNetworkTask_TypeDefinitionIndex = 2618;

	class MiniGameEnterStageNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _UniqueId_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEENTERSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

