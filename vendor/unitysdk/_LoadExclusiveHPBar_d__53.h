#pragma once
#include "unitysdk.h"

class UIHPBar;
namespace MX::Core::Services { class Hash64; }

#define <LOADEXCLUSIVEHPBAR>D__53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2600590)
#define <LOADEXCLUSIVEHPBAR>D__53_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2600C10)

	inline static constexpr unsigned int <LoadExclusiveHPBar>d__53_TypeDefinitionIndex = 6461;

	class <LoadExclusiveHPBar>d__53 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::String* uiPath; // 0x30
		::System::Threading::CancellationToken* cancelToken; // 0x38
		UIHPBar* __4__this; // 0x40
		::MX::Core::Services::Hash64* _uiPathHash_5__2; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADEXCLUSIVEHPBAR>D__53_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADEXCLUSIVEHPBAR>D__53_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

