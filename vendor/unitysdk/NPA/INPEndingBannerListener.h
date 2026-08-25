#pragma once
#include "../unitysdk.h"

namespace NPA { class NPResult; }

#define NPA_INPENDINGBANNERLISTENER_ONENDINGBANNERCLICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INPENDINGBANNERLISTENER_ONENDINGBANNERFAILED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INPENDINGBANNERLISTENER_ONENDINGBANNERDISMISS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INPENDINGBANNERLISTENER_ONENDINGBANNEREXIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INPEndingBannerListener_TypeDefinitionIndex = 25639;

	class INPEndingBannerListener : public Il2CppObject
	{
	public:
		::System::Void OnEndingBannerClick(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPENDINGBANNERLISTENER_ONENDINGBANNERCLICK_OFFSET))(str, nullptr);
		}

		::System::Void OnEndingBannerFailed(::NPA::NPResult* arg)
		{
			((::System::Void(*)(::NPA::NPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPENDINGBANNERLISTENER_ONENDINGBANNERFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndingBannerDismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPENDINGBANNERLISTENER_ONENDINGBANNERDISMISS_OFFSET))(nullptr);
		}

		::System::Void OnEndingBannerExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPENDINGBANNERLISTENER_ONENDINGBANNEREXIT_OFFSET))(nullptr);
		}

	};
}

