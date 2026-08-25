#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
class UILabel;

#define CONQUESTCOMPLETEUICONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x2348040)
#define CONQUESTCOMPLETEUICONTROLLER_PLAYTILECOMPLETEANI_OFFSET UNITYSDK_OFFSET(0x23480F0)
#define CONQUESTCOMPLETEUICONTROLLER_PLAYTILECOMPLETECENTERANI_OFFSET UNITYSDK_OFFSET(0x23481E0)
#define CONQUESTCOMPLETEUICONTROLLER_SETOBJECTCOMPLETESTATE_OFFSET UNITYSDK_OFFSET(0x23484F0)
#define CONQUESTCOMPLETEUICONTROLLER_SETTILECOMPLETESTATE_OFFSET UNITYSDK_OFFSET(0x2348630)
#define CONQUESTCOMPLETEUICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2348770)
#define CONQUESTCOMPLETEUICONTROLLER_PLAYOBJECTCOMPLETEANI_OFFSET UNITYSDK_OFFSET(0x2348780)

	inline static constexpr unsigned int ConquestCompleteUIController_TypeDefinitionIndex = 5008;

	class ConquestCompleteUIController : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* tileCompleteAni; // 0x18
		::UnityEngine::GameObject* tileCompleteObject; // 0x20
		::UnityEngine::Animation* objectCompleteAni; // 0x28
		::UnityEngine::GameObject* objectCompleteObject; // 0x30
		::UnityEngine::Animation* tileCompleteCenterAni; // 0x38
		UILabel* completeCenterStepLabel; // 0x40
		UILabel* completeCenterMessageLabel; // 0x48

		::System::Collections::IEnumerator* PlayAnimation(::UnityEngine::Animation* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMPLETEUICONTROLLER_PLAYANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayTileCompleteAni(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMPLETEUICONTROLLER_PLAYTILECOMPLETEANI_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTileCompleteCenterAni(::System::String* str, ::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMPLETEUICONTROLLER_PLAYTILECOMPLETECENTERANI_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void SetObjectCompleteState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMPLETEUICONTROLLER_SETOBJECTCOMPLETESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTileCompleteState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMPLETEUICONTROLLER_SETTILECOMPLETESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMPLETEUICONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayObjectCompleteAni(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMPLETEUICONTROLLER_PLAYOBJECTCOMPLETEANI_OFFSET))(arg, nullptr);
		}

	};

