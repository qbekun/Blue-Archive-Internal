#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;
class FavorLine;
class CharacterObject;
class CharacterInventoryObject;
namespace MX::Data { class CharacterData; }

#define UICAFECHARACTERFAVOR_SETUI_OFFSET UNITYSDK_OFFSET(0x22F1E10)
#define UICAFECHARACTERFAVOR_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x22F20A0)
#define UICAFECHARACTERFAVOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F2720)
#define UICAFECHARACTERFAVOR_SETFAVORRANK_OFFSET UNITYSDK_OFFSET(0x22F2420)
#define UICAFECHARACTERFAVOR_SETLINES_OFFSET UNITYSDK_OFFSET(0x22F2480)
#define UICAFECHARACTERFAVOR_TRYGETFURNITURECOMBATSTYLECOSTUMEID_OFFSET UNITYSDK_OFFSET(0x22F2530)
#define UICAFECHARACTERFAVOR_GET_CHARACTERINVENTORY_OFFSET UNITYSDK_OFFSET(0x22F2020)
#define UICAFECHARACTERFAVOR_GET_CHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x22F26A0)

	inline static constexpr unsigned int UICafeCharacterFavor_TypeDefinitionIndex = 4895;

	class UICafeCharacterFavor : public Il2CppObject
	{
	public:
		::System::Boolean isUsedSmallParcel; // 0x18
		::UnityEngine::GameObject* notOwnBG; // 0x20
		::UnityEngine::GameObject* favorWidget; // 0x28
		UITexture* texture; // 0x30
		UILabel* favorRank; // 0x38
		FavorLine* favorLine; // 0x40

		::System::Void SetUI(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERFAVOR_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetTexture(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERFAVOR_SETTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERFAVOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFavorRank(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERFAVOR_SETFAVORRANK_OFFSET))(arg, nullptr);
		}

		::System::Void SetLines(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERFAVOR_SETLINES_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetFurnitureCombatStyleCostumeId(::System::Int64 arg, int64_t&* arg2, int64_t&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERFAVOR_TRYGETFURNITURECOMBATSTYLECOSTUMEID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		CharacterInventoryObject* get_characterInventory()
		{
			return ((CharacterInventoryObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERFAVOR_GET_CHARACTERINVENTORY_OFFSET))(nullptr);
		}

		::MX::Data::CharacterData* get_characterData()
		{
			return ((::MX::Data::CharacterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERFAVOR_GET_CHARACTERDATA_OFFSET))(nullptr);
		}

	};

