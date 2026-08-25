#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_GET_NEEDSTOPBOTTOMLETTERBOX_OFFSET UNITYSDK_OFFSET(0xA0621B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_GET_MOSTNARROWASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA0621C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_SET_MOSTNARROWASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA0621D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_SET_NEEDSTOPBOTTOMLETTERBOX_OFFSET UNITYSDK_OFFSET(0xA0621E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0621F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UIRenderPassSettings_TypeDefinitionIndex = 32665;

	class UIRenderPassSettings : public Il2CppObject
	{
	public:
		::System::Boolean GrabRTBeforeUI; // 0x18
		::System::Boolean ZTestAlways; // 0x19
		::System::Int32 UIRenderWidth; // 0x1C
		::System::Int32 UIRenderHeight; // 0x20
		::System::Boolean _needsTopBottomLetterBox; // 0x24
		::System::Single _mostNarrowAspectRatio; // 0x28

		::System::Boolean get_NeedsTopBottomLetterBox()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_GET_NEEDSTOPBOTTOMLETTERBOX_OFFSET))(nullptr);
		}

		::System::Single get_MostNarrowAspectRatio()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_GET_MOSTNARROWASPECTRATIO_OFFSET))(nullptr);
		}

		::System::Void set_MostNarrowAspectRatio(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_SET_MOSTNARROWASPECTRATIO_OFFSET))(arg, nullptr);
		}

		::System::Void set_NeedsTopBottomLetterBox(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_SET_NEEDSTOPBOTTOMLETTERBOX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASSSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

