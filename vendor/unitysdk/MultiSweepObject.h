#pragma once
#include "unitysdk.h"

#define MULTISWEEPOBJECT_SYNCMULTISWEEPPRESET_OFFSET UNITYSDK_OFFSET(0x2709060)
#define MULTISWEEPOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2709240)
#define MULTISWEEPOBJECT_GET_MULTISWEEPPRESETLIST_OFFSET UNITYSDK_OFFSET(0x27092C0)
#define MULTISWEEPOBJECT_SET_MULTISWEEPPRESETLIST_OFFSET UNITYSDK_OFFSET(0x27092D0)
#define MULTISWEEPOBJECT_CO_REQUESTMULTISWEEPPRESETLIST_OFFSET UNITYSDK_OFFSET(0x27092E0)

	inline static constexpr unsigned int MultiSweepObject_TypeDefinitionIndex = 7110;

	class MultiSweepObject : public Il2CppObject
	{
	public:
		Il2CppObject* _MultiSweepPresetList_k__BackingField; // 0x10

		::System::Void SyncMultiSweepPreset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPOBJECT_SYNCMULTISWEEPPRESET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPOBJECT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_MultiSweepPresetList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPOBJECT_GET_MULTISWEEPPRESETLIST_OFFSET))(nullptr);
		}

		::System::Void set_MultiSweepPresetList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPOBJECT_SET_MULTISWEEPPRESETLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestMultiSweepPresetList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPOBJECT_CO_REQUESTMULTISWEEPPRESETLIST_OFFSET))(nullptr);
		}

	};

