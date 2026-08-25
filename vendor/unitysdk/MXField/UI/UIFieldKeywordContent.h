#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;

#define MXFIELD_UI_UIFIELDKEYWORDCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA22D0)
#define MXFIELD_UI_UIFIELDKEYWORDCONTENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEA22F0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldKeywordContent_TypeDefinitionIndex = 10741;

	class UIFieldKeywordContent : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* noticeLabelRoot; // 0x58
		UILabel* noticeLabel; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDKEYWORDCONTENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDKEYWORDCONTENT_ONENABLE_OFFSET))(nullptr);
		}

	};
}

