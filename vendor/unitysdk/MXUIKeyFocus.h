#pragma once
#include "unitysdk.h"

class UISprite;
class MXUIKeyMapping;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class GameObject; }

#define MXUIKEYFOCUS_AWAKE_OFFSET UNITYSDK_OFFSET(0x218E820)
#define MXUIKEYFOCUS_UPDATE_OFFSET UNITYSDK_OFFSET(0x218E870)
#define MXUIKEYFOCUS_SET_OFFSET UNITYSDK_OFFSET(0x218EC40)
#define MXUIKEYFOCUS_CLEAR_OFFSET UNITYSDK_OFFSET(0x218ED90)
#define MXUIKEYFOCUS_ARROWINPUT_OFFSET UNITYSDK_OFFSET(0x218EAE0)
#define MXUIKEYFOCUS_ARROWINPUT_OFFSET UNITYSDK_OFFSET(0x218EDF0)
#define MXUIKEYFOCUS_FOCUSMXUIKEY_OFFSET UNITYSDK_OFFSET(0x218EFB0)
#define MXUIKEYFOCUS_ICONTIMER_OFFSET UNITYSDK_OFFSET(0x218F970)
#define MXUIKEYFOCUS_FOCUSMXUIKEY_OFFSET UNITYSDK_OFFSET(0x218F960)
#define MXUIKEYFOCUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x218FA00)

	inline static constexpr unsigned int MXUIKeyFocus_TypeDefinitionIndex = 4100;

	class MXUIKeyFocus : public Il2CppObject
	{
	public:
		UISprite* focusIcon; // 0x18
		::System::Single timer; // 0x20
		Il2CppObject* Mappings; // 0x28
		MXUIKeyMapping* CurrentMapping; // 0x30
		::System::Collections::IEnumerator* iconTimer; // 0x38
		::System::Int32 index; // 0x40
		::UnityEngine::Vector3* localPos; // 0x44
		::UnityEngine::Vector3* worldPos; // 0x50

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Set(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ArrowInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_ARROWINPUT_OFFSET))(nullptr);
		}

		::System::Void ArrowInput(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_ARROWINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void FocusMXUIKey(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_FOCUSMXUIKEY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* IconTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_ICONTIMER_OFFSET))(nullptr);
		}

		::System::Void FocusMXUIKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_FOCUSMXUIKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYFOCUS_.CTOR_OFFSET))(nullptr);
		}

	};

