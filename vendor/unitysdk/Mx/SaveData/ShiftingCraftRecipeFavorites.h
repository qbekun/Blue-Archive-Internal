#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF2250)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_ISFAVORITESRECIPE_OFFSET UNITYSDK_OFFSET(0x1CF2390)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2310)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_SETFAVORITESLISTBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1CF2410)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_ADD_OFFSET UNITYSDK_OFFSET(0x1CF2420)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF24D0)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF24E0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShiftingCraftRecipeFavorites_TypeDefinitionIndex = 19897;

	class ShiftingCraftRecipeFavorites : public Il2CppObject
	{
	public:
		Il2CppObject* Table; // 0x10
		::System::Boolean IsOnlyFavoritesList; // 0x18

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean IsFavoritesRecipe(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_ISFAVORITESRECIPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFavoritesListButtonState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_SETFAVORITESLISTBUTTONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Int64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPEFAVORITES_VALIDATE_OFFSET))(nullptr);
		}

	};
}

