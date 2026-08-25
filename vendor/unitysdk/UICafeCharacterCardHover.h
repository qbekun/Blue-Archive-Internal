#pragma once
#include "unitysdk.h"

class UICafeCharacterCard;
class UICafeCharacterList;
namespace UnityEngine { class BoxCollider; }

#define UICAFECHARACTERCARDHOVER_GET_CHARACTERCARD_OFFSET UNITYSDK_OFFSET(0x227C830)
#define UICAFECHARACTERCARDHOVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x227C840)
#define UICAFECHARACTERCARDHOVER_ONGIVESTART_OFFSET UNITYSDK_OFFSET(0x227C850)
#define UICAFECHARACTERCARDHOVER_ONGIVEEND_OFFSET UNITYSDK_OFFSET(0x227CAB0)
#define UICAFECHARACTERCARDHOVER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x227C970)
#define UICAFECHARACTERCARDHOVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x227CBB0)
#define UICAFECHARACTERCARDHOVER_GET_BOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0x227CBC0)

	inline static constexpr unsigned int UICafeCharacterCardHover_TypeDefinitionIndex = 4649;

	class UICafeCharacterCardHover : public Il2CppObject
	{
	public:
		UICafeCharacterCard* characterCard; // 0x18
		UICafeCharacterList* characterList; // 0x20
		::UnityEngine::BoxCollider* boxCollider; // 0x28

		UICafeCharacterCard* get_CharacterCard()
		{
			return ((UICafeCharacterCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARDHOVER_GET_CHARACTERCARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARDHOVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGiveStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARDHOVER_ONGIVESTART_OFFSET))(nullptr);
		}

		::System::Void OnGiveEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARDHOVER_ONGIVEEND_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARDHOVER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARDHOVER_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::BoxCollider* get_BoxCollider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARDHOVER_GET_BOXCOLLIDER_OFFSET))(nullptr);
		}

	};

