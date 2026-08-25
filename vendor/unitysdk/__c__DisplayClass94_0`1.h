#pragma once
#include "unitysdk.h"

namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::SignalRCore::Messages { class Message; }

#define <>C__DISPLAYCLASS94_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS94_0`1__INVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass94_0`1_TypeDefinitionIndex = 21434;

	class <>c__DisplayClass94_0`1 : public Il2CppObject
	{
	public:
		Il2CppObject* future; // 0x0
		::BestHTTP::SignalRCore::HubConnection* __4__this; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Invoke_b__0(::BestHTTP::SignalRCore::Messages::Message* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::Messages::Message*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_0`1__INVOKE_B__0_OFFSET))(arg, nullptr);
		}

	};

