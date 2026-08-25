#pragma once
#include "unitysdk.h"

class NoteLine;
namespace UnityEngine { class Color; }

#define UICOLORMINIGAMELONGNOTELINEPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343BE0)

	inline static constexpr unsigned int UIColorMiniGameLongNoteLinePosition_TypeDefinitionIndex = 4987;

	class UIColorMiniGameLongNoteLinePosition : public Il2CppObject
	{
	public:
		NoteLine* Line; // 0x10
		::UnityEngine::Color* Color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORMINIGAMELONGNOTELINEPOSITION_.CTOR_OFFSET))(nullptr);
		}

	};

