#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Animation; }

#define UIEVENTCONTENTCLUECULPRIT_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x249A410)
#define UIEVENTCONTENTCLUECULPRIT_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x249A5F0)
#define UIEVENTCONTENTCLUECULPRIT_PLAYALLCLEAREFFECT_OFFSET UNITYSDK_OFFSET(0x249A6C0)
#define UIEVENTCONTENTCLUECULPRIT_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x249A490)
#define UIEVENTCONTENTCLUECULPRIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x249A750)

	inline static constexpr unsigned int UIEventContentClueCulprit_TypeDefinitionIndex = 5758;

	class UIEventContentClueCulprit : public Il2CppObject
	{
	public:
		UITexture* culpritImage; // 0x18
		::UnityEngine::Animation* culpritAnimation; // 0x20
		::System::String* _appearClipName; // 0x28
		::System::String* _allClearClipName; // 0x30
		::System::String* _idleLoopClipName; // 0x38
		::System::Boolean _hasPlayedAllClear; // 0x40

		::System::Void ResetState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUECULPRIT_RESETSTATE_OFFSET))(nullptr);
		}

		::System::Void SetImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUECULPRIT_SETIMAGE_OFFSET))(str, nullptr);
		}

		::System::Void PlayAllClearEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUECULPRIT_PLAYALLCLEAREFFECT_OFFSET))(nullptr);
		}

		::System::Void PlayClip(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUECULPRIT_PLAYCLIP_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUECULPRIT_.CTOR_OFFSET))(nullptr);
		}

	};

