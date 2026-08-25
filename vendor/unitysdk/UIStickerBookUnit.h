#pragma once
#include "unitysdk.h"

namespace MX::Data { class StickerGroupInfo; }
namespace UnityEngine { class Animation; }
class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
class UIStickerBookListNormal;
namespace UnityEngine { class Texture; }

#define UISTICKERBOOKUNIT__ONCLICKUNIT_B__8_0_OFFSET UNITYSDK_OFFSET(0xB365B0)
#define UISTICKERBOOKUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB365E0)
#define UISTICKERBOOKUNIT__INITIALIZE_B__7_0_OFFSET UNITYSDK_OFFSET(0xB365F0)
#define UISTICKERBOOKUNIT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB36620)
#define UISTICKERBOOKUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB36B50)
#define UISTICKERBOOKUNIT_ONCLICKUNIT_OFFSET UNITYSDK_OFFSET(0xB36CC0)

	inline static constexpr unsigned int UIStickerBookUnit_TypeDefinitionIndex = 8312;

	class UIStickerBookUnit : public Il2CppObject
	{
	public:
		::MX::Data::StickerGroupInfo* info; // 0x18
		::UnityEngine::Animation* ani; // 0x20
		UILabel* Title; // 0x28
		UILabel* Description; // 0x30
		UITexture* Image; // 0x38
		::UnityEngine::GameObject* redDot; // 0x40

		::System::Void _OnClickUnit_b__8_0(UIStickerBookListNormal* arg)
		{
			((::System::Void(*)(UIStickerBookListNormal*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKUNIT__ONCLICKUNIT_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__7_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKUNIT__INITIALIZE_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::StickerGroupInfo* arg)
		{
			((::System::Void(*)(::MX::Data::StickerGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKUNIT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickUnit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKUNIT_ONCLICKUNIT_OFFSET))(nullptr);
		}

	};

