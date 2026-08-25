#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERECHELONSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF9660)
#define MX_SAVEDATA_CHARACTERECHELONSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF96D0)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterEchelonSortingSaveData_TypeDefinitionIndex = 19924;

	class CharacterEchelonSortingSaveData : public Il2CppObject
	{
	public:
		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERECHELONSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERECHELONSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

