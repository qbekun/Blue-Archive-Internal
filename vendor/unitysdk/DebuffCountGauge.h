#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UITweener;
namespace UnityEngine { class Animation; }
namespace MX::Logic::Skills::LogicEffects { class CountLogicEffectCategoryEffect; }

#define DEBUFFCOUNTGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E1B10)
#define DEBUFFCOUNTGAUGE_SHOWCOUNTLOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x25E1B20)
#define DEBUFFCOUNTGAUGE_HIDECOUNTLOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x25E1B70)
#define DEBUFFCOUNTGAUGE_SETCOUNT_OFFSET UNITYSDK_OFFSET(0x25E1BC0)

	inline static constexpr unsigned int DebuffCountGauge_TypeDefinitionIndex = 6382;

	class DebuffCountGauge : public Il2CppObject
	{
	public:
		UILabel* LabelNumber; // 0x18
		::UnityEngine::GameObject* LabelNumberPlus; // 0x20
		UITweener* LabelTweener; // 0x28
		::Il2CppArray<::System::Object*>* TagColor; // 0x30
		::Il2CppArray<::System::Object*>* TagColorEffect; // 0x38
		::UnityEngine::Animation* TagAnimation; // 0x40
		::Il2CppArray<::System::Object*>* TagAnimationClip; // 0x48
		::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect* effect; // 0x50
		::System::Int32 countOld; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUFFCOUNTGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowCountLogicEffectCategory(::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUFFCOUNTGAUGE_SHOWCOUNTLOGICEFFECTCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void HideCountLogicEffectCategory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUFFCOUNTGAUGE_HIDECOUNTLOGICEFFECTCATEGORY_OFFSET))(nullptr);
		}

		::System::Void SetCount(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUFFCOUNTGAUGE_SETCOUNT_OFFSET))(arg, arg2, nullptr);
		}

	};

