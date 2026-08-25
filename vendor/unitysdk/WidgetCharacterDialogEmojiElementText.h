#pragma once
#include "unitysdk.h"

class UILabel;
namespace MX::Data { class CharacterDialogEmojiInfo; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MX::Audio { class SimpleVoicePlayer; }

#define WIDGETCHARACTERDIALOGEMOJIELEMENTTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC288E0)
#define WIDGETCHARACTERDIALOGEMOJIELEMENTTEXT_SETDATA_OFFSET UNITYSDK_OFFSET(0xC28940)

	inline static constexpr unsigned int WidgetCharacterDialogEmojiElementText_TypeDefinitionIndex = 8901;

	class WidgetCharacterDialogEmojiElementText : public Il2CppObject
	{
	public:
		UILabel* label; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENTTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::CharacterDialogEmojiInfo* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Vector3* arg3, ::MX::Audio::SimpleVoicePlayer* arg4, ::UnityEngine::Vector3* arg5)
		{
			((::System::Void(*)(::MX::Data::CharacterDialogEmojiInfo*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::MX::Audio::SimpleVoicePlayer*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENTTEXT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};

