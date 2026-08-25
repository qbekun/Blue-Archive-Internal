#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Text; }
namespace TMPro { class TMP_SpriteAsset; }

#define TMPRO_TMP_SPRITEANIMATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xA177C00)
#define TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATION_OFFSET UNITYSDK_OFFSET(0xA177C50)
#define TMPRO_TMP_SPRITEANIMATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA177E50)
#define TMPRO_TMP_SPRITEANIMATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA177E60)
#define TMPRO_TMP_SPRITEANIMATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA177EE0)
#define TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA177D90)
#define TMPRO_TMP_SPRITEANIMATOR_STOPALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0xA177F10)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAnimator_TypeDefinitionIndex = 33721;

	class TMP_SpriteAnimator : public Il2CppObject
	{
	public:
		Il2CppObject* m_animations; // 0x18
		::TMPro::TMP_Text* m_TextComponent; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void DoSpriteAnimation(::System::Int32 arg, ::TMPro::TMP_SpriteAsset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DoSpriteAnimationInternal(::System::Int32 arg, ::TMPro::TMP_SpriteAsset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Int32, ::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATIONINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StopAllAnimations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_STOPALLANIMATIONS_OFFSET))(nullptr);
		}

	};
}

