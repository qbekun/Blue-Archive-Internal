#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Animation; }
class UILabel;
class UISprite;
namespace FlatData { class FieldDialogType; }

#define MXFIELD_UI_FIELDDIALOGTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE8A680)
#define MXFIELD_UI_FIELDDIALOGTEXT_SETDATA_OFFSET UNITYSDK_OFFSET(0xE88DA0)
#define MXFIELD_UI_FIELDDIALOGTEXT_COPLAY_OFFSET UNITYSDK_OFFSET(0xE88EE0)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldDialogText_TypeDefinitionIndex = 10666;

	class FieldDialogText : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0x18
		UILabel* textLabel; // 0x20
		UISprite* bubbleSprite; // 0x28
		::System::Single waitTime; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, ::FlatData::FieldDialogType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::String*, ::FlatData::FieldDialogType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGTEXT_SETDATA_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGTEXT_COPLAY_OFFSET))(nullptr);
		}

	};
}

