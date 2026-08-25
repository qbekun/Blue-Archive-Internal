#pragma once
#include "../../unitysdk.h"

namespace NPA::Social { class NXPKakaoOptions; }

#define NPA_SOCIAL_NXPKAKAOOPTIONS_GET_CONNECTPOPUP_OFFSET UNITYSDK_OFFSET(0x9CC3B60)
#define NPA_SOCIAL_NXPKAKAOOPTIONS_SET_CONNECTPOPUP_OFFSET UNITYSDK_OFFSET(0x9CC3B70)
#define NPA_SOCIAL_NXPKAKAOOPTIONS_GET_DISCONNECTPOPUP_OFFSET UNITYSDK_OFFSET(0x9CC3B80)
#define NPA_SOCIAL_NXPKAKAOOPTIONS_SET_DISCONNECTPOPUP_OFFSET UNITYSDK_OFFSET(0x9CC3B90)
#define NPA_SOCIAL_NXPKAKAOOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3BA0)
#define NPA_SOCIAL_NXPKAKAOOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3D50)
#define NPA_SOCIAL_NXPKAKAOOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC40A0)
#define NPA_SOCIAL_NXPKAKAOOPTIONS_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9CC4090)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPKakaoOptions_TypeDefinitionIndex = 27255;

	class NXPKakaoOptions : public Il2CppObject
	{
	public:
		NXPKakaoPopupOption* _connectPopup; // 0x10
		NXPKakaoPopupOption* _disconnectPopup; // 0x18

		NXPKakaoPopupOption* get_ConnectPopup()
		{
			return (return (NXPKakaoPopupOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOOPTIONS_GET_CONNECTPOPUP_OFFSET))(nullptr);
		}

		::System::Void set_ConnectPopup(NXPKakaoPopupOption* arg)
		{
			((::System::Void(*)(NXPKakaoPopupOption*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOOPTIONS_SET_CONNECTPOPUP_OFFSET))(arg, nullptr);
		}

		NXPKakaoPopupOption* get_DisconnectPopup()
		{
			return (return (NXPKakaoPopupOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOOPTIONS_GET_DISCONNECTPOPUP_OFFSET))(nullptr);
		}

		::System::Void set_DisconnectPopup(NXPKakaoPopupOption* arg)
		{
			((::System::Void(*)(NXPKakaoPopupOption*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOOPTIONS_SET_DISCONNECTPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOOPTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOOPTIONS_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOOPTIONS_TOSTRING_OFFSET))(nullptr);
		}

		::NPA::Social::NXPKakaoOptions* FromJson(::System::String* str)
		{
			return (return (::NPA::Social::NXPKakaoOptions*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOOPTIONS_FROMJSON_OFFSET))(str, nullptr);
		}

	};
}

