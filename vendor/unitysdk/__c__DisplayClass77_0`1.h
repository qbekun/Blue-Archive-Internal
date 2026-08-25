#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }

#define <>C__DISPLAYCLASS77_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS77_0`1__LOADASSETWITHCHAIN_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass77_0`1_TypeDefinitionIndex = 36168;

	class <>c__DisplayClass77_0`1 : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::AddressablesImpl* __4__this; // 0x0
		::System::Object* key; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_0`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _LoadAssetWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_0`1__LOADASSETWITHCHAIN_B__0_OFFSET))(arg, nullptr);
		}

	};

