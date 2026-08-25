#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace UnityEngine::AddressableAssets { class AssetReference; }
namespace MX::MinigameCCG::Visual { class CCGObjectPoolManager; }

#define <REGISTERTOPOOL>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E999B0)
#define <REGISTERTOPOOL>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E9A140)

	inline static constexpr unsigned int <RegisterToPool>d__4_TypeDefinitionIndex = 21211;

	class <RegisterToPool>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::UnityEngine::AddressableAssets::AssetReference* assetReference; // 0x28
		::MX::MinigameCCG::Visual::CCGObjectPoolManager* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERTOPOOL>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REGISTERTOPOOL>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

