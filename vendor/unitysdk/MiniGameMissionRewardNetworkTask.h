#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MINIGAMEMISSIONREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F83480)
#define MINIGAMEMISSIONREWARDNETWORKTASK_GET_MISSIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F83510)
#define MINIGAMEMISSIONREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F83520)
#define MINIGAMEMISSIONREWARDNETWORKTASK_GET_PROGRESSSERVERID_OFFSET UNITYSDK_OFFSET(0x1F83900)
#define MINIGAMEMISSIONREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F83910)
#define MINIGAMEMISSIONREWARDNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F83920)
#define MINIGAMEMISSIONREWARDNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F83930)
#define MINIGAMEMISSIONREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F83940)
#define MINIGAMEMISSIONREWARDNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F83950)
#define MINIGAMEMISSIONREWARDNETWORKTASK_SET_PROGRESSSERVERID_OFFSET UNITYSDK_OFFSET(0x1F83960)
#define MINIGAMEMISSIONREWARDNETWORKTASK_SET_MISSIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F83970)

	inline static constexpr unsigned int MiniGameMissionRewardNetworkTask_TypeDefinitionIndex = 2627;

	class MiniGameMissionRewardNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _MissionUniqueId_k__BackingField; // 0x40
		::System::Int64 _ProgressServerId_k__BackingField; // 0x48
		::System::Int64 _EventContentId_k__BackingField; // 0x50

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_MissionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_GET_MISSIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_ProgressServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_GET_PROGRESSSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProgressServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_SET_PROGRESSSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MissionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDNETWORKTASK_SET_MISSIONUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

