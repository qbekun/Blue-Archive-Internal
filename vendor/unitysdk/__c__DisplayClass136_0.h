#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }

#define <>C__DISPLAYCLASS136_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E080C0)
#define <>C__DISPLAYCLASS136_0__CHECKFORCATALOGUPDATESWITHCHAIN_B__0_OFFSET UNITYSDK_OFFSET(0x9E0A800)

	inline static constexpr unsigned int <>c__DisplayClass136_0_TypeDefinitionIndex = 36187;

	class <>c__DisplayClass136_0 : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::AddressablesImpl* __4__this; // 0x10
		::System::Boolean autoReleaseHandle; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS136_0_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _CheckForCatalogUpdatesWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS136_0__CHECKFORCATALOGUPDATESWITHCHAIN_B__0_OFFSET))(arg, nullptr);
		}

	};

