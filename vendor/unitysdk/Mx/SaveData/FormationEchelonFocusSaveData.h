#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }

#define MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_CHANGETIMEATTACKFOCUSINDEX_OFFSET UNITYSDK_OFFSET(0x1D22280)
#define MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D23660)
#define MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D23710)
#define MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_SAVEFOCUSECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1D23720)
#define MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D237A0)
#define MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D23AB0)
#define MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_GETFOCUSECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1D235F0)

namespace MX::SaveData
{
	inline static constexpr unsigned int FormationEchelonFocusSaveData_TypeDefinitionIndex = 19996;

	class FormationEchelonFocusSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* FocusEchelonIndexDic_Base; // 0x10
		Il2CppObject* FocusEchelonIndexDic_Extension; // 0x18

		::System::Void ChangeTimeAttackFocusIndex(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_CHANGETIMEATTACKFOCUSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SaveFocusEchelonIndex(::FlatData::EchelonType* arg, ::System::Int32 arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::System::Int32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_SAVEFOCUSECHELONINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Int32 GetFocusEchelonIndex(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (::System::Int32(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONECHELONFOCUSSAVEDATA_GETFOCUSECHELONINDEX_OFFSET))(arg, arg, nullptr);
		}

	};
}

