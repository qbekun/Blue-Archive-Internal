#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F15B00)
#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F15B90)
#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_SET_CHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F15BA0)
#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F15BB0)
#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F15E90)
#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F15EA0)
#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F15EB0)
#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_GET_CHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F15EC0)
#define CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F15ED0)

	inline static constexpr unsigned int CampaignChapterClearRewardNetworkTask_TypeDefinitionIndex = 2060;

	class CampaignChapterClearRewardNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ChapterUniqueId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_ChapterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_SET_CHAPTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK_GET_CHAPTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

