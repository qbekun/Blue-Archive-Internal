#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }

#define <>C__DISPLAYCLASS140_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E08500)
#define <>C__DISPLAYCLASS140_0__UPDATECATALOGS_B__0_OFFSET UNITYSDK_OFFSET(0x9E0A830)

	inline static constexpr unsigned int <>c__DisplayClass140_0_TypeDefinitionIndex = 36188;

	class <>c__DisplayClass140_0 : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::AddressablesImpl* __4__this; // 0x10
		::System::Boolean autoReleaseHandle; // 0x18
		::System::Boolean autoCleanBundleCache; // 0x19

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS140_0_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _UpdateCatalogs_b__0(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS140_0__UPDATECATALOGS_B__0_OFFSET))(arg, nullptr);
		}

	};

