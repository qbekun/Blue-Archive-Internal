#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UIElements { class VectorImage; }
namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_IMAGESOURCE_ISNULL_OFFSET UNITYSDK_OFFSET(0xA36BFD0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int ImageSource_TypeDefinitionIndex = 30803;

	class ImageSource : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* texture; // 0x10
		::UnityEngine::Sprite* sprite; // 0x18
		::UnityEngine::UIElements::VectorImage* vectorImage; // 0x20
		::UnityEngine::RenderTexture* renderTexture; // 0x28

		::System::Boolean IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_IMAGESOURCE_ISNULL_OFFSET))(nullptr);
		}

	};
}

