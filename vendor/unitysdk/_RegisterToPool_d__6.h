#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGObjectPool; }
namespace UnityEngine::AddressableAssets { class AssetReference; }

#define <REGISTERTOPOOL>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E9CD60)
#define <REGISTERTOPOOL>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E9D2F0)

	inline static constexpr unsigned int <RegisterToPool>d__6_TypeDefinitionIndex = 21220;

	class <RegisterToPool>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGObjectPool* __4__this; // 0x28
		::UnityEngine::AddressableAssets::AssetReference* assetReference; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERTOPOOL>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REGISTERTOPOOL>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

