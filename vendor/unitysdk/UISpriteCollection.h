#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Object; }
class UISpriteData;
class OnHoverCB;
class OnPressCB;
class OnClickCB;
class OnDragCB;
class OnTooltipCB;
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Material; }
class INGUIAtlas;
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color32; }
class Type;
class Flip;
class Sprite;
namespace UnityEngine { class Vector3; }

#define UISPRITECOLLECTION_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x243B320)
#define UISPRITECOLLECTION_SET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x243B490)
#define UISPRITECOLLECTION_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x243B4A0)
#define UISPRITECOLLECTION_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x243B5B0)
#define UISPRITECOLLECTION_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0x243B450)
#define UISPRITECOLLECTION_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0x243B5C0)
#define UISPRITECOLLECTION_GET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x243B6F0)
#define UISPRITECOLLECTION_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x243B7C0)
#define UISPRITECOLLECTION_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x243B890)
#define UISPRITECOLLECTION_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x243B8D0)
#define UISPRITECOLLECTION_ONFILL_OFFSET UNITYSDK_OFFSET(0x243B900)
#define UISPRITECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x243CC20)
#define UISPRITECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x243CFD0)
#define UISPRITECOLLECTION_ADDSPRITE_OFFSET UNITYSDK_OFFSET(0x243CC90)
#define UISPRITECOLLECTION_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x243D040)
#define UISPRITECOLLECTION_REMOVESPRITE_OFFSET UNITYSDK_OFFSET(0x243D140)
#define UISPRITECOLLECTION_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x243D1C0)
#define UISPRITECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x243D260)
#define UISPRITECOLLECTION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x243D2F0)
#define UISPRITECOLLECTION_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x243D370)
#define UISPRITECOLLECTION_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x243D4A0)
#define UISPRITECOLLECTION_ROTATE_OFFSET UNITYSDK_OFFSET(0x243D670)
#define UISPRITECOLLECTION_GETCURRENTSPRITEID_OFFSET UNITYSDK_OFFSET(0x243D730)
#define UISPRITECOLLECTION_GETCURRENTSPRITE_OFFSET UNITYSDK_OFFSET(0x243DD20)
#define UISPRITECOLLECTION_GETCURRENTSPRITEID_OFFSET UNITYSDK_OFFSET(0x243D7A0)
#define UISPRITECOLLECTION_GETCURRENTSPRITE_OFFSET UNITYSDK_OFFSET(0x243DDA0)
#define UISPRITECOLLECTION_ONCLICK_OFFSET UNITYSDK_OFFSET(0x243E470)
#define UISPRITECOLLECTION_ONPRESS_OFFSET UNITYSDK_OFFSET(0x243E520)
#define UISPRITECOLLECTION_ONHOVER_OFFSET UNITYSDK_OFFSET(0x243E640)
#define UISPRITECOLLECTION_ONMOVE_OFFSET UNITYSDK_OFFSET(0x243E8B0)
#define UISPRITECOLLECTION_ONDRAG_OFFSET UNITYSDK_OFFSET(0x243E9E0)
#define UISPRITECOLLECTION_ONTOOLTIP_OFFSET UNITYSDK_OFFSET(0x243EA10)
#define UISPRITECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x243EB30)

	inline static constexpr unsigned int UISpriteCollection_TypeDefinitionIndex = 260;

	class UISpriteCollection : public Il2CppObject
	{
	public:
		::UnityEngine::Object* mAtlas; // 0x200
		Il2CppObject* mSprites; // 0x208
		UISpriteData* mSprite; // 0x210
		OnHoverCB* onHover; // 0x218
		OnPressCB* onPress; // 0x220
		OnClickCB* onClick; // 0x228
		OnDragCB* onDrag; // 0x230
		OnTooltipCB* onTooltip; // 0x238
		::System::Object* mLastHover; // 0x240
		::System::Object* mLastPress; // 0x248
		::System::Object* mLastTooltip; // 0x250

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_mainTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_SET_MAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		INGUIAtlas* get_atlas()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void set_atlas(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::System::Single get_pixelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GET_PIXELSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_border()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GET_BORDER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_padding()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void OnFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ONFILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::String* str, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ADD_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::String* str, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::UnityEngine::Color32* arg5)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ADD_OFFSET))(arg, str, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void AddSprite(::System::Object* arg, ::System::String* str, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::UnityEngine::Color32* arg5, ::UnityEngine::Vector2* arg6, ::System::Single arg7, Type* arg8, Flip* arg9, ::System::Boolean arg10)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::Color32*, ::UnityEngine::Vector2*, ::System::Single, Type*, Flip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ADDSPRITE_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		Il2CppObject* GetSprite(::System::Object* arg)
		{
			return ((Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GETSPRITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveSprite(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_REMOVESPRITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetSprite(::System::Object* arg, Sprite* arg2)
		{
			return ((::System::Boolean(*)(::System::Object*, Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_SETSPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetActive(::System::Object* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetPosition(::System::Object* arg, ::UnityEngine::Vector2* arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::System::Object*, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_SETPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* Rotate(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ROTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* GetCurrentSpriteID()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GETCURRENTSPRITEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetCurrentSprite()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GETCURRENTSPRITE_OFFSET))(nullptr);
		}

		::System::Object* GetCurrentSpriteID(::UnityEngine::Vector3* arg)
		{
			return ((::System::Object*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GETCURRENTSPRITEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCurrentSprite(::UnityEngine::Vector3* arg)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_GETCURRENTSPRITE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnMove(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ONMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnTooltip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_ONTOOLTIP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITECOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};

