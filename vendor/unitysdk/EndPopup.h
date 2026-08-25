#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;

#define ENDPOPUP_OPEN_OFFSET UNITYSDK_OFFSET(0x2294C80)
#define ENDPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2294CE0)
#define ENDPOPUP_ONCLICKEND_OFFSET UNITYSDK_OFFSET(0x2294CF0)
#define ENDPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2294DB0)

	inline static constexpr unsigned int EndPopup_TypeDefinitionIndex = 4714;

	class EndPopup : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* WinImage; // 0x18
		::UnityEngine::GameObject* LoseImage; // 0x20
		MXButton* EndButton; // 0x28

		::System::Void Open(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ENDPOPUP_OPEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPOPUP_ONCLICKEND_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

