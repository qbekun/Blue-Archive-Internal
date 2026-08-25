#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class InstantiationParameters; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }

#define <>C__DISPLAYCLASS122_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E07360)
#define <>C__DISPLAYCLASS122_0__INSTANTIATEWITHCHAIN_B__0_OFFSET UNITYSDK_OFFSET(0x9E0A510)

	inline static constexpr unsigned int <>c__DisplayClass122_0_TypeDefinitionIndex = 36183;

	class <>c__DisplayClass122_0 : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::AddressablesImpl* __4__this; // 0x10
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location; // 0x18
		::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* instantiateParameters; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS122_0_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _InstantiateWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS122_0__INSTANTIATEWITHCHAIN_B__0_OFFSET))(arg, nullptr);
		}

	};

