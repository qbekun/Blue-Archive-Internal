#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }

#define UIPOPUP_PERMANENTRAIDNEWRECORD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26FB870)
#define UIPOPUP_PERMANENTRAIDNEWRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FBDE0)
#define UIPOPUP_PERMANENTRAIDNEWRECORD_COPOINTANI_OFFSET UNITYSDK_OFFSET(0x26FBDF0)
#define UIPOPUP_PERMANENTRAIDNEWRECORD_POINTANISTART_OFFSET UNITYSDK_OFFSET(0x26FBE90)

	inline static constexpr unsigned int UIPopup_PermanentRaidNewRecord_TypeDefinitionIndex = 7052;

	class UIPopup_PermanentRaidNewRecord : public Il2CppObject
	{
	public:
		UILabel* popupTitle; // 0xD8
		UILabel* newScoreLabel; // 0xE0
		UILabel* bestScoreLabel; // 0xE8
		UILabel* scoreBreakPointLabel; // 0xF0
		::UnityEngine::GameObject* bestScoreTagObject; // 0xF8
		::UnityEngine::GameObject* scoreBreakPointObject; // 0x100
		::System::Boolean _isNewBestScore; // 0x108

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDNEWRECORD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDNEWRECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPointAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDNEWRECORD_COPOINTANI_OFFSET))(arg, nullptr);
		}

		::System::Void PointAniStart(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDNEWRECORD_POINTANISTART_OFFSET))(arg, nullptr);
		}

	};

