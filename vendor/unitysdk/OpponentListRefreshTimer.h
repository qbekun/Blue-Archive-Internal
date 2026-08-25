#pragma once
#include "unitysdk.h"

class UILabel;
class TimerType;
namespace UnityEngine { class Coroutine; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define OPPONENTLISTREFRESHTIMER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21ECE20)
#define OPPONENTLISTREFRESHTIMER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0x21ECF30)
#define OPPONENTLISTREFRESHTIMER_COUPDATE_OFFSET UNITYSDK_OFFSET(0x21ECFC0)
#define OPPONENTLISTREFRESHTIMER_HANDLEARENAOPPONENTLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21ED050)
#define OPPONENTLISTREFRESHTIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21ED060)
#define OPPONENTLISTREFRESHTIMER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21ED070)
#define OPPONENTLISTREFRESHTIMER_GET_LIMITTIME_OFFSET UNITYSDK_OFFSET(0x21ED220)

	inline static constexpr unsigned int OpponentListRefreshTimer_TypeDefinitionIndex = 4248;

	class OpponentListRefreshTimer : public Il2CppObject
	{
	public:
		UILabel* timerLabel; // 0x18
		TimerType* timerType; // 0x20
		::UnityEngine::Coroutine* updateCoroutine; // 0x28

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPONENTLISTREFRESHTIMER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ResetTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPONENTLISTREFRESHTIMER_RESETTIMER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPONENTLISTREFRESHTIMER_COUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean HandleArenaOpponentListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + OPPONENTLISTREFRESHTIMER_HANDLEARENAOPPONENTLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPONENTLISTREFRESHTIMER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPONENTLISTREFRESHTIMER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_limitTime()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPONENTLISTREFRESHTIMER_GET_LIMITTIME_OFFSET))(nullptr);
		}

	};

