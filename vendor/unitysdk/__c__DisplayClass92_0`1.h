#pragma once
#include "unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }

#define <>C__DISPLAYCLASS92_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS92_0`1__PROVIDERESOURCES_B__0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS92_0`1__PROVIDERESOURCES_B__1_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass92_0`1_TypeDefinitionIndex = 36354;

	class <>c__DisplayClass92_0`1 : public Il2CppObject
	{
	public:
		Il2CppObject* callback; // 0x0
		::System::Boolean releaseDependenciesOnFailure; // 0x0
		::UnityEngine::ResourceManagement::ResourceManager* __4__this; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS92_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ProvideResources_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS92_0`1__PROVIDERESOURCES_B__0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _ProvideResources_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS92_0`1__PROVIDERESOURCES_B__1_OFFSET))(arg, nullptr);
		}

	};

