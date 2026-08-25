#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AssetReference; }

#define <>C__DISPLAYCLASS46_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS46_0`1__LOADASSETASYNCMX_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass46_0`1_TypeDefinitionIndex = 14960;

	class <>c__DisplayClass46_0`1 : public Il2CppObject
	{
	public:
		::System::Boolean addHandleTable; // 0x0
		::UnityEngine::AddressableAssets::AssetReference* assetReference; // 0x0
		Il2CppObject* callback; // 0x0
		Il2CppObject* handle; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS46_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadAssetAsyncMX_b__0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS46_0`1__LOADASSETASYNCMX_B__0_OFFSET))(arg, nullptr);
		}

	};

