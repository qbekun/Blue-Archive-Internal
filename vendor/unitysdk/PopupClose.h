#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Animation; }

#define POPUPCLOSE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2725090)
#define POPUPCLOSE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27250A0)
#define POPUPCLOSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27251E0)
#define POPUPCLOSE_OPENANIDELEYCHECK_OFFSET UNITYSDK_OFFSET(0x2725170)
#define POPUPCLOSE_SETIGNOREENABLESTATE_OFFSET UNITYSDK_OFFSET(0x2725210)
#define POPUPCLOSE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2725220)

	inline static constexpr unsigned int PopupClose_TypeDefinitionIndex = 7172;

	class PopupClose : public Il2CppObject
	{
	public:
		MXButton* buttonX; // 0x18
		::UnityEngine::BoxCollider* noneClickAreaCollider; // 0x20
		::UnityEngine::Animation* popupAni; // 0x28
		::System::Boolean ignoreEnableState; // 0x30
		::System::Boolean isClick; // 0x31

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPUPCLOSE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPUPCLOSE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPUPCLOSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OpenAniDeleyCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPUPCLOSE_OPENANIDELEYCHECK_OFFSET))(nullptr);
		}

		::System::Void SetIgnoreEnableState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + POPUPCLOSE_SETIGNOREENABLESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPUPCLOSE_ONCLICK_OFFSET))(nullptr);
		}

	};

