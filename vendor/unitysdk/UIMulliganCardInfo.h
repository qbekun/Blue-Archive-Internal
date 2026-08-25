#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;
namespace UnityEngine { class Collider; }
class CharacterObject;

#define UIMULLIGANCARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2560E50)
#define UIMULLIGANCARDINFO_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x2560E60)
#define UIMULLIGANCARDINFO_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x2560EB0)
#define UIMULLIGANCARDINFO_GETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2560F10)
#define UIMULLIGANCARDINFO_SETMULLIGANINDEX_OFFSET UNITYSDK_OFFSET(0x2560FD0)
#define UIMULLIGANCARDINFO_CLEARCHARACTER_OFFSET UNITYSDK_OFFSET(0x2561270)

	inline static constexpr unsigned int UIMulliganCardInfo_TypeDefinitionIndex = 6121;

	class UIMulliganCardInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* cardObject; // 0x98
		::UnityEngine::GameObject* MulliganMark; // 0xA0
		::UnityEngine::GameObject* MulliganMark_Sub; // 0xA8
		UILabel* mulliganIndexLabel; // 0xB0
		UISprite* mulliganIndexBg; // 0xB8
		::UnityEngine::Collider* col; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANCARDINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANCARDINFO_GET_ISSELECTED_OFFSET))(nullptr);
		}

		::System::Void SetCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANCARDINFO_SETCHARACTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Collider* GetCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANCARDINFO_GETCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void SetMulliganIndex(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANCARDINFO_SETMULLIGANINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANCARDINFO_CLEARCHARACTER_OFFSET))(nullptr);
		}

	};

