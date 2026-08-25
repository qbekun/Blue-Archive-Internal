#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class RectInt; }
namespace UnityEngine::UIElements::UIR { class GradientRemap; }
namespace UnityEngine::UIElements { class TextureId; }

#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTREMAP_RESET_OFFSET UNITYSDK_OFFSET(0xA340C00)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTREMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA340B50)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int GradientRemap_TypeDefinitionIndex = 30756;

	class GradientRemap : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest
	{
	public:
		::System::Int32 origIndex; // 0x18
		::System::Int32 destIndex; // 0x1C
		::UnityEngine::RectInt* location; // 0x20
		::UnityEngine::UIElements::UIR::GradientRemap* next; // 0x30
		::UnityEngine::UIElements::TextureId* atlas; // 0x38

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTREMAP_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTREMAP_.CTOR_OFFSET))(nullptr);
		}

	};
}

