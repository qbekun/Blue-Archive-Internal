#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class <>c__DisplayClass28_0;
class FeedItemData;
namespace UnityEngine { class Animation; }
class Awaiter;

#define <<PLAYPOSTDIRECTING>G__PLAYREPLYPOSTANI|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAE2840)
#define <<PLAYPOSTDIRECTING>G__PLAYREPLYPOSTANI|1>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xAE3310)

	inline static constexpr unsigned int <<PlayPostDirecting>g__PlayReplyPostAni|1>d_TypeDefinitionIndex = 8079;

	class <<PlayPostDirecting>g__PlayReplyPostAni|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		<>c__DisplayClass28_0* __4__this; // 0x28
		::System::Int64 postId; // 0x30
		Il2CppObject* __7__wrap1; // 0x38
		FeedItemData* _replyFeedItem_5__3; // 0x50
		::UnityEngine::Animation* _replyAni_5__4; // 0x58
		::System::String* _replyAniName_5__5; // 0x60
		Awaiter* __u__1; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYPOSTDIRECTING>G__PLAYREPLYPOSTANI|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<PLAYPOSTDIRECTING>G__PLAYREPLYPOSTANI|1>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

