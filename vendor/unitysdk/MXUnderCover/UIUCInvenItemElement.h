#pragma once
#include "../unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Collider; }
namespace MXUnderCover { class ItemDataAsset; }

#define MXUNDERCOVER_UIUCINVENITEMELEMENT_GET_ONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCA370)
#define MXUNDERCOVER_UIUCINVENITEMELEMENT_SET_ONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCA380)
#define MXUNDERCOVER_UIUCINVENITEMELEMENT_SETSELECTMARK_OFFSET UNITYSDK_OFFSET(0xDCA390)
#define MXUNDERCOVER_UIUCINVENITEMELEMENT_ONCLICK_OFFSET UNITYSDK_OFFSET(0xDCA3D0)
#define MXUNDERCOVER_UIUCINVENITEMELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCA3F0)
#define MXUNDERCOVER_UIUCINVENITEMELEMENT_SETITEM_OFFSET UNITYSDK_OFFSET(0xDCA400)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCInvenItemElement_TypeDefinitionIndex = 10038;

	class UIUCInvenItemElement : public Il2CppObject
	{
	public:
		UITexture* texture; // 0x18
		UILabel* countLabel; // 0x20
		::UnityEngine::GameObject* selectMark; // 0x28
		::UnityEngine::GameObject* cardObject; // 0x30
		::UnityEngine::GameObject* dimObject; // 0x38
		::UnityEngine::Collider* ButtonCollider; // 0x40
		Il2CppObject* _OnClickCallback_k__BackingField; // 0x48
		::System::String* itemId; // 0x50

		Il2CppObject* get_OnClickCallback()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMELEMENT_GET_ONCLICKCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_OnClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMELEMENT_SET_ONCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectMark(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMELEMENT_SETSELECTMARK_OFFSET))(str, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMELEMENT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetItem(::MXUnderCover::ItemDataAsset* arg)
		{
			((::System::Void(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMELEMENT_SETITEM_OFFSET))(arg, nullptr);
		}

	};
}

