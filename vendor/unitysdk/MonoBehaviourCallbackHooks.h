#pragma once
#include "unitysdk.h"

#define MONOBEHAVIOURCALLBACKHOOKS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DBC70)
#define MONOBEHAVIOURCALLBACKHOOKS_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0DBCB0)
#define MONOBEHAVIOURCALLBACKHOOKS_GETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0xA0DBCF0)
#define MONOBEHAVIOURCALLBACKHOOKS_REMOVE_ONUPDATEDELEGATE_OFFSET UNITYSDK_OFFSET(0xA0DBD20)
#define MONOBEHAVIOURCALLBACKHOOKS_ADD_ONUPDATEDELEGATE_OFFSET UNITYSDK_OFFSET(0xA0DBDC0)

	inline static constexpr unsigned int MonoBehaviourCallbackHooks_TypeDefinitionIndex = 36346;

	class MonoBehaviourCallbackHooks : public <>c__DisplayClass16_0
	{
	public:
		Il2CppObject* m_OnUpdateDelegate; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBEHAVIOURCALLBACKHOOKS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBEHAVIOURCALLBACKHOOKS_UPDATE_OFFSET))(nullptr);
		}

		::System::String* GetGameObjectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBEHAVIOURCALLBACKHOOKS_GETGAMEOBJECTNAME_OFFSET))(nullptr);
		}

		::System::Void remove_OnUpdateDelegate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MONOBEHAVIOURCALLBACKHOOKS_REMOVE_ONUPDATEDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnUpdateDelegate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MONOBEHAVIOURCALLBACKHOOKS_ADD_ONUPDATEDELEGATE_OFFSET))(arg, nullptr);
		}

	};

