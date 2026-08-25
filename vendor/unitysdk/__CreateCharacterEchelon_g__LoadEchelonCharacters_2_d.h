#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class <>c__DisplayClass93_0;

#define <<CREATECHARACTERECHELON>G__LOADECHELONCHARACTERS|2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24F6DD0)
#define <<CREATECHARACTERECHELON>G__LOADECHELONCHARACTERS|2>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x24F7490)

	inline static constexpr unsigned int <<CreateCharacterEchelon>g__LoadEchelonCharacters|2>d_TypeDefinitionIndex = 6036;

	class <<CreateCharacterEchelon>g__LoadEchelonCharacters|2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::String* key; // 0x28
		<>c__DisplayClass93_0* __4__this; // 0x30
		::System::Int32 styleIndex; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATECHARACTERECHELON>G__LOADECHELONCHARACTERS|2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<CREATECHARACTERECHELON>G__LOADECHELONCHARACTERS|2>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

