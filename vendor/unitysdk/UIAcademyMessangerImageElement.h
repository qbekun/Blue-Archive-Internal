#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Texture2D; }

#define UIACADEMYMESSANGERIMAGEELEMENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x21A41A0)
#define UIACADEMYMESSANGERIMAGEELEMENT_GET_BG_OFFSET UNITYSDK_OFFSET(0x21A41E0)
#define UIACADEMYMESSANGERIMAGEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A4290)
#define UIACADEMYMESSANGERIMAGEELEMENT_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x21A42A0)
#define UIACADEMYMESSANGERIMAGEELEMENT__SETIMAGE_B__6_0_OFFSET UNITYSDK_OFFSET(0x21A4330)
#define UIACADEMYMESSANGERIMAGEELEMENT_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x21A43E0)

	inline static constexpr unsigned int UIAcademyMessangerImageElement_TypeDefinitionIndex = 4158;

	class UIAcademyMessangerImageElement : public Il2CppObject
	{
	public:
		UITexture* texture; // 0x18
		UISprite* bg; // 0x20

		::System::Void SetPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERIMAGEELEMENT_SETPOSITION_OFFSET))(arg, nullptr);
		}

		UISprite* get_Bg()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERIMAGEELEMENT_GET_BG_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERIMAGEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		UITexture* get_Texture()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERIMAGEELEMENT_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Void _SetImage_b__6_0(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERIMAGEELEMENT__SETIMAGE_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERIMAGEELEMENT_SETIMAGE_OFFSET))(str, nullptr);
		}

	};

