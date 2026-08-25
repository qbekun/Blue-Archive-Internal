#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Web { class NXPSharedMemoryClient; }

#define <CONNECTASYNC>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DB3940)
#define <CONNECTASYNC>D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9DB3D70)

	inline static constexpr unsigned int <ConnectAsync>d__20_TypeDefinitionIndex = 26401;

	class <ConnectAsync>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::NPA::Editor::Web::NXPSharedMemoryClient* __4__this; // 0x30
		::System::Int32 retryIntervalInMilliseconds; // 0x38
		::System::Int32 maxRetryCount; // 0x3C
		::System::Boolean _isWrite_5__2; // 0x40
		::System::Boolean _isRead_5__3; // 0x41
		::System::Int32 _i_5__4; // 0x44
		::System::Runtime::CompilerServices::TaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONNECTASYNC>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CONNECTASYNC>D__20_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

