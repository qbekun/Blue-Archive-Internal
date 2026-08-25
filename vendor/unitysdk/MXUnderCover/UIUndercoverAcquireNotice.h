#pragma once
#include "../unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }
namespace MXUnderCover { class ItemDataAsset; }

#define MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xDCD400)
#define MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_STOP_OFFSET UNITYSDK_OFFSET(0xDCD4D0)
#define MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDCD540)
#define MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCD590)
#define MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xDCD5A0)
#define MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_COPLAY_OFFSET UNITYSDK_OFFSET(0xDCD7B0)
#define MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDCD840)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUndercoverAcquireNotice_TypeDefinitionIndex = 10052;

	class UIUndercoverAcquireNotice : public Il2CppObject
	{
	public:
		UITexture* texture; // 0xD8
		UILabel* label; // 0xE0
		::UnityEngine::Animation* anim; // 0xE8
		::UnityEngine::AnimationClip* appearClip; // 0xF0
		::UnityEngine::AnimationClip* disappearClip; // 0xF8
		::System::Action* onFinished; // 0x100
		::UnityEngine::Coroutine* playCoroutine; // 0x108
		::System::String* itemImagePath; // 0x110
		::System::String* itemName; // 0x118

		::System::Void SetTexture(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_SETTEXTURE_OFFSET))(str, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_STOP_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_COPLAY_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::ItemDataAsset* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MXUnderCover::ItemDataAsset*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERACQUIRENOTICE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

