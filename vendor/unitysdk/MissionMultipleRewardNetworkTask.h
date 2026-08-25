#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }
namespace MX::NetworkProtocol { class Protocol; }

#define MISSIONMULTIPLEREWARDNETWORKTASK_SET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0x1F850E0)
#define MISSIONMULTIPLEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F850F0)
#define MISSIONMULTIPLEREWARDNETWORKTASK_GET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0x1F85750)
#define MISSIONMULTIPLEREWARDNETWORKTASK_SET_GUIDEMISSIONSEASONID_OFFSET UNITYSDK_OFFSET(0x1F85760)
#define MISSIONMULTIPLEREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F85770)
#define MISSIONMULTIPLEREWARDNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F85780)
#define MISSIONMULTIPLEREWARDNETWORKTASK_GET_GUIDEMISSIONSEASONID_OFFSET UNITYSDK_OFFSET(0x1F85790)
#define MISSIONMULTIPLEREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F857A0)
#define MISSIONMULTIPLEREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F85830)
#define MISSIONMULTIPLEREWARDNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F85840)
#define MISSIONMULTIPLEREWARDNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F85850)

	inline static constexpr unsigned int MissionMultipleRewardNetworkTask_TypeDefinitionIndex = 2641;

	class MissionMultipleRewardNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::MissionCategory* _MissionCategory_k__BackingField; // 0x40
		Il2CppObject* _GuideMissionSeasonId_k__BackingField; // 0x48
		Il2CppObject* _EventContentId_k__BackingField; // 0x58

		::System::Void set_MissionCategory(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_SET_MISSIONCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::FlatData::MissionCategory* get_MissionCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_GET_MISSIONCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_GuideMissionSeasonId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_SET_GUIDEMISSIONSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GuideMissionSeasonId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_GET_GUIDEMISSIONSEASONID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventContentId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONMULTIPLEREWARDNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

	};

