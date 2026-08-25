#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class Vector3; }
class UIConquest;

#define UICONQUESTCENTERLOCK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2353010)
#define UICONQUESTCENTERLOCK_PLAYOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x235E5D0)
#define UICONQUESTCENTERLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2363D70)
#define UICONQUESTCENTERLOCK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2363D80)

	inline static constexpr unsigned int UIConquestCenterLock_TypeDefinitionIndex = 5050;

	class UIConquestCenterLock : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* lockDisplayList; // 0x18
		::UnityEngine::Animation* openAni; // 0x20
		::UnityEngine::Vector3* mapPosition; // 0x28
		UIConquest* uiConquest; // 0x38
		::System::Int32 step; // 0x40

		::System::Void Initialize(UIConquest* arg, ::System::Int32 arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(UIConquest*, ::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCK_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* PlayOpenAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCK_PLAYOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCK_LATEUPDATE_OFFSET))(nullptr);
		}

	};

