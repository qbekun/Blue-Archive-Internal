#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIPopup_SNS;
class FeedItemData;
class <>c__DisplayClass28_0;
namespace MX::Data::Excel { class FieldSNSPostExcel; }
class UISNS_Post;
class Awaiter;

#define <PLAYPOSTDIRECTING>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAE3320)
#define <PLAYPOSTDIRECTING>D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xAE48B0)

	inline static constexpr unsigned int <PlayPostDirecting>d__28_TypeDefinitionIndex = 8081;

	class <PlayPostDirecting>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIPopup_SNS* __4__this; // 0x28
		FeedItemData* feedItem; // 0x30
		<>c__DisplayClass28_0* __8__1; // 0x38
		::System::Boolean isFirst; // 0x40
		::MX::Data::Excel::FieldSNSPostExcel* _fieldPostExcel_5__2; // 0x48
		UISNS_Post* _view_5__3; // 0x58
		Awaiter* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPOSTDIRECTING>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYPOSTDIRECTING>D__28_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

