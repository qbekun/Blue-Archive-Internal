#pragma once
#include "unitysdk.h"

namespace UnityEngine::Animations::Rigging { class Rig; }

#define UCRIGGINGCONTROLLER_SET_KEEP_OFFSET UNITYSDK_OFFSET(0xCDC000)
#define UCRIGGINGCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCDC010)
#define UCRIGGINGCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCDC2F0)
#define UCRIGGINGCONTROLLER_GET_KEEP_OFFSET UNITYSDK_OFFSET(0xCDC370)
#define UCRIGGINGCONTROLLER_SET_SNAPSHOTS_OFFSET UNITYSDK_OFFSET(0xCDC380)
#define UCRIGGINGCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDC390)
#define UCRIGGINGCONTROLLER_SNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCDC190)
#define UCRIGGINGCONTROLLER_KEEPTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCDC460)
#define UCRIGGINGCONTROLLER_STOPRIGGING_OFFSET UNITYSDK_OFFSET(0xCDC470)
#define UCRIGGINGCONTROLLER_CO_CHANGERIGGING_OFFSET UNITYSDK_OFFSET(0xCDC820)
#define UCRIGGINGCONTROLLER_CHANGEWEIGHT_OFFSET UNITYSDK_OFFSET(0xCDC480)
#define UCRIGGINGCONTROLLER_STARTRIGGING_OFFSET UNITYSDK_OFFSET(0xCDC8E0)
#define UCRIGGINGCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xCDC030)
#define UCRIGGINGCONTROLLER_GET_SNAPSHOTS_OFFSET UNITYSDK_OFFSET(0xCDC8F0)

	inline static constexpr unsigned int UCRiggingController_TypeDefinitionIndex = 9181;

	class UCRiggingController : public Il2CppObject
	{
	public:
		Il2CppObject* _Snapshots_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* rigs; // 0x20
		::Il2CppArray<::System::Object*>* constraints; // 0x28
		Il2CppObject* riggingCoroutines; // 0x30
		::System::Boolean _Keep_k__BackingField; // 0x38

		::System::Void set_Keep(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_SET_KEEP_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_Keep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_GET_KEEP_OFFSET))(nullptr);
		}

		::System::Void set_Snapshots(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_SET_SNAPSHOTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SnapShot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_SNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void KeepTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_KEEPTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void StopRigging(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_STOPRIGGING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_ChangeRigging(::System::Single arg, ::System::Single arg2, ::UnityEngine::Animations::Rigging::Rig* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Single, ::UnityEngine::Animations::Rigging::Rig*, ::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_CO_CHANGERIGGING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ChangeWeight(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_CHANGEWEIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRigging(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_STARTRIGGING_OFFSET))(arg, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		Il2CppObject* get_Snapshots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRIGGINGCONTROLLER_GET_SNAPSHOTS_OFFSET))(nullptr);
		}

	};

