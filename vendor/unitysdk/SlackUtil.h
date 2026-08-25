#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace UnityEngine { class LogType; }

#define SLACKUTIL_SENDQAERRORLOGSLACK_OFFSET UNITYSDK_OFFSET(0x211E570)
#define SLACKUTIL_SENDFULLLOGFILESLACK_OFFSET UNITYSDK_OFFSET(0x211E6D0)
#define SLACKUTIL_SENDONELOGSLACK_OFFSET UNITYSDK_OFFSET(0x211E830)
#define SLACKUTIL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x211E990)
#define SLACKUTIL_CANSENDTOSLACK_OFFSET UNITYSDK_OFFSET(0x211E9A0)

	inline static constexpr unsigned int SlackUtil_TypeDefinitionIndex = 3887;

	class SlackUtil : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* SendQAErrorLogSlack(::System::String* str, ::System::String* str2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SLACKUTIL_SENDQAERRORLOGSLACK_OFFSET))(str, str2, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* SendFullLogFileSlack(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SLACKUTIL_SENDFULLLOGFILESLACK_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* SendOneLogSlack(::UnityEngine::LogType* arg, ::System::String* str, ::System::String* str2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::LogType*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SLACKUTIL_SENDONELOGSLACK_OFFSET))(arg, str, str2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLACKUTIL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean CanSendToSlack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SLACKUTIL_CANSENDTOSLACK_OFFSET))(nullptr);
		}

	};

