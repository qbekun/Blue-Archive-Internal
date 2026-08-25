#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class UISprite;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define SKILLOPERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x221EAA0)
#define SKILLOPERATOR_SETOPERATEALPHA_OFFSET UNITYSDK_OFFSET(0x221ED40)
#define SKILLOPERATOR_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x221ED00)
#define SKILLOPERATOR_SETTEXT_OFFSET UNITYSDK_OFFSET(0x221EE00)
#define SKILLOPERATOR_SHOWBULLETTIMEOPERATOR_OFFSET UNITYSDK_OFFSET(0x221EF60)
#define SKILLOPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x221F360)

	inline static constexpr unsigned int SkillOperator_TypeDefinitionIndex = 4425;

	class SkillOperator : public Il2CppObject
	{
	public:
		UILabel* Text; // 0x18
		UILabel* NameText; // 0x20
		UITexture* Icon; // 0x28
		UITexture* SkillIconTexture; // 0x30
		UILabel* SkillDescription; // 0x38
		UISprite* SkillDescBG; // 0x40
		UISprite* BG; // 0x48
		UISprite* IconBG; // 0x50
		::UnityEngine::GameObject* HoverTarget; // 0x58
		::System::Collections::IEnumerator* hideCoroutine; // 0x60
		::UnityEngine::Vector2* min; // 0x68
		::UnityEngine::Vector2* max; // 0x70
		::System::Boolean isOver; // 0x78

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLOPERATOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetOperateAlpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SKILLOPERATOR_SETOPERATEALPHA_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsPoint(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLOPERATOR_CONTAINSPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void SetText(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLOPERATOR_SETTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void ShowBulletTimeOperator(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLOPERATOR_SHOWBULLETTIMEOPERATOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLOPERATOR_.CTOR_OFFSET))(nullptr);
		}

	};

