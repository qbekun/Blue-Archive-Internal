#pragma once
#include "../unitysdk.h"

namespace NPA { class NPResult; }

#define NPA_INPBANNERLISTENER_ONBANNERCLICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INPBANNERLISTENER_ONBANNERFAILED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INPBANNERLISTENER_ONBANNERDISMISS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INPBannerListener_TypeDefinitionIndex = 25638;

	class INPBannerListener : public Il2CppObject
	{
	public:
		::System::Void OnBannerClick(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPBANNERLISTENER_ONBANNERCLICK_OFFSET))(str, nullptr);
		}

		::System::Void OnBannerFailed(::NPA::NPResult* arg)
		{
			((::System::Void(*)(::NPA::NPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPBANNERLISTENER_ONBANNERFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void OnBannerDismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPBANNERLISTENER_ONBANNERDISMISS_OFFSET))(nullptr);
		}

	};
}

