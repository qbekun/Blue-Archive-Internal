#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::Data::UIEmblem { class UIEmblemParcelFXHandler; }
namespace MX::Data { class EmblemInfo; }

#define <LOADFXASYNC>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1983470)
#define <LOADFXASYNC>D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1983B10)

	inline static constexpr unsigned int <LoadFXAsync>d__19_TypeDefinitionIndex = 16527;

	class <LoadFXAsync>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::Data::UIEmblem::UIEmblemParcelFXHandler* __4__this; // 0x28
		::MX::Data::EmblemInfo* info; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADFXASYNC>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADFXASYNC>D__19_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

