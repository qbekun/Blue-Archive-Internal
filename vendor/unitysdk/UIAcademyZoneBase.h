#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UITweener;
namespace UnityEngine { class Animation; }

#define UIACADEMYZONEBASE_GET_ADDITIONALLOCKOBJECT_OFFSET UNITYSDK_OFFSET(0x21E65A0)
#define UIACADEMYZONEBASE_GET_LOCATIONRANKFORUNLOCK_OFFSET UNITYSDK_OFFSET(0x21E65B0)
#define UIACADEMYZONEBASE_REFRESH_OFFSET UNITYSDK_OFFSET(0x21E65C0)
#define UIACADEMYZONEBASE_SET_LOCATIONRANKFORUNLOCK_OFFSET UNITYSDK_OFFSET(0x21E65D0)
#define UIACADEMYZONEBASE_GET_UNLOCKANI_OFFSET UNITYSDK_OFFSET(0x21E3DF0)
#define UIACADEMYZONEBASE_GET_LOCKOBJECT_OFFSET UNITYSDK_OFFSET(0x21E65E0)
#define UIACADEMYZONEBASE_SETUI_OFFSET UNITYSDK_OFFSET(0x21E65F0)
#define UIACADEMYZONEBASE_GET_ADDITIONALTWEENER_OFFSET UNITYSDK_OFFSET(0x21E6600)
#define UIACADEMYZONEBASE_YIELDSETUI_OFFSET UNITYSDK_OFFSET(0x21E4940)
#define UIACADEMYZONEBASE_GET_LOCKLABEL_OFFSET UNITYSDK_OFFSET(0x21E6700)
#define UIACADEMYZONEBASE_GET_BALLOONS_OFFSET UNITYSDK_OFFSET(0x21E67E0)
#define UIACADEMYZONEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E3CC0)
#define UIACADEMYZONEBASE_SETBALLOONS_OFFSET UNITYSDK_OFFSET(0x21E42E0)
#define UIACADEMYZONEBASE_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21E6890)
#define UIACADEMYZONEBASE_SETLOCK_OFFSET UNITYSDK_OFFSET(0x21E40F0)
#define UIACADEMYZONEBASE_SHOWUNLOCK_OFFSET UNITYSDK_OFFSET(0x21E68A0)

	inline static constexpr unsigned int UIAcademyZoneBase_TypeDefinitionIndex = 4237;

	class UIAcademyZoneBase : public Il2CppObject
	{
	public:
		::System::Int64 _ZoneId_k__BackingField; // 0x18
		::System::Int64 _LocationRankForUnlock_k__BackingField; // 0x20
		::UnityEngine::GameObject* _LockObject_k__BackingField; // 0x28
		::UnityEngine::GameObject* _AdditionalLockObject_k__BackingField; // 0x30
		UILabel* _lockLabel; // 0x38
		UITweener* _additionalTweener; // 0x40
		::UnityEngine::Animation* _unlockAni; // 0x48
		Il2CppObject* _balloons; // 0x50

		::UnityEngine::GameObject* get_AdditionalLockObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_GET_ADDITIONALLOCKOBJECT_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationRankForUnlock()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_GET_LOCATIONRANKFORUNLOCK_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_LocationRankForUnlock(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_SET_LOCATIONRANKFORUNLOCK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animation* get_UnlockAni()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_GET_UNLOCKANI_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_LockObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_GET_LOCKOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_SETUI_OFFSET))(nullptr);
		}

		UITweener* get_AdditionalTweener()
		{
			return ((UITweener*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_GET_ADDITIONALTWEENER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldSetUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_YIELDSETUI_OFFSET))(nullptr);
		}

		UILabel* get_LockLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_GET_LOCKLABEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Balloons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_GET_BALLOONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBalloons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_SETBALLOONS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_GET_ZONEID_OFFSET))(nullptr);
		}

		::System::Void SetLock(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_SETLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void ShowUnlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBASE_SHOWUNLOCK_OFFSET))(nullptr);
		}

	};

