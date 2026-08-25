#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class VisualActionSelectEntities;
namespace FlatData { class CCGEntityType; }
namespace MX::MinigameCCG { class CCGPlayer; }
class Awaiter;

#define <SELECTTARGETS>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26E4090)
#define <SELECTTARGETS>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26E4770)

	inline static constexpr unsigned int <SelectTargets>d__6_TypeDefinitionIndex = 390;

	class <SelectTargets>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		VisualActionSelectEntities* __4__this; // 0x28
		::FlatData::CCGEntityType* sourceType; // 0x30
		::MX::MinigameCCG::CCGPlayer* player; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SELECTTARGETS>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SELECTTARGETS>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

