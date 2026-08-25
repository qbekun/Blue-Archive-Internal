#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }

#define TMPRO_TWEENRUNNER`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TWEENRUNNER`1_STARTTWEEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TWEENRUNNER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TWEENRUNNER`1_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TWEENRUNNER`1_STOPTWEEN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int TweenRunner`1_TypeDefinitionIndex = 33646;

	class TweenRunner`1 : public Il2CppObject
	{
	public:
		::UnityEngine::MonoBehaviour* m_CoroutineContainer; // 0x0
		::System::Collections::IEnumerator* m_Tween; // 0x0

		::System::Void Init(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TWEENRUNNER`1_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void StartTween(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TWEENRUNNER`1_STARTTWEEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TWEENRUNNER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Start(Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TWEENRUNNER`1_START_OFFSET))(arg, nullptr);
		}

		::System::Void StopTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TWEENRUNNER`1_STOPTWEEN_OFFSET))(nullptr);
		}

	};
}

