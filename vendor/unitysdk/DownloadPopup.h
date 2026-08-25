#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;

#define DOWNLOADPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27610C0)

	inline static constexpr unsigned int DownloadPopup_TypeDefinitionIndex = 7298;

	class DownloadPopup : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* GameObject; // 0x10
		UILabel* SizeLabel; // 0x18
		MXButton* OkButton; // 0x20
		MXButton* CloseButton; // 0x28
		MXButton* CancelButton; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOWNLOADPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

