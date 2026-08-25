#pragma once
#include "../../unitysdk.h"

namespace NPA::Promotion { class NXPToyBannerPromotion; }
namespace UnityEngine { class Texture2D; }
namespace NPA::Promotion { class NXPToyConditionalBannerOptionMeta; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class GameObject; }

#define NPA_EDITOR_NXPPROMOTIONBANNERVIEWDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D87640)
#define NPA_EDITOR_NXPPROMOTIONBANNERVIEWDATA_SETOPTION_OFFSET UNITYSDK_OFFSET(0x9D876A0)
#define NPA_EDITOR_NXPPROMOTIONBANNERVIEWDATA_SETTIMER_OFFSET UNITYSDK_OFFSET(0x9D87830)
#define NPA_EDITOR_NXPPROMOTIONBANNERVIEWDATA_DESTROYTIMER_OFFSET UNITYSDK_OFFSET(0x9D87A00)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPPromotionBannerViewData_TypeDefinitionIndex = 26282;

	class NXPPromotionBannerViewData : public Il2CppObject
	{
	public:
		::NPA::Promotion::NXPToyBannerPromotion* originData; // 0x10
		::UnityEngine::Texture2D* imageTexture; // 0x18
		::NPA::Promotion::NXPToyConditionalBannerOptionMeta* timerOptionMeta; // 0x20
		::System::Timers::Timer* timer; // 0x28
		::System::Int64 countDownDuration; // 0x30
		::System::DateTime* responseDateTime; // 0x38
		::UnityEngine::UI::Image* imageView; // 0x40
		::UnityEngine::GameObject* frameGameObject; // 0x48

		::System::Void .ctor(::NPA::Promotion::NXPToyBannerPromotion* arg, ::System::DateTime* arg, ::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyBannerPromotion*, ::System::DateTime*, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNERVIEWDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNERVIEWDATA_SETOPTION_OFFSET))(nullptr);
		}

		::System::Void SetTimer(::NPA::Promotion::NXPToyConditionalBannerOptionMeta* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyConditionalBannerOptionMeta*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNERVIEWDATA_SETTIMER_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNERVIEWDATA_DESTROYTIMER_OFFSET))(nullptr);
		}

	};
}

