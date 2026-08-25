#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }
namespace MX::NetworkProtocol { class Protocol; }

#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F82B70)
#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F82C00)
#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F82C10)
#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_SET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0x1F82C20)
#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F82C30)
#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F82C40)
#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_GET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0x1F82C50)
#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F82C60)
#define MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F82C70)

	inline static constexpr unsigned int MiniGameMissionMultipleRewardNetworkTask_TypeDefinitionIndex = 2624;

	class MiniGameMissionMultipleRewardNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::MissionCategory* _MissionCategory_k__BackingField; // 0x40
		::System::Int64 _EventContentId_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_MissionCategory(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_SET_MISSIONCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_MissionCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_GET_MISSIONCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

