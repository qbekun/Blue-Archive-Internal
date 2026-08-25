#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MISSIONLISTNETWORKTASK_GET_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1F84AD0)
#define MISSIONLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F84AE0)
#define MISSIONLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F84AF0)
#define MISSIONLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F84B00)
#define MISSIONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F84B90)
#define MISSIONLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F84E30)
#define MISSIONLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F84E40)
#define MISSIONLISTNETWORKTASK_SET_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1F84E50)
#define MISSIONLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F84E60)

	inline static constexpr unsigned int MissionListNetworkTask_TypeDefinitionIndex = 2638;

	class MissionListNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _EventContentId_k__BackingField; // 0x40
		::System::Boolean _ShowToast_k__BackingField; // 0x50

		::System::Boolean get_ShowToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK_GET_SHOWTOAST_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_ShowToast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK_SET_SHOWTOAST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EventContentId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};

