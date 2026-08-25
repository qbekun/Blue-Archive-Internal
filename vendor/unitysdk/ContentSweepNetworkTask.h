#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONTENTSWEEPNETWORKTASK_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F38050)
#define CONTENTSWEEPNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F38060)
#define CONTENTSWEEPNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F38070)
#define CONTENTSWEEPNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F38080)
#define CONTENTSWEEPNETWORKTASK_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1F38090)
#define CONTENTSWEEPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F380A0)
#define CONTENTSWEEPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F38130)
#define CONTENTSWEEPNETWORKTASK_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1F38140)
#define CONTENTSWEEPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F38150)
#define CONTENTSWEEPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F38160)
#define CONTENTSWEEPNETWORKTASK_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1F38690)
#define CONTENTSWEEPNETWORKTASK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F386A0)
#define CONTENTSWEEPNETWORKTASK_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1F386B0)

	inline static constexpr unsigned int ContentSweepNetworkTask_TypeDefinitionIndex = 2282;

	class ContentSweepNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _Content_k__BackingField; // 0x40
		::System::Int64 _StageId_k__BackingField; // 0x48
		::System::Int64 _EventContentId_k__BackingField; // 0x50
		::System::Int64 _Count_k__BackingField; // 0x58

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Content(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_GET_COUNT_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_Content()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPNETWORKTASK_GET_CONTENT_OFFSET))(nullptr);
		}

	};

