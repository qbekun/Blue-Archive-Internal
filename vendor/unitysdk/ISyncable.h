#pragma once
#include "unitysdk.h"

class BuffIconsBase;

#define ISYNCABLE_ADDSYNCUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISYNCABLE_REMOVESYNCUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISYNCABLE_REFRESHSYNCUI_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ISyncable_TypeDefinitionIndex = 6360;

	class ISyncable : public Il2CppObject
	{
	public:
		::System::Void AddSyncUI(BuffIconsBase* arg)
		{
			((::System::Void(*)(BuffIconsBase*, ::PVOID))((::PBYTE)hIl2Cpp + ISYNCABLE_ADDSYNCUI_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSyncUI(BuffIconsBase* arg)
		{
			((::System::Void(*)(BuffIconsBase*, ::PVOID))((::PBYTE)hIl2Cpp + ISYNCABLE_REMOVESYNCUI_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSyncUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ISYNCABLE_REFRESHSYNCUI_OFFSET))(nullptr);
		}

	};

