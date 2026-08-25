#pragma once
#include "unitysdk.h"

#define FORMATIONPRESETSAVEINFO_GET_ECHELONPRESETDBS_OFFSET UNITYSDK_OFFSET(0x1D01F70)
#define FORMATIONPRESETSAVEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D012D0)
#define FORMATIONPRESETSAVEINFO_SET_ECHELONPRESETDBS_OFFSET UNITYSDK_OFFSET(0x1D01F80)

	inline static constexpr unsigned int FormationPresetSaveInfo_TypeDefinitionIndex = 19971;

	class FormationPresetSaveInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _EchelonPresetDBs_k__BackingField; // 0x10

		Il2CppObject* get_EchelonPresetDBs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETSAVEINFO_GET_ECHELONPRESETDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETSAVEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EchelonPresetDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETSAVEINFO_SET_ECHELONPRESETDBS_OFFSET))(arg, nullptr);
		}

	};

