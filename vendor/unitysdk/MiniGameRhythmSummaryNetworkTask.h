#pragma once
#include "unitysdk.h"

class MinigameRhythmSummary;
namespace MX::NetworkProtocol { class Protocol; }

#define MINIGAMERHYTHMSUMMARYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F83C40)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_SET_RHYTHMSUMMARY_OFFSET UNITYSDK_OFFSET(0x1F83D40)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_GET_RHYTHMSUMMARY_OFFSET UNITYSDK_OFFSET(0x1F83D50)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F83D60)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F83D70)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F83D80)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F83D90)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F83DA0)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F83DB0)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F83DC0)
#define MINIGAMERHYTHMSUMMARYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F83E50)

	inline static constexpr unsigned int MiniGameRhythmSummaryNetworkTask_TypeDefinitionIndex = 2630;

	class MiniGameRhythmSummaryNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		MinigameRhythmSummary* _rhythmSummary_k__BackingField; // 0x48
		::System::Int64 _UniqueId_k__BackingField; // 0x50

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_rhythmSummary(MinigameRhythmSummary* arg)
		{
			((::System::Void(*)(MinigameRhythmSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_SET_RHYTHMSUMMARY_OFFSET))(arg, nullptr);
		}

		MinigameRhythmSummary* get_rhythmSummary()
		{
			return ((MinigameRhythmSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_GET_RHYTHMSUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

