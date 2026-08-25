#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERECHELONEVENTSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF96F0)
#define MX_SAVEDATA_CHARACTERECHELONEVENTSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF9710)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterEchelonEventSortingSaveData_TypeDefinitionIndex = 19925;

	class CharacterEchelonEventSortingSaveData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERECHELONEVENTSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERECHELONEVENTSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

