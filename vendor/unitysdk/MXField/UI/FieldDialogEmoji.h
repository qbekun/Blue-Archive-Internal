#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Animation; }
namespace FlatData { class FieldDialogType; }

#define MXFIELD_UI_FIELDDIALOGEMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0xE89580)
#define MXFIELD_UI_FIELDDIALOGEMOJI_GET_EMOJITYPE_OFFSET UNITYSDK_OFFSET(0xE89590)
#define MXFIELD_UI_FIELDDIALOGEMOJI_COPLAY_OFFSET UNITYSDK_OFFSET(0xE89490)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldDialogEmoji_TypeDefinitionIndex = 10663;

	class FieldDialogEmoji : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0x18
		::FlatData::FieldDialogType* emojiType; // 0x20
		::System::Int32 defaultDuration; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGEMOJI_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::FieldDialogType* get_EmojiType()
		{
			return ((::FlatData::FieldDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGEMOJI_GET_EMOJITYPE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGEMOJI_COPLAY_OFFSET))(arg, nullptr);
		}

	};
}

