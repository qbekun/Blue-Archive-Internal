#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles::StageSaveData { class FormationSaveData; }
class GroundGrid;
namespace MX::Data::Excel { class FormationLocationExcel; }
class FormationLocationKey;
namespace FlatData { class FormationLine; }
class Location;

#define MX_LOGIC_BATTLES_GROUNDFORMATION_GET_LOCATIONS_OFFSET UNITYSDK_OFFSET(0x136ECC0)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_SET_LOCATIONS_OFFSET UNITYSDK_OFFSET(0x136ECD0)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x136ECE0)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x136ECF0)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x136ED00)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x136ED10)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x136ED20)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x136ED30)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x136ED40)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x136ED90)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x136EDF0)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_FORMATIONCHANGE_OFFSET UNITYSDK_OFFSET(0x136EF00)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_GETLOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x136EE30)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_ADDLOCATIONS_OFFSET UNITYSDK_OFFSET(0x136EFE0)
#define MX_LOGIC_BATTLES_GROUNDFORMATION_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x136F300)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundFormation_TypeDefinitionIndex = 14361;

	class GroundFormation : public Il2CppObject
	{
	public:
		::System::Int32 SectionIndex; // 0x10
		::System::Int32 Index; // 0x14
		::System::Boolean IgnorePathFind; // 0x18
		::System::Boolean IsEnemy; // 0x19
		Il2CppObject* _Locations_k__BackingField; // 0x20
		::UnityEngine::Vector2* _Forward_k__BackingField; // 0x28
		::UnityEngine::Vector2* _Center_k__BackingField; // 0x30
		::System::Single _Height_k__BackingField; // 0x38

		Il2CppObject* get_Locations()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_GET_LOCATIONS_OFFSET))(nullptr);
		}

		::System::Void set_Locations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_SET_LOCATIONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Center()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_Center(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Height(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::StageSaveData::FormationSaveData* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::StageSaveData::FormationSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(GroundGrid* arg, ::MX::Data::Excel::FormationLocationExcel* arg2)
		{
			((::System::Void(*)(GroundGrid*, ::MX::Data::Excel::FormationLocationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FormationChange(GroundGrid* arg, FormationLocationKey* arg2)
		{
			((::System::Void(*)(GroundGrid*, FormationLocationKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_FORMATIONCHANGE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetLocationList(GroundGrid* arg, ::MX::Data::Excel::FormationLocationExcel* arg2)
		{
			return ((Il2CppObject*(*)(GroundGrid*, ::MX::Data::Excel::FormationLocationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_GETLOCATIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocations(::MX::Data::Excel::FormationLocationExcel* arg, GroundGrid* arg2, ::System::Int32 arg3, ::FlatData::FormationLine* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::MX::Data::Excel::FormationLocationExcel*, GroundGrid*, ::System::Int32, ::FlatData::FormationLine*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_ADDLOCATIONS_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Location* GetLocation(::FlatData::FormationLine* arg, ::System::Int32 arg2)
		{
			return ((Location*(*)(::FlatData::FormationLine*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATION_GETLOCATION_OFFSET))(arg, arg2, nullptr);
		}

	};
}

