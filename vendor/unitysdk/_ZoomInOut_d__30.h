#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class CCGHandManager;
class Awaiter;

#define <ZOOMINOUT>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26F1A40)
#define <ZOOMINOUT>D__30_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26F1F20)

	inline static constexpr unsigned int <ZoomInOut>d__30_TypeDefinitionIndex = 419;

	class <ZoomInOut>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::Boolean isZoomIn; // 0x28
		CCGHandManager* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ZOOMINOUT>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ZOOMINOUT>D__30_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

